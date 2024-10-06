/* Artem Churilov st130184@student.spbu.ru
   2b task "Calculator"
*/

#include <iostream>
#include <sstream>
#include <string>
#include "f.h"

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream oneword(line);
    int elementcounter = 0;
    std::string word;
    while (oneword >> word) {
        elementcounter++;
    }
    int* elements = new int[elementcounter];
    int top = -1;
    std::istringstream oneword2(line);
    int t = 0;
    while (oneword2 >> word) {
        if (word != "/" and word != "+" and word !="-" and word!="*")
        {
            add(elements, word, top);
        }
        if (word == "+")
        {
            plus(elements, top);
        }
        if (word == "-")
        {
            minus(elements, top);
        }
        if (word == "*")
        {
            mult(elements, top);
        }
        if (word == "/")
        {
            div(elements, top);
        }       
    }

    std::cout<<elements[top]<<std::endl;


    delete[] elements;
}
