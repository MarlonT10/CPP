// Metrictonconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char choose;
    
    do
    {
        double tons, weight, boxes;
        tons;
        cout << "Enter the weight of your package \n";
        cin >> weight;
        cout << "The weight of your package is " << weight << " ounces \n";
        tons = weight / 35273.92;
        boxes = 1 / tons;
        cout << "The weight of your package in tons is " << tons << " tons. \n" << "The number of boxes needed to yield 1 metric ton of cereal is " << boxes << " boxes. \n";
        
        cout << "Would you like to continue, if yes enter y. If not, enter any other letter \n";
        cin >> choose;

    } while (choose == 'y');
    
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
