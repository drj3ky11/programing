//This programe reocrds some data from the user about a book,
//it is created to calculate the estiamted cost following some
//rules that are detailed in the readme of the repo. It is the second 'learn by / /pracitce' in the google c++ learnign course for dev
//TO IMPROVE, errors manage, input control, total amount (addition of every book estimation), add new objets (books)
#include<iostream>
#include<string>

using namespace std;

class Book {
	private:
	  string b_name;
	  float b_price;
	  int b_code, b_inventory, b_enrollment, estimation, totalprice;
	  enum B_req {required, optional};
	  B_req isitreq;
	  enum B_past {used, new_};
	  B_past isitnew;
	public:
	  void set(string title, float price, int code, int inventory, int enrollment, int est, int tpric, B_req req, B_past pas) {
	     b_name = title;
	     b_price = price;
	     b_code = code;
	     b_inventory = inventory;
	     b_enrollment = enrollment;
	     estimation = est;
	     totalprice = tpric;
	     req;
	     pas;
	     return;
	  };
	  void display_info();
	  void add_book();
	  void calc_book();
	};

void Book::add_book(){
	//This function adds a new book 
	int user_option, user_option2;	
	cout << "Please enter the book title: " << endl;
	cin >> b_name;
	cout << "Please enter the book code: " << endl;
	cin >> b_code;
	cout << "Please enter the book price: " << endl;
	cin >> b_price;
	cout << "Number on hand: " << endl;
	cin >> b_inventory;
	cout << "Prospective enrollment: " << endl;
	cin >> b_enrollment;
	cout << "0 for required / 1 for optional:" << endl;
	cin >> user_option;
	isitreq = static_cast<B_req>(user_option);
	cout << "1 for new / 0 for used: " << endl;
	cin >> user_option2;
	isitnew = static_cast<B_past>(user_option2);
	return;
	}

void Book::display_info(){
	//This function display the basic info about a book
	char *reqornot [] = //this pointers are designed to translate the enum adn print a string
	{
		"required",
		"optional"
	};
	char *newornot []=
	{
		"used",
		"new"
	};
	cout << "***************************************************" << endl;
	cout << "Title: " << b_name << endl;
	cout << "Code: "<< b_code << endl;
	cout << "Price: "<< b_price << endl;
	cout << "In inventory: "<< b_inventory << endl;
	cout << "Enrollment: "<< b_enrollment << endl;
	cout << "It is " << reqornot[isitreq] << " and " << newornot[isitnew]<< endl;
	cout << "***************************************************" << endl;
	}

void Book::calc_book(){
	int estimation;
	//here begins the stimation calc following the intsructions
	if (isitreq == 0){
	
		if (isitnew == 1){
		   estimation = b_enrollment * 0.9 - b_inventory;
		} else if (isitnew == 0){
		   estimation = b_enrollment * 0.65 - b_inventory;
		};
	} else if (isitreq == 1){
	
		if (isitnew == 1){
		   estimation = b_enrollment * 0.40 - b_inventory;
		} else if (isitnew == 0){
		   estimation = b_enrollment * 0.20 - b_inventory;
		}
	};
	cout << "Need to order: " << estimation << endl;
	totalprice = estimation * b_price;
	cout << "Total cost of : " << b_name << " is " << totalprice << endl;
	return;

}

int main(){
	int resp;
	Book book[5]; //In a future version I want to improve the way to store books
	int i , b;
	for (i = 0; i < 5; i++){
	while(1){
	book[i].add_book();
	book[i].calc_book();
	cout << "Enter 1 to do another book, 0 to stop. " << endl;
	  cin >> resp;
	  if (resp ==  0)
		  i = 5;
		  break; 
		}
	}
	cout << "Enter the numbre 1 of the book to display information " << endl;
	cin >> b;
	book[b].display_info();
	return 0;
}
