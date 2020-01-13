#include<iostream>
#include<time.h>

using namespace std;

int r_num, g_num; //Random num and user num

int random_gen(){
	//Random number generator 
	srand (time(NULL));
	r_num = rand() % 100 +1;
}

int main(){
	
	random_gen();
	cout << "Write your number: " << endl;
		do{
			if (!(cin >> g_num)) {
      			cout << "You entered a non-numeric. Exiting..." << endl;
			cin.clear();
     			cin.ignore(10000,'\n');
		} else {
			if (g_num < r_num){
		
				cout << "that's too low" << endl;

			} else if (g_num > r_num){
		
				cout << "that's too high" << endl;
			}
		}
	} while(r_num != g_num);
	cout << "Congratulations!" <<  endl;
	return 0;
}
