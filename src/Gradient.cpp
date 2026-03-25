#include <iostream>
#include <fstream>
#include <cmath>
#include "Extra.hpp"

int Gradient(double Fr, double Fg, double Fb, double Tr, double Tg, double Tb)
{
    std::ofstream fout("./data/texture/Gradient.ppm");

    auto k1r = Fr/255;
    auto k1g = Fg/255;
    auto k1b = Fb/255;
    
    auto k2r = Tr/255;
    auto k2g = Tg/255;
    auto k2b = Tb/255;

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
 
        auto R1 = round(j*k1r); 
        auto G1 = round(j*k1g); 
        auto B1 = round(j*k1b); 

        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {

            auto R2 = round(i*k2r); 
            auto G2 = round(i*k2g); 
            auto B2 = round(i*k2b);

            int ir = (R1+R2)/2;
            int ig = (G1+G2)/2;
            int ib = (B1+B2)/2;

            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
        }
    }
    fout.close();
    return 0;
}
