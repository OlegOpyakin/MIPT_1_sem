# pragma GCC optimize(3)
#include <iostream>
#include <fstream>
#include <cmath>

double my_sqrt(double x) {
  if (x < 0) {
    return NAN;
  }

  double left = 0, right = x + 1;
  for (int i = 0; i < 20; i++) {
    double middle = (left + right) / 2;
    if (middle * middle < x) {
      left = middle;
    } else {
      right = middle;
    }
  }

  return left;
}

int sin_def(int number){
    int returnable = 63 + 63 * sin ( number * 0.0249 );
    return returnable;
}

int main()
{
    unsigned int const width  = 1920;
    unsigned int const height = 1080;

    int a[height][width];

    //
    //
    //массив знвчений синуса>>
    //
    //
    
    int sin_mas[1000];
    int def = 0;
    int number = 0;
    for (int i = -63; i <= 63; i++)
        sin_mas[ i + 63 ] = sin_def(i);
    
    //
    //
    //нижний датчик>>
    //
    //

    int R[10];
    R[0] = 400;
    R[1] = 654;
    R[2] = 908;
    
    for(unsigned int i = 0; i < height; ++i)
        for(unsigned int j = 0; j < width; ++j)
        {
            a[i][j] += 1;
        }

    for(int p = 0; p < 3; p++){
        for(int step = 0; step < 127; step+=1){
            for(unsigned int i = 0; i < height; ++i){
                for(unsigned int j = 0; j < width; ++j)
                {
                    int arg_1 = ( height - i )*( height - i );
                    int arg_2 = ( width / 2 - j )*( width / 2 - j );
                    int summ = arg_1 + arg_2;
                    if (int (my_sqrt(summ)) == (R[p]+1-step))
                        a[i][j] += sin_mas[ 127 - step ];
                }
            }
        }

        for(int step = 0; step < 127; step+=1){
            for(unsigned int i = 0; i < height; ++i){
                for(unsigned int j = 0; j < width; ++j)
                {
                    int arg_1 = (height-i)*(height-i);
                    int arg_2 = (width/2-j)*(width/2-j);
                    int summ = arg_1 + arg_2;
                    if (int (my_sqrt(summ)) == (R[p]+step))
                        a[i][j] += sin_mas[ 127 - step ];
                }
            }
        }
    }
    
    //
    //
    //верхний датчик>>
    //
    //
    
    int R1[10];
    R1[0] = 300;
    R1[1] = 554;
    R1[2] = 808;
    for(int m = 0; m < 3; m++){
        for(int step = 1; step < 127; step+=1){
            for(unsigned int i = 0; i < height; ++i){
                for(unsigned int j = 0; j < width; ++j)
                {
                    int arg_1 = (i)*(i);
                    int arg_2 = (width/2-j)*(width/2-j);
                    int summ = arg_1 + arg_2;
                    if (int (my_sqrt(summ)) == (R1[m]+1-step/1))
                        a[i][j] += 127-step;
                }
            }
        }
    
        for(int step = 1; step < 127; step+=1){
            for(unsigned int i = 0; i < height; ++i){
                for(unsigned int j = 0; j < width; ++j)
                {
                    int arg_1 = (i)*(i);
                    int arg_2 = (width/2-j)*(width/2-j);
                    int summ = arg_1 + arg_2;
                    if (int (my_sqrt(summ)) == (R1[m]+step/1))
                        a[i][j] += 127-step;
                }
            }
        }
    }
    
    // 
    //
    //Работа с выводом в файл
    //
    //
    std::ofstream out("pic.ppm");
    out << "P3" << std::endl;
    out << width << " " << height << std::endl;
    out << "255" << std::endl;

    for(unsigned int i = 0; i < height; ++i)
    for(unsigned int j = 0; j < width; ++j)
    {
        unsigned int const r = a[i][j];
        unsigned int const g = a[i][j];
        unsigned int const b = a[i][j];
        out << r << " " << g << " " << b << " ";
    }
}