#include <iostream>
#include <fstream>
#include "Extra.hpp"

int Fill(double R, double G, double B)
{
    std::ofstream fout("./data/texture/Fill.ppm");

    const int IMAGE_WIDHT = 256, IMAGE_HEIGHT = 256;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            int ir = R;
            int ig = G;
            int ib = B;

            fout<<ir<<' '<<ig<<' '<<ib<<"\n";
        }
    }
    fout.close();
    return 0;
}
