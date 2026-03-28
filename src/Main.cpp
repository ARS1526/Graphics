#include <iostream>
#include "Extra.hpp"

int main()
{
    int Function;
    bool Exit = false;
    while(Exit != true)
    {
        std::cout<<"Select a function:\n";
        std::cout<<"1.Palette\n2.Gradient\n3.Silver lining\n4.Average two\n5.Chaos\n6.Fill\n7.Square\n0.Exit\n";
        std::cin>>Function;
        int R,G,B,R1,G1,B1,a;
        switch (Function)
            {
            case 0:
                Exit = true;
                break;
            case 1:
                std::cout<<"1.Basic\n2.Matte\n0.Back\n";
                std::cin>>Function;
                switch (Function)
                {
                    case 0:
                        break;
                    case 1:
                        Palette(0.2);
                        break;
                    case 2:
                        Palette(0.5);
                        break;
                }
                std::cout<<"Texture created\n";
                break;
            case 2:
                std::cout<<"First color in RGB\nR: ";
                std::cin>>R;
                std::cout<<"G: ";
                std::cin>>G;
                std::cout<<"B: ";
                std::cin>>B;
                std::cout<<"Second color in RGB\nR: ";
                std::cin>>R1;
                std::cout<<"G: ";
                std::cin>>G1;
                std::cout<<"B: ";
                std::cin>>B1;
                if(((R || G || B || R1 || G1 || B1) < 0) || ((R || G || B || R1 || G1 || B1) > 255))std::cout<<"Error color not possible\n";
                else 
                {
                    Gradient(R,G,B,R1,G1,B1);
                    std::cout<<"Texture created\n";
                }
                break;
            case 3:
                SilverLining();
                std::cout<<"Texture created\n";
                break;
            case 4:
                std::cout<<"First color in RGB\nR: ";
                std::cin>>R;
                std::cout<<"G: ";
                std::cin>>G;
                std::cout<<"B: ";
                std::cin>>B;
                std::cout<<"Second color in RGB\nR: ";
                std::cin>>R1;
                std::cout<<"G: ";
                std::cin>>G1;
                std::cout<<"B: ";
                std::cin>>B1;
                if(((R || G || B || R1 || G1 || B1) < 0) || ((R || G || B || R1 || G1 || B1) > 255))std::cout<<"Error color not possible\n";
                else 
                {
                    AverageTwo(R,G,B,R1,G1,B1);
                    std::cout<<"Texture created\n";
                }
                break;
            case 5:
                Chaos();
                std::cout<<"Texture created\n";
                break;
            case 6:
                std::cout<<"Color in RGB\nR: ";
                std::cin>>R;
                std::cout<<"G: ";
                std::cin>>G;
                std::cout<<"B: ";
                std::cin>>B;
                if(((R || G || B) < 0) || ((R || G || B) > 255))std::cout<<"Error color not possible\n";
                else 
                {
                    Fill(R,G,B);
                    std::cout<<"Texture created\n";
                }
                break;
            case 7:
                std::cout<<"Square color in RGB\nR: ";
                std::cin>>R;
                std::cout<<"G: ";
                std::cin>>G;
                std::cout<<"B: ";
                std::cin>>B;
                std::cout<<"Other color in RGB\nR: ";
                std::cin>>R1;
                std::cout<<"G: ";
                std::cin>>G1;
                std::cout<<"B: ";
                std::cin>>B1;
                std::cout<<"Square st\na: ";
                std::cin>>a;
                if(((R || G || B || R1 || G1 || B1 || a) < 0) || ((R || G || B || R1 || G1 || B1 || a) > 255))std::cout<<"Error args not possible\n";
                else 
                {
                    Square(R,G,B,R1,G1,B1,a);
                    std::cout<<"Texture created\n";
                }
            default:
                break;
            }
    }
    return 0;
}