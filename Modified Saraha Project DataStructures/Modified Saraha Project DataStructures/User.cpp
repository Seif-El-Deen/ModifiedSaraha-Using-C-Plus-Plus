#include "User.h"

void User::Register(string username,string password) {

	fstream readData;

	readData.open("Username&Password.csv", ios::out | ios::app);


	readData << username << ", " << password << endl;
}