// HelloWorld_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Test mot GIT

#include <iostream>
using namespace std;

int main()
{
    //Fors�k p� looping
    for (int i = 0; i < 6000; i++) {
        cout << i << " ";
    }

    double summen = 0;
    for (int x = 0; x < 500000000; x++) {
        summen = ((summen + x)/2);
    }

    cout << "\n\n Summen blir: " << summen << "\n";

    cout << "Hello World!\n\n";
    cout << "Ramez is testing DevOps against GIT!\n";

    int myAge = 53 * 2;
    cout << "I am " << myAge << " years old.";

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << "\n\n" << sum;
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
