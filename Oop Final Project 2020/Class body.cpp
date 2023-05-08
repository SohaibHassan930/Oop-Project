#include<iostream>
#include"header.h"
#include<fstream>
#include<string>
#include<cstdlib>
#include<time.h>
#include<conio.h>
#include<Windows.h>
int Addministrate::docId = 1000;
int Addministrate::patientId = 1000;
void Addministrate::sign_up()
{
	string a;
	cout << "\n\n\n\n\n\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
	cout << "\t\t\t\t------------------------------"<<endl;
	cout << "\t\t\t\t            LOGIN \n";
	cout << "\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\tEnter User Name: ";
	cin >> userName;
	cout << "\t\t\t\tEnter Password: ";
	cin >> password;
	ifstream myFile;
	myFile.open("Log_in.txt", ios::in);

	if (!myFile)

	{

		cout << "The file cannot open";

	}
	else
	{

		while (!myFile.eof())
		{
			myFile >> a;
			if (a == userName && a == password)
			{
				for (int i = 0; i < 100; i++)
				{
					cout << "\n\n\n\n\n\n\n";
					cout << "\t\t\t\t\t------------------------------" << endl;
					cout << "\t\t\t\t\t          Loading..."<<i<<"%";
					cout << "\n\t\t\t\t\t------------------------------\n";
					Sleep(0);
					system("cls");
				}
				
			}
			else
			{
				for (int i = 0; i < 100; i++)
				{
					cout << "\n\n\n\n\n\n\n";
					cout << "\t\t\t\t\t------------------------------" << endl;
					cout << "\t\t\t\t\t          Loading..." << i << "%";
					cout << "\n\t\t\t\t\t------------------------------\n";
					Sleep(0);
					system("cls");
				}
				cout << "Password is Incorrect." << endl;
				Sleep(1000);
				system("cls");
				sign_up();
				
			}
		}
	}
}


//*****   Add new Doctor   *****//
void Addministrate::add_new_doctor()
{
	system("cls");
	SYSTEMTIME x;
	GetSystemTime(&x);
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tTime: " << x.wHour << ":" << x.wMinute << ":" << x.wSecond << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tDate: " << x.wDay << "/" << x.wMonth << "/" << x.wYear << endl;
	string docid;
	int option1, option2; 
	cin.ignore();
	cout << "Enter First Name: ";
	getline(cin, firstName);
	cout << "Enter Last Name: ";
	getline(cin, lastName);
	cout << "\t\tEnter Department Name" << endl;
	cout << "1- Dental" << endl;
	cout << "2- Accident & Emergency" << endl;
	cout << "3- Orthopedics" << endl;
	cout << "4- Psychiatry" << endl;
	cout << "5- Physiotherapy" << endl;
	cout << "Enter Option to select the Department of Doctor: ";
	cin >> option1;
	switch (option1)
	{
	case 1:
		docid="DE";
		 department="Dental";
		docId++;
		break;
	case 2:
		docid = "AE";
		department= "Accident & Emergency";
		docId++;
		break;
	case 3:
		docid = "OR";
		department="Orthopedics";
		docId++;
		break;
	case 4:
		docid = "PS";
		department="Psychiatry";
		docId++;
		break;
	case 5:
		docid = "PH";
		department="Physiotherapy";
		docId++;
		break;
	}
	cin.ignore();
	cout << "Enter User Name: ";
	getline(cin, userName);
	cout << "Enter Password: ";
	getline(cin, password);
	cout << "Enter Registration Date: ";
	getline(cin, registrationDate);
	cout << "\t\tChose Gender: "<<endl;
	cout << "1- Male" << endl;
	cout << "2- Female" << endl;
	cout << "Enter option to choose Gender: " << endl;
	cin >> option2;
	switch (option2)
	{
	case 1:
		gender="Male";
		break;
	case 2:
		gender="Female";
		break;
	}
	cin.ignore();
	cout << "Enter Contact Number: ";
	while (1)
	{
		int num = 0;
		getline(cin, contactNo);
		num = contactNo.size();
		if (num == 11)
		{
			cout << "Correct Phone Number." << endl;
			break;
		}
		else
		{
			cout << "Wrong Phone Number.Try Again" << endl;
		}
	}
	cout << "Enter Blod Group: ";
	cin >> bloodGroup;
	cin.ignore();
	cout << "Enter Address: ";
	cin.getline(address,100 );


	//******   File Handling  ******//
	ofstream outputFile;
	outputFile.open("Doctor.txt", ios::app);
	if (!outputFile)

	{

		cout << " Error in opening the file!";

	}


	else
	{
		outputFile << "First Name: "<<firstName<<endl;
		outputFile <<"Last Name: "<< lastName << endl;
		outputFile << "Department Name: "<<department << endl;
		outputFile <<"Doctor ID: "<<docid<< docId << endl;
		outputFile << "User Name: " << userName << endl;
		outputFile << "Password: " << password << endl;
		outputFile << "Registration Date: " << registrationDate << endl;
		outputFile << "Gender: " << gender << endl;
		outputFile << "Contact Number: " << contactNo << endl;
		outputFile << "Blood Group: " << bloodGroup << endl;
		outputFile << "Address: " << address << endl;
		outputFile << "_________________________________" << endl;
		outputFile.close();

		cout << "Data Successfully Written!!!" << endl;

	}
	system("cls");
}


