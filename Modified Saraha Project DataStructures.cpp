//#include "User.cpp"

#include "User.h"


void AppDiscription(short int &choice) {
	cout << "\t\t\tIn this function we will write a discription to the app.\n\n\n";
	cout << "1-Return to the start page." << endl
		<< "2-Close the program." << endl
		<<"choice: ";
		cin >> choice;
		choice == 2 ? choice = 5 : choice = 1;
}

void Credits(short int& choice) {
	cout << "\t\t\tIn this Page we will add cridets.\n\n\n";
	cout << "1-Return to the start page." << endl
		<< "2-Close the program." << endl
		<<"choice: ";
	cin >> choice;
	choice == 2 ? choice = 5 : choice = 1;
}


void appStart() {
	short int choice=0;
	while (choice != 5) {
		cout << "Please choose one of the following insturctions: " << endl
			<< "1- App Discription" << endl
			<< "2- Register" << endl
			<< "3- Log-in" << endl
			<< "4- Credits" << endl
			<< "5- Exit Program" << endl;
		cout << "Choice: ";
		cin >> choice;
		User u1 = User("seif", "test1234");
		switch (choice)
		{
		case 1:
			system("cls");
			AppDiscription(choice);
			system("cls");

			break;
		case 2:
			User::Register();
			break;
		case 3:
			User::logIn();
			u1.gettingSarahaUsers(u1.sarahaUsers);
			break;
		case 4:
			Credits(choice);
			break;
		default:
			break;
		}
	}
	
}


int main() {


	appStart();

	return 0;
}







//void spliteLine() {
//	fstream fin;
//	// Open an existing file
//	fin.open("Username&Password.csv", ios::in);
//	for (int j = 0;j < 3;j++) {
//		string line1;
//		getline(fin, line1);
//		vector<string> values;
//		stringstream s_stream(line1);
//		while (s_stream.good()) {
//			string substr;
//			getline(s_stream, substr, ',');
//			values.push_back(substr);
//		}
//		for (int i = 0;i < 2;i++) {
//			cout << values[i] << i << endl;
//		}
//	}
//	
//}


//void read_record()
//{
//	// File pointer
//	fstream fin;
//	// Open an existing file
//	fin.open("Username&Password.csv", ios::in);
//
//	string line1, line2;
//
//	getline(fin, line1);
//	getline(fin, line2);
//
//
//	cout << line1 << endl;
//	cout << line2 << endl;
//}