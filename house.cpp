/* Artem Churilov st130184@student.spbu.ru
   first task "Hello, World! V. 2.0"
*/

#include <iostream>
#include "f.h"

using namespace std;

int i = 42;
extern string newline;

int main(){
	hello();
	while (i>-42){
		cout << "What's your name?"<<endl;
		cin >> newline;
		cout << "Hello, " << newline<<"!"<<endl;
	}
}
