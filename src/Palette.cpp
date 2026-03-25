#include <iostream>
#include <fstream>
#include "Extra.hpp"

int Palette(double Blue)
{
    std::ofstream fout("./data/texture/Palette.ppm");

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            auto r = double(j) / (IMAGE_HEIGHT-1);
            auto g = double(i) / (IMAGE_HEIGHT-1);
            auto b = Blue;

            int ir = static_cast<int>(255.999*r);
            int ig = static_cast<int>(255.999*g);
            int ib = static_cast<int>(255.999*b);

            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
        }
    }
    fout.close();
    return 0;
}
