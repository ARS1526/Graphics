#include <fstream>
#include "Extra.hpp"

int FunInPPM(int Widht, int Height)
{
    std::ofstream fout("./data/texture/Palette.ppm");

    const int IMAGE_WIDHT = Widht, IMAGE_HEIGHT = Height;
    fout<<"P3\n"<<IMAGE_WIDHT<<' '<<IMAGE_HEIGHT<<"\n255\n";
    for(int j = IMAGE_WIDHT-1; j >= 0; j--)
    {
        for(int i = 0; i < IMAGE_HEIGHT; i++)
        {
            if(j == 128)fout<<0<<' '<<0<<' '<<0<<"\n";
            if(i == 128)fout<<0<<' '<<0<<' '<<0<<"\n";
            else fout<<255<<' '<<255<<' '<<255<<"\n";
            
        }
    }

    fout.close();
    return 0;
}
