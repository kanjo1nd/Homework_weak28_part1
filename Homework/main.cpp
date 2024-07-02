#include "Student.h"
#include "Passport.h"

int main() {
	Aspirant obj1(78, "Stepa", 17);
	obj1.Output_Student();
	cout << "---------" << endl;
	obj1.Output();

	cout << "--------------" << endl;

	ForeignPassport obj2(234234, "Ivan", 23, 241124);
	obj2.Output_Passport();
	cout << "---------" << endl;
	obj2.Output();
}