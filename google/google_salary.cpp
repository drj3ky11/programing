/*You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:

Straight salary of $600 per week;
A salary of $7.00 per hour plus a 10% commission on sales;
No salary, but 20% commissions and $20 for each pair of shoes sold*/

#include<iostream>

using namespace std;

int pairs;

int get_input(){
	cout << "How many units are sold per week: " << endl;
	if (!(cin >> pairs)) {
	  cout << "Please, enter only numbers... clousing program" << endl;
	  return 1;
	} else{
	  return pairs;
	}
    }

void method1() {
	cout << "Method 1: 600" << endl;
}

int method2() {

	double salary2;
	salary2 = 7.0 * 40 + 0.1 * 225 * pairs;
        cout << "Method 2 gives you: " << salary2 << "$" << endl;
		}

int method3(){
	double salary3;
	salary3 = pairs * 20 + pairs * 225 * 0.2;
	cout << "Method 3 gives you: " << salary3 << "$" << endl;
}

int main(){

	get_input();
	method1();
	method2();
	method3();
	return 0;
}
