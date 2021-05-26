#include <list>
#include <stack>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


#pragma once
class User
{
private:

	string ID;
	string username;
	string password;
public :
	list<User> contacts;
	//stack<Messages> messages;
	static int numOfUsers;
	list<User> sarahaUsers;
	User(string, string);
	string getID();
	static void gettingSarahaUsers(list<User> sarahaUsers);
	static void Register();
	// checks if the user is in saraha system or no data for that user
	static bool UserIsInSystem(string,string);
	static void logIn();
	void addContact(string);
	void undoLastMessage();
	string searchContact();
	void viewContacts();



};

