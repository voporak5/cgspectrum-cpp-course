// Week-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;


int main()
{
    int number;

    cout << "Enter a number: ";

    while (true)
    {
        cin >> number;

        //Error flag is triggered
        if (cin.fail())
        {
            //Clear error flag so that next input has ability to trigger the flag
            cin.clear();
            //Ignore original input
            //First arg is # of characters to ignore (ignore everything)
            //Second arg is when to stop (when newline is hit)
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "That is not a number!" << endl;
        }
        else
        {
            break;
        }
    }

    cout << "Thank you!" << endl;
}