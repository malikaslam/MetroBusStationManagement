#include"Metro.h"
double economy::eprice = 100;
double business::bprice = 200;
double firstClass::fprice = 300;
 
 ticket*ticket_booth::buy_ticket(int type) {
	if (type == 1) return new  economy();
	if (type == 2) return new business();
	if (type == 3) return new firstClass();
	return NULL;
}
 int main()
 {	 
	 int length=0;
	 int option0 = 0;
	 while (option0 != 3)
	 {


		 cout << "Press 1 for Employee Menu " << endl;
		 cout << "Press 2 for customer Menu " << endl;
		 cout << "Press 3 to Exit " << endl;
		 cin >> option0;
		 cout << "***********************************" << endl;
		 if (option0 == 1)
		 {
			 char nam[20];
			 int id;
			 int age;
			 int press = 0;
			 int shift_no;
			 int no;
			 cout << "Press 1 for Manager\nPress 2 for Conductor\nPress 3 for Cleaner " << endl;
			 cin >> press;
			
			 if (press == 1)
			 {

				 cout << "Enter Manager name : " << endl;
				 cin.ignore();
				 cin.getline(nam, 19);
				 cout << "Enter ID: " << endl;
				 cin >> id;
				 cout << "Enter AGE: " << endl;
				 cin >> age;
				 cout << "Enter station no:  " << endl;
				 cin >> no;
				 cout << "Enter shift no : " << endl;
				 cin >> shift_no;
				 cout << "***********************************" << endl;
				 manager m1(nam, no, shift_no, id, age);
				 m1.display();




			 }
			 if (press == 2)
			 {
				 int bus;
				 cout << "Enter Conductor name : " << endl;
				 cin.ignore();
				 cin.getline(nam, 19);
				 cout << "Enter AGE: " << endl;
				 cin >> age;
				 cout << "Enter ID: " << endl;
				 cin >> id;
				 cout << "Enter bus number:  " << endl;
				 cin >> bus;

				 cout << "***********************************" << endl;

				 conductor c1(nam, bus, id, age);
				 c1.display();


			 }
			 if (press == 3)
			 {

				
				 cout << "Enter cleaner name : " << endl;
				 cin.ignore();
				 cin.getline(nam, 19);
				 cout << "Enter ID: " << endl;
				 cin >> id;
				 cout << "Enter AGE: " << endl;
				 cin >> age;
				 cout << "Enter station no:  " << endl;
				 cin >> no;
				 cout << "Enter shift no : " << endl;
				 cin >> shift_no;
				 cout << "***********************************" << endl;

				 cleaner s1(nam, no, shift_no, id, age);
				 s1.display();
			 }


		 }
		 if (option0 == 2)
		 {
			 int option = 0;
			 while (option != 3)
			 {
				 cout << "Press 1 to show ticket prices " << endl;
				 cout << "Press 2 to buy ticket " << endl;
				 cout << "Press 3 to exit " << endl;
				 cout << "***********************************" << endl;
				 cin >> option;
				 if (option == 1)
				 {


					 cout << "Economy Class : " << economy::show_eprice() << endl;
					 cout << "Business Class : " << business::show_bprice() << endl;
					 cout << "First Class : " << firstClass::show_fprice() << endl;
					 cout << "***********************************" << endl;



				 }
				 if (option == 2){
					 int choice = 0;
					 cout << "Enter 1 to buy economy class ticket \nEnter 2 to buy business class ticket \nEnter 3 to buy First Class ticket " << endl;
					 cin >> choice;
					 while (choice < 0 || choice > 3)
					 {
						 cout << "Wrong option enter again :  " << endl;
						 cin >> choice;
					 }
					 ticket*obj1 = ticket_booth::buy_ticket(choice);
					 obj1->PrintTicket();
					 cout << "***********************************" << endl;

				 }

			 }

		 }
	 }
	 return 0;
 }