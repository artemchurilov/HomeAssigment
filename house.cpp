#include <iostream>
#include "f.h"

using namespace std;

extern string newline;

int main(){
	hello();
	cin >> newline;
	cout << "Hello, " << newline<<"!"<<endl;
}
