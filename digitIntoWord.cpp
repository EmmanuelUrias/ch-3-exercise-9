#include <iostream>

int main()
{
    int digit;
    std::cin >> digit;

    switch (digit)
    {
    case 0:
        std::cout << "Zero";
        break;
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three";
        break;
    case 4:
        std::cout << "Four";
    default:
        std::cout << "Not a number I know";
        break;
    }

    return 0;
}