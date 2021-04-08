// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <crtdbg.h>
#include <corecrt_malloc.h>

int main()
{
    int A[10] = { 2,4,6,8,10 };
    int* p;
    int i;
    p = (int*)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for (i = 0; i < 5; i++)
        printf("%d ", A[i]);

    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);

    return 0;

    //p = new int[5];
    delete[]p;
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
