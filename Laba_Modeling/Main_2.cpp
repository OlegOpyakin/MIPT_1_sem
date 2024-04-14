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
                    a[i][j] = 128-step;
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
                    a[i][j] = 128-step;
            }
        }
    }
    int R1 = 700;
    for(int step = 1; step < 127; step+=2){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height-i)*(height-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R1-step/2) or int (my_sqrt(summ)) == (R1+1-step/2) or int (my_sqrt(summ)) == (R1-1-step/2))
                    a[i][j] = 128-step;
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
                    a[i][j] = 128-step;
            }
        }
    }

    /*for(int step = 1; step < 254; ++step){
        for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height/2-i)*(height/2-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R + step))
                    a[i][j] = 255-step;
            }
        }
    }*/

    /*for(unsigned int i = 0; i < height; ++i){
            for(unsigned int j = 0; j < width; ++j)
            {
                int arg_1 = (height/2-i)*(height/2-i);
                int arg_2 = (width/2-j)*(width/2-j);
                int summ = arg_1 + arg_2;
                if (int (my_sqrt(summ)) == (R))
                    a[i][j] = 255;
            }
        }*/
    
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