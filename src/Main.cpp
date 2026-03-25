#include <iostream>

int main()
{
    int Function;
    bool Exit = false;
    while(Exit != true)
    {
        std::cout<<"Select a function:\n";
        std::cout<<"1.Palette\n2.Gradient\n0.Exit\n";
        std::cin>>Function;
        switch (Function)
            {
            case 0:
                Exit = true;
                break;
            case 1:
                std::cout<<"1\n";
                break;
            case 2:
                std::cout<<"2\n";
                break;
            
            default:
                break;
            }
    }
    return 0;
}