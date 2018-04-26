#include "todo.h"


using namespace std;

ToDo::ToDo(int l) {
	length = l;
	list = new string[length];
}

ToDo::~ToDo() {
	delete [] list;
}

//add item to list
void ToDo::add(string i) {
	if (next < length) {
		list[next] = i;
		next++;
	}
}

//marks item as done
void ToDo::done() {
	next--;
	list[next] = "";
}

//prints list
void ToDo::print() {
	for (int i = 0; i < next; i++) {
		cout << " * " << list[i] << endl;
	}
}
