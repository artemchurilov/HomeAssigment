/* Artem Churilov st130184@student.spbu.ru
   2b task "Calculator"
*/

#include "f.h"
#include <iostream>

void add(int arr[], std::string word, int &top)
{
    arr[++top] = stoi(word); 
}

void plus(int arr[], int &top)
{
    arr[top-1] = arr[top] + arr[top-1];
    arr[top] = 0;
    --top;
}

void minus(int arr[], int &top)
{
    arr[top-1] = -arr[top] + arr[top-1];
    arr[top] = 0;
    --top;
}

void mult(int arr[], int &top)
{
    arr[top-1] = arr[top] * arr[top-1];
    arr[top] = 0;
    --top;
}

void div(int arr[], int &top)
{
    arr[top-1] = arr[top-1] / arr[top];
    arr[top] = 0;
    --top;
}


