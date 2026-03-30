#include <iostream>
#include <fstream>
#include <cmath>
#include "Extra.hpp"

int Square(double Fr, double Fg, double Fb, double Tr, double Tg, double Tb, int a)
{
    std::ofstream fout("./data/texture/Square.ppm");

    int ir;
    int ig;
    int ib;

    int Ot = (256-a)/2;

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            if(j > 256-Ot || i > 256-Ot)
            {
                ir = Fr;
                ig = Fg;
                ib = Fb;
            }
            else if(j < Ot || i < Ot)
            {
                ir = Fr;
                ig = Fg;
                ib = Fb;
            }
            else
            {
                ir = Tr;
                ig = Tg;
                ib = Tb;
            }
            
            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
        }
    }
    fout.close();
    return 0;
}