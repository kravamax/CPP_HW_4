#include<iostream>
using namespace std;

int main() {
	//Task1. Salary of the first clerk is 200$ + % from sales, sales from 500 to 1000$ - 5%, above 1000$ - 8%.
	//The user enter sales for 3 managers. Determine the best manager, pay him 200$. Show results on display.
	/*float clerk_1, clerk_2, clerk_3, sales1, sales2, sales3, sales_lvl, best_clerk;

	clerk_1 = 200, clerk_2 = 200, clerk_3 = 200;

	cout << "Enter the sales level of the first manager: ";
	cin >> sales1;

	if (sales1 < 500) { sales_lvl= 1.03; }
	else if (sales1 >= 500 && sales1 < 1000) { sales_lvl= 1.05; }
	else { sales_lvl = 1.08; }

	clerk_1 *= sales_lvl;

	cout << "Enter the sales level of the second manager: ";
	cin >> sales2;

	if (sales2 < 500) { sales_lvl = 1.03; }
	else if (sales2 >= 500 && sales2 < 1000) { sales_lvl = 1.05; }
	else { sales_lvl = 1.08; }

	clerk_2 *= sales_lvl;

	cout << "Enter the sales level of the third manager: ";
	cin >> sales3;

	if (sales3 < 500) { sales_lvl = 1.03; }
	else if (sales3 >= 500 && sales3 < 1000) { sales_lvl = 1.05; }
	else { sales_lvl = 1.08; }

	clerk_3 *= sales_lvl;

	cout <<"\nLevel of sales for the first manager: "<< clerk_1<<endl;
	cout <<"Level of sales for the second manager: "<< clerk_2<<endl;
	cout <<"Level of sales for the third manager: "<< clerk_3<<endl;

	if (clerk_1 > clerk_2 && clerk_1 > clerk_3) { cout << "\nManager 1 - the best, he getting award +200$! " << "In total - "<<clerk_1 + 200; }
	else if (clerk_2 > clerk_1 && clerk_2 > clerk_3) { cout << "\nManager 2 - the best, he getting award +200$! " << "In total - " << clerk_2 + 200; }
	else { cout << "\nManager 3 - the best, he getting award +200$! " << "In total - " << clerk_3 + 200; }*/

	//==================================================================================================================================================
	//Task2. The user enter a character. Determine what's the symbol: letter, digit, coma or other.
	char key;
	cout << "Enter a character: ";
	cin >> key;

	if (key > 64 && key < 91 && key > 96 && key < 123) {
		cout << "This is a letter.";
	}
	else if (key > 47 && key < 58) {
		cout << "This is a digit.";
	}
	else if (key > 43 && key < 47) {
		cout << "This is a punctuation mark.";
	}
	else {
		cout << "This is other character.";
	}




	cout<<("\n\n");
	system("pause");
}