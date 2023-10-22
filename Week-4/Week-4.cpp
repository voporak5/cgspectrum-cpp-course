// Week-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

int GetNumber();
void Print(string message);
int Add(int n1, int n2);
float Add(float n1, float n2);
double Add(double n1, double n2);
int Max(float n1, float n2, float n3);

template <typename T>
T Add(T a, T b);

template <typename T>
void Print(string msg, T a);

template <typename T>
T Add(T v);

template <typename T, typename... Args>
T Add(T first, Args... args);

void Swap(int& n1, int& n2);

int main()
{
    int test;
    
    Print("Hello World!");

    string message = "The number of the day is " + to_string(GetNumber());
    Print(message);

    string max = "The max is: " + to_string(Max(20.2f, 50.3f,4.1f));
    Print(max);

    int n1 = 23;
    int n2 = 100;
    Print("The numbers are before swap: " + to_string(n1) + " and " + to_string(n2));
    Swap(n1, n2);
    Print("The numbers are after swap: " + to_string(n1) + " and " + to_string(n2));
}

int GetNumber()
{
    return 4;
}

void Print(string message)
{
    cout << message << endl;
}

template <typename T>
void Print(string msg, T a)
{
    cout << msg << to_string(a) << endl;
}

int Add(int n1, int n2)
{
    return n1 + n2;
}

float Add(float n1, float n2)
{
    return n1 + n2;
}

double Add(double n1, double n2)
{
    return n1 + n2;
}

//C++ version of Generics
template <typename T>
T Add(T a, T b)
{
    return a + b;
}

template <typename T>
T Add(T v)
{
    return v;
}

//Recursively call itself to add until there are none left which will hit the 
//Signle argument Add triggering the end of the recursion
template <typename T, typename... Args>
T Add(T first, Args... rest)
{
    return first + Add(rest...);
}

int Max(float n1, float n2, float n3)
{
    if (n1 > n2 && n1 > n3) return n1;
    if (n2 > n3) return n2;
    return n3;
}

//Pass memory address (reference)
void Swap(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}