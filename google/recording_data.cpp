/*This progrma crates a file to record some data
 * and finally it shows the thata recorded */

#include<iostream>
#include<fstream>

using namespace std;

int main (){

	char first_name[30], last_name[30]; int age;
	char file_name[20], resp;

	cout << "Enter the name of the file: "; cin >> file_name;

	ofstream Data_People(file_name, ios::out);
	
	while(1){
		cout << "Enter First Name: "; cin >> first_name;
		cout << "Enter Last Name: "; cin >> last_name;
		cout << "Enter Age: "; cin >> age;
	
		Data_People << first_name << endl << last_name << endl << age << endl; 
		cout << "Do youu want to continue 'y/n' " << endl;
		cin >> resp;
		if (resp ==  'n')
			break;
	}
	Data_People.close();

	ifstream Data_People_in(file_name, ios::in);
	
	while(1){
		Data_People_in >> first_name >> last_name >> age;
		if (Data_People_in.eof())//True if eofbit error flag is set.
			break;
 		cout << endl << "First name: " << first_name << '\t' << "Second name: " << 
			last_name << '\t' << "Age: " << age;
		}
	Data_People_in.close();

	return 0;
}
