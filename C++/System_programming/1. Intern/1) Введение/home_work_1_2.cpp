#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1252);
    std::cout << "Copyright \xA9";
    
    return 0;
}
