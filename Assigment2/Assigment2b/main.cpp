/* Artem Churilov st130184@student.spbu.ru
   2b task "Calculator"
*/

#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream oneword(line);
    int elementcounter = 0;
    std::string word;
    while (oneword >> word) {
        elementcounter++;
    }
    std::string* elements = new std::string[elementcounter];

    std::istringstream oneword2(line);
    int i = 0;
    while (oneword2 >> word) {
        elements[i] = word;
        i++;
    }

    for (int t = 0; t < elementcounter; t++) {
        std::cout << elements[t] << std::endl;
    }

    delete[] elements;
}
