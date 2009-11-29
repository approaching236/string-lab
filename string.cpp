#include "string.h"
#include <iostream>
#include <fstream>

using namespace std;

extern ofstream csis;

String::String() {
	name = new char[2];
	mine = "";
	length = 0;
}

String::String(char *in) {
	name = new char[2];
	mine = in;
	length = strlen(in);
}

String::String(char in) {
	name = new char[2];
	mine[0] = in;
	length = 1;
}

String::~String() {
	delete mine;
	delete name;
}

void String::setName(char *n) {
	name = n;
}

void String::print() {
	cout << name << " \"" << mine << "\" " << 5 << endl;
}
