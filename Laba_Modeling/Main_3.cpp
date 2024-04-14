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


int main()
{
    unsigned int const width  = 1920;
    unsigned int const height = 1080;

    int a[height][width];

    //
    //
    //нижний датчик>>
    //
    //
    int R = 300;

    for(unsigned int i = 0; i < height; ++i)
        for(unsigned int j = 0; j < width; ++j)
        {
            a[i][j] = 1;
        }
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    int R1 = 450;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R1-step/2) or int (my_sqrt(summ)) == (R1+1-step/2) or int (my_sqrt(summ)) == (R1-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R1+step/2) or int (my_sqrt(summ)) == (R1+1+step/2) or int (my_sqrt(summ)) == (R1-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    int R2 = 600;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R2-step/2) or int (my_sqrt(summ)) == (R2+1-step/2) or int (my_sqrt(summ)) == (R2-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R2+step/2) or int (my_sqrt(summ)) == (R2+1+step/2) or int (my_sqrt(summ)) == (R2-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }


    int R3 = 750;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R3-step/2) or int (my_sqrt(summ)) == (R3+1-step/2) or int (my_sqrt(summ)) == (R3-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R3+step/2) or int (my_sqrt(summ)) == (R3+1+step/2) or int (my_sqrt(summ)) == (R3-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    int R4 = 900;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R4-step/2) or int (my_sqrt(summ)) == (R4+1-step/2) or int (my_sqrt(summ)) == (R4-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R4+step/2) or int (my_sqrt(summ)) == (R4+1+step/2) or int (my_sqrt(summ)) == (R4-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    //
    //
    //верхний датчик>>
    //
    //

    R = 300;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    R = 450;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    R = 600;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    R = 750;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    R = 900;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R-step/2) or int (my_sqrt(summ)) == (R+1-step/2) or int (my_sqrt(summ)) == (R-1-step/2))
                    a[i][j] += 127-step;
            }
        }
    }

    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (i)*(i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R+step/2) or int (my_sqrt(summ)) == (R+1+step/2) or int (my_sqrt(summ)) == (R-1+step/2))
                    a[i][j] += 127-step;
            }
        }
    }
    //работа с выводом картинки из массива

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