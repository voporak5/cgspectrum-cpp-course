// Week-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Swap(int* pNumber1, int* pNumber2);
void Swap(int& number1, int& number2);

void DisplayArray(int* array, int size);

int* CreateGrades(int size);

int main()
{
    std::cout << "Hello World!\n";

    int myAge = 30;
    //Set reference at initialization.
    //Reference cannot be updated to a new reference after initialization is complete.
    int& refAge = myAge;

    cout << myAge << endl; // 30
    cout << refAge << endl; //30

    myAge = 31;
    cout << myAge << endl; // 31
    cout << refAge << endl; //31

    refAge = 32;
    cout << myAge << endl; // 32
    cout << refAge << endl; //32

    //Reference needs value assigned immediately
    //Reference cannot have no value assigned
    //Reference cannot update the reference after initialization
    //Pointers can accomplish all of the above
    //Pointer stores memory address of the thing it references

    int n = 10;
    int* ptr = &n;

    cout << "n: " << n << endl; // 10
    cout << "ptr: " << ptr << endl; // address of n
    cout << "ptr val: " << *ptr << endl; // 10

    *ptr = 20;
    cout << "n: " << n << endl; // 20
    cout << "ptr val: " << *ptr << endl; // 20
    cout << "ptr address: " << &ptr << endl; // address of pointer

    bool isPlayerAlive = true;
    bool isGameOver = false;
    bool* pToBool = &isPlayerAlive; // Points to address of isPlayerAlive
    pToBool = &isGameOver; // Points to address of isGameover
    pToBool = nullptr; // pToBool points to nothing, no memory address

    // * is used to both create a ptr and dereference memory address to get the value
    int a = 10;
    int b = 20;
    int* bPtr = &b;

    // If function requires pointers you can pass in either a pointer or the memory address
    // of the thing you want to pass in
    Swap(&a, bPtr);

    // Pass in numbers directly if function asks for reference instead
    Swap(a, b);


    int myArray[3]{ 10, 20, 30 };
    int* pArrayPointer = myArray;

    cout << myArray[0] << endl; // 10
    cout << myArray[1] << endl; // 20
    cout << myArray[2] << endl; // 30

    cout << pArrayPointer[0] << endl; // 10
    cout << pArrayPointer[1] << endl; // 20
    cout << pArrayPointer[2] << endl; // 30

    cout << *(pArrayPointer + 0) << endl; // 10
    cout << *(pArrayPointer + 1) << endl; // 20
    cout << *(pArrayPointer + 2) << endl; // 30

    cout << *(myArray + 0) << endl; // 10
    cout << *(myArray + 1) << endl; // 20
    cout << *(myArray + 2) << endl; // 30

    DisplayArray(myArray, 3);
    DisplayArray(pArrayPointer, 3);

    cout << endl;

    int* pInt = new int{ 10 };

    //Free up the memory
    delete pInt;
    pInt = nullptr;

    //Overrites pointer with a new pointed address
    // and the original data becomes unreachable and is a memory leak 
    float* pFloat = new float{ 20.5f };
    pFloat = new float{ 30.5f };


    cout << pFloat[0] << endl;

    //Above example is single sized array, below example is more than one
    int* pIntArray = new int[5];

    int* pMyGrades = CreateGrades(10);

    delete[] pMyGrades;
    pMyGrades = nullptr;

}

void Swap(int* pNumber1, int* pNumber2)
{
    int temp = *pNumber1;
    *pNumber1 = *pNumber2;
    *pNumber2 = temp;
}

void Swap(int& number1, int& number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

void DisplayArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int* CreateGrades(int size)
{
    int* pointer = new int[size];
    return pointer;
}