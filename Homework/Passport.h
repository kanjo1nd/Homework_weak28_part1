#pragma once
class Passport {
protected:
	char* name;
	int age;
	int id;
public:
	Passport() = default;
	Passport(const char* n, int a, int i) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		age = a;
		id = i;
	}
	~Passport() {
		delete[] name;
	}
	void Output_Passport() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Id: " << id << endl;
	}
};

class ForeignPassport : public Passport {
	int foreignId;
public:
	ForeignPassport() = default;
	ForeignPassport(int f, const char* n, int a, int i) : Passport(n, a, i) {
		foreignId = f;
	}
	void Output() {
		Output_Passport();
		cout << "ForeignId: " << foreignId << endl;
	}
};