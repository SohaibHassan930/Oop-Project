#include<iostream>
#include"header.h"
using namespace std;
int main()
{
	Addministrate obj;
	cout << "\n\n\n\n\n\t\t\t\t  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\t\t\t\t   ____________________________________________________" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|		     WELCOME TO                        |@@" << endl;
	cout << "\t\t\t\t@@|           HOSPITAL MANAGMENT SYSTEM                |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                                                    |@@" << endl;
	cout << "\t\t\t\t@@|                               Created by: M.H@seeb |@@" << endl;
	cout << "\t\t\t\t   _____________________________________________________" << endl;
	cout << "\t\t\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
	cout << "\t\t\tpress Enter key to continue: ";
	cin.get();
	system("cls");
	obj.sign_up();
	system("cls");
	while (1)
	{
		cout << "\n\n\n\n\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
		cout << "\n\n\t\t\t\tPlease,  Choose from the following Options: \n\n";
		cout << "\t\t\t\t _________________________________________________________________ \n";
		cout << "\t\t\t\t|                                           	                  |\n";
		cout << "\t\t\t\t|             1  >> Add New Doctor                                |\n";
		cout << "\t\t\t\t|             2  >> Add new Patient                               |\n";
		cout << "\t\t\t\t|             3  >> Add new Appointment                           |\n";
		cout << "\t\t\t\t|             4  >> Information About the Hospital                |\n";
		cout << "\t\t\t\t|             5  >> Exit the Program                              |\n";
		cout << "\t\t\t\t|_________________________________________________________________|\n\n";
		int option;
		cout << "Enter your Option: ";
		cin >> option;
		switch (option)
		{
		case 1:
			obj.add_new_doctor();
			break;
		case 2:
			obj.add_new_patient();
		break;
		case 3:
			obj.add_new_appointment();
			break;
		}
	}
}