/* Artem Churilov st130184@student.spbu.ru
   2b task "Calculator"
*/

#include "f.h"
#include <iostream>

void add(float arr[], std::string word, int &top)
{
    arr[++top] = stoi(word); 
}

void plus(float arr[], int &top)
{
    arr[top-1] = arr[top] + arr[top-1];
    arr[top] = 0;
    --top;
}

void minus(float arr[], int &top)
{
    arr[top-1] = -arr[top] + arr[top-1];
    arr[top] = 0;
    --top;
}

void mult(float arr[], int &top)
{
    arr[top-1] = arr[top] * arr[top-1];
    arr[top] = 0;
    --top;
}

void div(float arr[], int &top)
{
    arr[top-1] = arr[top-1] / arr[top];
    arr[top] = 0;
    --top;
}


