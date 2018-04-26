#include <iostream>
#include <string>
using namespace std;

class ToDo {
	string *list;
	int length = 0;
	int next = 0;

public:

	//creates list of length l
	ToDo(int l);

	//deletes list
	~ToDo();

	//add item to list
	void add(string i);
	
	//marks item as done
	void done();

	//prints list
	void print();
};

