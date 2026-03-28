#include <iostream>
#include <fstream>
#include <cmath>
#include "Extra.hpp"

int SilverLining()
{
    std::ofstream fout("./data/texture/SilverLining.ppm");

    auto k1r = 255/255;
    auto k1g = 255/255;
    auto k1b = 255/255;
    
    auto k2r = 255/255;
    auto k2g = 255/255;
    auto k2b = 255/255;

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        int l = 255;
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {  
            auto R1 = round(i*k1r); 
            auto G1 = round(i*k1g); 
            auto B1 = round(i*k1b); 

            auto R2 = round(l*k2r); 
            auto G2 = round(l*k2g); 
            auto B2 = round(l*k2b);

            double kr;
            double kg;
            double kb;
            
            if(R1<R2)
            {
                kr=R1/double(255);
                kr*=2;
            }
            else
            {
                kr=R2/double(255);
                kr*=2;
            }

            if(G1<G2)
            {
                kg=G1/double(255);
                kg*=2;
            }
            else
            {
                kg=G2/double(255);
                kg*=2;
            }
            if(B1<B2)
            {
                kb=B1/double(255);
                kb*=2;
            }
            else
            {
                kb=B2/double(255);
                kb*=2;
            }

            int ir = (R1+R2)*kr;
            int ig = (G1+G2)*kg;
            int ib = (B1+B2)*kb;

            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
            l--;
        }
    }
    fout.close();
    return 0;
}