//*****   Add new Patient   *****//
void Addministrate::add_new_patient()
{
	system("cls");
	SYSTEMTIME x;
	GetSystemTime(&x);
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tTime: " << x.wHour << ":" << x.wMinute << ":" << x.wSecond << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tDate: " << x.wDay << "/" << x.wMonth << "/" << x.wYear << endl;
	string patientid;
	int option1, option2;
	cin.ignore();
	cout << "Enter First Name: ";
	getline(cin, firstName);
	cout << "Enter Last Name: ";
	getline(cin, lastName);
	cout << "\t\tEnter Department Name" << endl;
	cout << "1- Dental" << endl;
	cout << "2- Accident & Emergency" << endl;
	cout << "3- Orthopedics" << endl;
	cout << "4- Psychiatry" << endl;
	cout << "5- Physiotherapy" << endl;
	cout << "Enter Option to select the Department of Doctor: ";
	cin >> option1;
	switch (option1)
	{
	case 1:
		patientid = "DE";
		department = "Dental";
		patientId++;
		break;
	case 2:
		patientid = "AE";
		department = "Accident & Emergency";
		patientId++;
		break;
	case 3:
		patientid = "OR";
		department = "Orthopedics";
		patientId++;
		break;
	case 4:
		patientid = "PS";
		department = "Psychiatry";
		patientId++;
		break;
	case 5:
		patientid = "PH";
		department = "Physiotherapy";
		patientId++;
		break;
	}
	cin.ignore();
	cout << "Enter User Name: ";
	getline(cin, userName);
	cout << "Enter Password: ";
	getline(cin, password);
	cout << "Enter Registration Date: ";
	getline(cin, registrationDate);
	cout << "\t\tChose Gender: " << endl;
	cout << "1- Male" << endl;
	cout << "2- Female" << endl;
	cout << "Enter option to choose Gender: " << endl;
	cin >> option2;
	switch (option2)
	{
	case 1:
		gender = "Male";
		break;
	case 2:
		gender = "Female";
		break;
	}
	cin.ignore();
	cout << "Enter Contact Number: ";
	while (1)
	{
		int num = 0;
		getline(cin, contactNo);
		num = contactNo.size();
		if (num == 11)
		{
			cout << "Correct Phone Number." << endl;
			break;
		}
		else
		{
			cout << "Wrong Phone Number.Try Again" << endl;
		}
	}
	cout << "Enter Blod Group: ";
	cin >> bloodGroup;
	cin.ignore();
	cout << "Enter Address: ";
	cin.getline(address, 100);
	feeStatus = false;
	cout << "Fee status: "<<feeStatus<<endl;
	cin.ignore();
	cout << "Enter Qualification: ";
	getline(cin,qualification);
	cout << "Enter Salary: ";
	cin >> salary;


	//******   File Handling  ******//
	ofstream outputFile;
	outputFile.open("Patient.txt", ios::app);
	if (!outputFile)

	{

		cout << " Error in opening the file!";

	}


	else
	{
		outputFile << "First Name: " << firstName << endl;
		outputFile << "Last Name: " << lastName << endl;
		outputFile << "Department Name: " << department << endl;
		outputFile << "Doctor ID: " << patientid << patientId << endl;
		outputFile << "User Name: " << userName << endl;
		outputFile << "Password: " << password << endl;
		outputFile << "Registration Date: " << registrationDate << endl;
		outputFile << "Gender: " << gender << endl;
		outputFile << "Contact Number: " << contactNo << endl;
		outputFile << "Blood Group: " << bloodGroup << endl;
		outputFile << "Address: " << address << endl;
		outputFile << "Fee status: Rs" << feeStatus << endl;
		outputFile << "Qualification: " << qualification << endl;
		outputFile << "Salary: " << salary << endl;
		outputFile << "_________________________________" << endl;
		outputFile.close();
		cout << "Data Successfully Written!!!" << endl;
	}
	system("cls");
}

 //*****   Add new Appointment   *****//
