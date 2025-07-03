#include <iostream.h>
#include <conio.h>
#include <string.h>

void reg();
void view();

char name[50], program[50], address[50], contact[50], religion[50];
int age, isRegister = 1;

main(){
	int option;
	do{
	clrscr();
	cout << "************ MENU ************" << endl;
	cout << "\n[1] - Register" << endl;
	cout << "[2] - View" << endl;
	cout << "[3] - Exit" << endl;
	cout << "******************************" << endl;
	cout << "Option: ";
	cin >> option;

	switch(option) {
		case 1:
			reg();
			break;
		case 2:
			view();
			break;
		case 3:
			cout << "Exiting Program..." << endl;
			break;
		default:
			cout << "Invalid option. Please try again." << endl;
		}
	} while(option != 3);
	return 0;

}

void reg() {

	cout << "\n************ REGISTER USER *************" << endl;
	cout << "Name: ";
	cin.getline(name, 50);
	cout << "Program: ";
	cin.getline(program, 50);
	cout << "Address: ";
	cin.getline(address, 50);
	cout << "Age: ";
	cin >> age;
	cout << "Contact Number: ";
	cin.getline(contact, 20);
	cout << "Religion: ";
	cin.getline(religion, 20);

	isRegister = 0;
	cout << "\nUser Registered Successfully!" << endl;

	getch();
}

void view() {
	clrscr();

	if (isRegister == 0) {
		cout << "The user is not registered. Please register first." << endl;
	} else {
		cout << "************ VIEW INFORMATION ************" << endl;
		cout << "Name: " << name << endl;
		cout << "Program: " << program << endl;
		cout << "Address: " << address << endl;
		cout << "Age: " << age << endl;
		cout << "Contact Number: " << contact << endl;
		cout << "Religion: " << religion << endl;
	}

	getch();
}