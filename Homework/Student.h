#pragma once
#include <iostream>
using namespace std;

class Student {
protected:
	char* name;
	int age;
public:
	Student() = default;
	Student(const char* n, int a) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
	}
	~Student() {
		delete[] name;
	}
	void Output_Student() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Aspirant : public Student {
	int mark;
public:
	Aspirant() = default;
	Aspirant(int m, const char* n, int a) : Student(n, a) {
		mark = m;
	}
	void Output() {
		Output_Student();
		cout << "Mark: " << mark << endl;
	}
};