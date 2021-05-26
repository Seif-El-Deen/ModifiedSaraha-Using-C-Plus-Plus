#include "User.h"

User::User(string, string)
{
}

string User::getID()
{
	return string();
}

void User::gettingSarahaUsers(list<User> sarahaUser) {
	fstream fin;
	// Open an existing file
	fin.open("Username&Password.csv", ios::in);
	string line;
	while (true) {
		getline(fin, line);
		if (line == "")
			break;
		vector<string> values;
		stringstream s_stream(line);
		while (s_stream.good()) {
			string substr;
			getline(s_stream, substr, ',');
			values.push_back(substr);
		}
		sarahaUser.push_back(User(values[0], values[1]));
	}
	cout << sarahaUser.size() << endl;
}
bool User::UserIsInSystem(string enteredUsername,string EnteredPassword) {
	fstream fin;
	// Open an existing file
	fin.open("Username&Password.csv", ios::in);
	bool userFound = false;
	while (true) {
		string line1;
		getline(fin, line1);
		vector<string> values;
		stringstream s_stream(line1);
		while (s_stream.good()) {
			string substr;
			getline(s_stream, substr, ',');
			values.push_back(substr);
		}
		if (enteredUsername == values[0]) {
			userFound = true;
			break;
		}
		else if (values[0] == "") {
			break;
		}
	}
	return userFound;
}
void User::Register()
{
	system("cls");
	fstream readData;
	readData.open("Username&Password.csv", ios::out | ios::app);

	fstream fin;
	// Open an existing file
	fin.open("Username&Password.csv", ios::in);

	string enteredUsername = "", enteredPassword = "";
	bool userFound=false;
	do {
		userFound = false;
		cout << "Please enter a username: ";
		cin >> enteredUsername;
		cout << "Please enter a password: ";
		cin >> enteredPassword;

		while (!userFound) {
			string line1;
			getline(fin, line1);
			vector<string> values;
			stringstream s_stream(line1);
			while (s_stream.good()) {
				string substr;
				getline(s_stream, substr, ',');
				values.push_back(substr);
			}
			if (enteredUsername == values[0]) {
				userFound = true;
				break;
			}
			else if (values[0] == "") {
				break;
			}
		}
		if (userFound) {
			cout << "The entered user name is invalied Please enter a different username" << endl;
		}
	} while (userFound);

	readData << enteredUsername << "," << enteredPassword << endl;
	cout << "Successfully Registered" << endl;

}

void User::logIn()
{
	fstream fin;
	// Open an existing file
	fin.open("Username&Password.csv", ios::in);

	string enteredUsername = "", enteredPassword = "";
	bool userFound = false;
	do {
		userFound = false;
		cout << "Please enter a username: ";
		cin >> enteredUsername;
		cout << "Please enter a password: ";
		cin >> enteredPassword;
		while (!userFound) {
			string line1;
			getline(fin, line1);
			vector<string> values;
			stringstream s_stream(line1);
			while (s_stream.good()) {
				string substr;
				getline(s_stream, substr, ',');
				values.push_back(substr);
			}
			if (enteredUsername == values[0]&& enteredPassword==values[1]) {
				userFound = true;
				break;
			}
			else if (values[0] == "") {
				cout << "The username or the password may be wrong please try again!!!" << endl;
				break;
			}
		}
	} while (!userFound);
	cout << "Succesfully logged in" << endl;

}

void User::addContact(string)
{
}

void User::undoLastMessage()
{
}

string User::searchContact()
{
	return string();
}

void User::viewContacts()
{
}
