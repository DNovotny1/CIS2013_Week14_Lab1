#include <iostream>
#include <cstring>
#include "todo.h"
using namespace std;

class Todo {

};


int main() {
	char next = 'y';
	int length = 0;
	string action;


	cout << "How long do you want your list?\n";
	cin >> length;

	ToDo list(length);
	while (next != 'n') {


		cout << "Add to list (a)\nDone with item(d)\nPrint list(p)\nexit(x)\n";
		cin >> next;
		switch(next) {
		case 'a':
			cin >> action;
			list.add(action);
			break;
		case 'd':
			list.done();
			break;
		case 'p':
			list.print();
			break;
		case 'x':
			
			break;

		}
	}
}
