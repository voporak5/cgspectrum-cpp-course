// Week-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    while (true)
    {
        int choice;
        int number;
        bool exit = false;

        cout << "Choose an option" << endl;
        cout << "1) Odd Number Checker" << endl;
        cout << "2) Even Number Checker" << endl;
        cout << "3) Exit" << endl;

        cin >> choice;

        switch(choice)
        {
        case 1:
            number = 0;
            while (number % 2 == 0)
            {
                cout << "Please enter an odd number: ";
                cin >> number;
                cout << endl;
            }
            break;
        case 2:
            number = 1;
            while (number % 2 != 0)
            {
                cout << "Please enter an even number: ";
                cin >> number;
                cout << endl;
            }
            break;
        case 3:
            exit = true;
            break;
        }

        cout << "Thank you!";

        if (exit) break;
    }
}