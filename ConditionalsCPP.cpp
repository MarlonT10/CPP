// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int main()
{
    std::cout << "Hello World!\n";
    int i;
    std::cout << "Enter a number: \n";
    std::cin >> i;
    if (i < 25)
    {
        std::cout << "Too High, reenter number";
        std::cin >> i;
        std::cout << "New Number Is" << i << "\n";
        if (i < 25)
        {
            std::cout << "Too High, reenter number";
            std::cin >> i;
            std::cout << "New Number Is" << i << "\n";
        }



    }
    else if (i > 25) 
    {
        std::cout << "Perfect";
    }


    std::vector<int> numbers = { 2,4,3,6,1,9 };
    int even, odd;
    even = 0;
    odd = 1;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even = numbers[i] + even;
        }
        else
        {
            odd = numbers[i] * odd;
        }

    }
    std::cout << "Even is" << even;
    std::cout << "Odd is" << odd;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
