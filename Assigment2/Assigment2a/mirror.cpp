/* Artem Churilov st130184@student.spbu.ru
   2a task "Mirror Data"
*/

#include <iostream>
#include "header.h"

void mirror(char buffer[], uintmax_t fsize)
{
    char savevar;
    int i=0;
    for (i=0; i<fsize/2; i++)
        {
             savevar=buffer[i];
             buffer[i] = buffer[fsize - i-1];
             buffer[fsize-i-1] = savevar;
        }



}

