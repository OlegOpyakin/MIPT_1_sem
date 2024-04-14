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
            a[i][j] = 0;
        }

    for(unsigned int i = 0; i < height; ++i)
        for(unsigned int j = 0; j < width; ++j)
        {
            int arg_1 = (height/2-i)*(height/2-i);
            int arg_2 = (width/2-j)*(width/2-j);
            int summ = arg_1 + arg_2;
            if (int (my_sqrt(summ)) == R or int (my_sqrt(summ)) == R+1 or int (my_sqrt(summ)) == R-1)
                a[i][j] = 1;
        }

    //работа с выводом картинки из массива

    std::ofstream out("pic.ppm");
    out << "P3" << std::endl;
    out << width << " " << height << std::endl;
    out << "255" << std::endl;

    for(unsigned int i = 0; i < height; ++i)
    for(unsigned int j = 0; j < width; ++j)
    {
        if (a[i][j] == 1){
            unsigned int const r = 200.;
            unsigned int const g = 200.;
            unsigned int const b = 255.;
            out << r << " " << g << " " << b << " ";
        }
        else{
            unsigned int const r = 0;
            unsigned int const g = 0;
            unsigned int const b = 0;
            out << r << " " << g << " " << b << " ";
        }
    }
}