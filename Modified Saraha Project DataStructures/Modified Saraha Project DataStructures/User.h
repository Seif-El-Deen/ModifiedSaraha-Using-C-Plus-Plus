#include <list>
#include <stack>
#include <string>
#include <iostream>
#include <fstream>
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

	User(string, string);
	string getID();
	void Register(string, string);
	void logIn(string, string);
	void addContact(string);
	void undoLastMessage();
	string searchContact();
	void viewContacts();



};