void Addministrate::add_new_appointment()
{
	system("cls");
	cin.ignore();
	string appointmentid;
	static int appointmentId;
	int option1;
	cout << "\t\tEnter Department Name" << endl;
	cout << "1- Dental" << endl;
	cout << "2- Accident & Emergency" << endl;
	cout << "3- Orthopedics" << endl;
	cout << "4- Psychiatry" << endl;
	cout << "5- Physiotherapy" << endl;
	cout << "Enter Option to select the Department of Doctor: ";
	cin >> option1;
	switch (option1)
	{
	case 1:
		appointmentid = "DE";
		department = "Dental";
		appointmentId++;
		break;
	case 2:
		appointmentid = "AE";
		department = "Accident & Emergency";
		appointmentId++;
		break;
	case 3:
		appointmentid = "OR";
		department = "Orthopedics";
		appointmentId++;
		break;
	case 4:
		appointmentid = "PS";
		department = "Psychiatry";
		appointmentId++;
		break;
	case 5:
		appointmentid = "PH";
		department = "Physiotherapy";
		appointmentId++;
		break;
	}
	
	string a;
	int offset;
	ifstream myFile;
	myFile.open("Patient.txt");
	cout << "Enter Patient ID: ";
	cin >> patId;
	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, a);
			if ((offset = a.find(patId, 0)) != string::npos)
			{
				cout << "Id match" << endl;
			}
		}
		myFile.close();
	}
	else
	{
		cout << "This Patient Id not Found...";
	}
	cout << "Enter Appointment Time: ";
	cin>>appTime;
	if (department == "Dental")
	{
		cout << "1. Orthodontics" << endl;
		cout << "2. Periodontics" << endl;
		cout << "2. Endodontics" << endl;
		cout << "Select Parent Department: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			parentDep = "Orthodontics";
			break;
		case 2:
			parentDep = "periodontics";
			break;
		case 3:
			parentDep = "Endodontics";
			break;
		}
	}
	else if (department == "Accident & Emergency")
	{
		cout << "1. Emergency Room (ER)" << endl;
		cout << "2. Emergency Ward (EW) " << endl;
		cout << "Select Parent Department: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			parentDep = "Emergency Room (ER)";
			break;
		case 2:
			parentDep = "Emergency Ward (EW)";
			break;
		}
	}
	else if (department == "Orthopedics")
	{
		cout << "1. Orthopedics" << endl;
		cout << "Select Parent Department: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			parentDep = "Orthopedics";
			break;
		}
	}
	else if (department == "Psychiatry")
	{
		cout << "1. Child and adolescent psychiatry." << endl;
		cout << "2. Geriatric psychiatry. " << endl;
		cout << "Select Parent Department: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			parentDep = "Child and adolescent psychiatry";
			break;
		case 2:
			parentDep = "Geriatric psychiatry";
			break;
		}
	}
	else if (department == "Physiotherapy")
	{
		cout << "1. Respiratory physiotherapy on wards and intensive care units." << endl;
		cout << "2. Neurological physiotherapy. " << endl;
		cout << "Select Parent Department: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			parentDep = "Respiratory physiotherapy on wards and intensive care units";
			break;
		case 2:
			parentDep = "Neurological physiotherapy";
			break;
		}
	}
	cout << "Apointment Status: "<<endl;
	cout << "1. Unchecked." << endl;
	cout << "2. Checked." << endl;
	cout << "Select" << endl;
	cin >> option1;
	switch (option1)
	{
	case 1:
		appStatus = "Uncheched";
		break;
	case 2:
		appStatus = "Cheched";
	}
}

