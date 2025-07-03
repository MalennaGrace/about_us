
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void reg(), view();
char name[50], program[50], address[50], contact[20], religion[20];
int age, registerUser = 0, option;

main() {
	clrscr();
	do {
		clrscr();
		cout << "*****REGISTER AND VIEW INFORMATION*****"
		cout << "**************** MENU *****************" << endl;
		cout << "\n[1] - Register" << endl;
		cout << "[2] - View" << endl;
		cout << "[3] - Exit" << endl;
		cout << "\n*************************************" << endl;
		cout << "Option: ";
		cin >> option;

		switch (option) {
			case 1:
				reg();
				break;
			case 2:
				view();
				break;
			case 3:
				cout << "Exiting Program..." << endl;
				break;
			deafult:
				cout << "Invalid Option. Please try again!" << endl;
		}
	} while (option != 3);
	return 0;

}

void reg() {
	clrscr();
	cout << "\n************ USER REGISTER ************" << endl;
	cout << "Name: ";
	gets(name);
	cout << "Program: ";
	gets(program);
	cout << "Address: ";
	gets(address);
	cout << "Age: ";
	cin >> age;
	cout << "Contact Number: ";
	gets(contact);
	cout << "Religion: ";
	gets(religion);

	registerUser = 1;
	cout << "\nUser Registered Successfully!" << endl;

	getch();

}

void view() {
	clrscr();
	if (registerUser == 0) {
		cout << "User cannot be found. Please register first" << endl;
	} else {
	       cout << "\n************ VIEW INFORMATION ************" << endl;
	       cout << "Name: " << name << endl;
	       cout << "Program: " << program << endl;
	       cout << "Address: " << address << endl;
	       cout << "Age: " << age << endl;
	       cout << "Contact Number: " << contact << endl;
	       cout << "Religion: " << religion << endl;
	}
	getch();
}