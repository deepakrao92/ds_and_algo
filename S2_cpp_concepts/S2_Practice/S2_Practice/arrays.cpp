// S2_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[5]{1,2,3,4,5};
    //std::cout << sizeof(array);
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "+The value at address " << &array[i] << " is " << array[i] << std::endl;
        printf("*The value at address %p is %d\n", &array[i], array[i]);
    }
    // std::cout << "Hello World!\n";
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
