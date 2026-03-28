#include <iostream>
#include <fstream>
#include <cmath>
#include "Extra.hpp"

int AverageTwo(double Fr, double Fg, double Fb, double Tr, double Tg, double Tb)
{
    std::ofstream fout("./data/texture/AverageTwo.ppm");

    int ir;
    int ig;
    int ib;
    int rand;
    srand(time(0));

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            if(rand = 1 + std::rand() % 10; i < 64 + rand)
            {
                ir = Fr;
                ig = Fg;
                ib = Fb;
            }
            else if(rand = 1 + std::rand() % 10; i > 192 - rand)
            {
                ir = Tr;
                ig = Tg;
                ib = Tb;
            }
            else
            {
                ir = (Fr+Tr)/2;
                ig = (Fg+Tg)/2;
                ib = (Fb+Tb)/2;
            }
            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
        }
    }
    fout.close();
    return 0;
}