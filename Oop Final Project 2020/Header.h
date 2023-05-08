#pragma once
#include<string>
using namespace std;
struct Time
{
	int mint;
	int hours;
	int sec;
};
struct Date
{
	int month;
	int day;
	int year;
};
class Addministrate
{
private:
	string patId;
	static int docId;
	static int patientId;
	string firstName;
	string lastName;
	string department;
	string userName;
	string password;
	string registrationDate;
	string gender;
	string contactNo;
	string bloodGroup;
	char address[100];
	bool feeStatus;
	string qualification;
	int salary;
	string appontmentId;		//appointment id
	string appTime;
	string appStatus;
	string parentDep;	//parent department
	Date d;
	Time t;
public:
	void sign_up();
	void add_new_doctor();
	void add_new_patient();
	void add_new_appointment();
};