#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Register() {
	
	fstream readData;
	
	readData.open("Username&Password.csv", ios::out | ios::app);

	string username="", password="",id="";

	cout << "Please enter your ID: ";
	cin >> id;
	cout << "Please enter a username: ";
	cin >> username;
	cout << "Please enter a password: ";
	cin >> password;
	
	readData << id << ", " << username << ", " << password<<endl;
}

void read_record()
{
	// File pointer
	fstream fin;
	// Open an existing file
	fin.open("Username&Password.csv", ios::in);

	string line1, line2;

	getline(fin, line1);
	getline(fin, line2);

	cout << line1 << endl;
	cout << line2 << endl;
}

void appStart() {
	cout << "Please choose one of the following insturctions: " << endl
		<< "1- Register" << endl
		<< "2- Log-in" << endl
		<< "3- Exit Program" << endl;
	cout << "Choice: ";
	short int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		Register();
		break;
	case 2:
		read_record();
		break;
	default:
		break;
	}
}

int main() {

	appStart();

	return 0;
}