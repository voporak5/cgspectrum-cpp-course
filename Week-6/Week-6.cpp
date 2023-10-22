// Week-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <conio.h>

using namespace std;
constexpr char kPlayerSymbol = '@';

int playerX = 1;
int playerY = 1;

int numbers[4];
// = sign is optional
int moreNumbers[] = {3232, 454, 292, 2341};

int multiArray[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

char level[10][10] = {
    {'+','-','-','-','-','-','-','-','-','+'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
    {'+','-','-','-','-','-','-','-','-','+'}
};

//int ArraySize(int arr[])
/*void CountNumbers(int numbers[]);*/

template <typename T>
int ArraySize(T* a);

void Draw(char level[][10],int rows, int columns, int playerX, int playerY);
void UpdatePlayerPosition(int& playerX, int& playerY);

int main()
{
    numbers[0] = 23;
    numbers[1] = 32;
    numbers[2] = 11;
    numbers[3] = 156485;


    std::cout << "Hello World!\n";

    cout << ArraySize<int>(numbers) << endl;
    /*
    int al = sizeof(numbers) / sizeof(numbers[0]); //length calculation
    cout << "The length of the array is: " << al;*/
    
    /*
    while (true)
    {
        //Clears the screen (clear system)
        system("cls");
        Draw(level, 10, 10,playerX,playerY);
        UpdatePlayerPosition(playerX, playerY);
    }
    */
}

void Draw(char level[][10],int rows, int columns, int playerX, int playerY)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (j == playerX && i == playerY)   cout << kPlayerSymbol;
            else                                cout << level[i][j];
        }

        cout << endl;
    }
}

void CountNumbers(int numbers[])
{

}

void UpdatePlayerPosition(int& playerX, int& playerY)
{
    char input = _getch();

    switch (input)
    {
    case 'w':
    case 'W':
        playerY--;
        break;
    case 's':
    case 'S':
        playerY++;
        break;
    case 'a':
    case 'A':
        playerX--;
        break;
    case 'd':
    case 'D':
        playerX++;
        break;
        
    }
}

/*int ArraySize*/

template <typename T>
int ArraySize(T* a)
{
    return sizeof(a) / sizeof(a[0]);
}