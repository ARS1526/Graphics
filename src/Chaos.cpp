#include <iostream>
#include <fstream>
#include <cmath>
#include "Extra.hpp"

int Chaos()
{
    std::ofstream fout("./data/texture/Chaos.ppm");

    
    int ir;
    int ig;
    int ib;
    srand(time(0));

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        double Fr = 1 + std::rand() % 255; 
        double Fg = 1 + std::rand() % 255;
        double Fb = 1 + std::rand() % 255;
        double Tr = 1 + std::rand() % 255;
        double Tg = 1 + std::rand() % 255;
        double Tb = 1 + std::rand() % 255;
        double Chr = 1 + std::rand() % 255;
        double Chg = 1 + std::rand() % 255;
        double Chb = 1 + std::rand() % 255;
        
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            if(i < 1 + std::rand() % 255)
            {
                ir = (Tr+Chr)/2;
                ig = (Tg+Chg)/2;
                ib = (Tb+Chb)/2;
            }
            else if(i < 1 + std::rand() % 255)
            {
                ir = (Fr+Chr)/2;
                ig = (Fg+Chg)/2;
                ib = (Fb+Chb)/2;
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