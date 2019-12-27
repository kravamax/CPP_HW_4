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
	/*char key;
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
	}*/

	//==================================================================================================================================================
	//Task3. The user enters a number. If it is even, multiply it by 3, else divide by 2.
	//Result display on the monitor.
	/*float number;
	
	cout << "Enter the number: ";
	cin >> number;

	if (number == 0) { cout << "You enter zero!\n"; }
	else if ((int)number % 2 == 0) { number *= 3; }
	else {number /= 2; }

	if(number) { cout << "Result: " << number; }*/
	
	//==================================================================================================================================================
	//Task4. Write a calculator program. The user enters two numbers and select an arithmetic action.
	//display the result.

	/*float num1, num2;
	int key;

	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;

	cout << "\nEnter the number for arithmetic action." << endl;
	cout << "1 --- '+'" << endl;
	cout << "2 --- '-'" << endl;
	cout << "3 --- '*'" << endl;
	cout << "4 --- '/'" << endl;
	cout << "5 --- '^'\n\n";
	cin >> key;

	switch (key)
	{
	case 1:
		cout << num1 << " + " << num2 << " = "<<num1 + num2;
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;
	case 5:
		cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
		break;
	default:
		cout << "\nYou enter wrong character!";
		break;
	}*/

	//==================================================================================================================================================
	//Task5.
	/*the plane must fly with cargo
	from point A to point C through point B.Tank capacity for
	fuel in an airplane - 300 liters.Fuel consumption
	per 1 km depending on the weight of the cargo on the aircraft, the following :
	¦ up to 500 kg - 1 liter / km;
	¦ up to 1000 kg - 4 liters / km;
	¦ up to 1500 kg - 7 liters / km;
	¦ up to 2000 kg - 9 liters / km;
	¦ more than 2000 kg - the plane does not lift.
	User enters distance between points
	A and B, and the distance between points Band C, as well as the weight
	cargo.The program should calculate what is the minimum
	the amount of fuel needed to refuel the aircraft
	in point B, to fly from point A to point C.If it is impossible to overcome any of the distances -
	the program should display an impossibility message
	flight on the entered route.*/
	
	/*int tank_capacity, distance_ab, distance_bc, fuel_spent, mass, consumption;
	
	tank_capacity = 300;
	
	cout << "Enter distance from point A to B (in km): " << endl;
	cin >> distance_ab;

	cout << "Enter distance from point B to C (in km): " << endl;
	cin >> distance_bc;

	cout << "Enter the cargo weight (in kg): " << endl;
	cin >> mass;

	if (mass < 500 && distance_ab < 300 && distance_bc < 300) {
		consumption = 1;
	}
	else if (mass >= 500 && mass < 1000 && distance_ab < 75 && distance_bc < 75) {
		consumption = 4;
	}
	else if (mass >= 1000 && mass < 1500 && distance_ab < 42 && distance_bc < 42) {
		consumption = 7;
	}
	else if (mass >= 1500 && mass < 2000 && distance_ab < 33 && distance_bc < 33) {
		consumption = 9;
	}
	else {
		cout << "A plane cannot fly with these parameters";
		consumption = 0;
	}

	fuel_spent = (tank_capacity - distance_ab * consumption) - (distance_bc * consumption);
	
	if (fuel_spent < 0 && consumption != 0) {
		fuel_spent *= -1;
		cout << "The plane need refuel minimum " << fuel_spent << " extra litters in point B to reach point C.";
	}
	else if (fuel_spent > 0 && consumption != 0) {
		cout << "You don't need refueling.";
	}*/

	//==================================================================================================================================================
	//Task6. The program calculates the cost of a call for different mobile operators.
	//User enters the cost of the conversationand chooses from which to which
	//the operator he is calling.Display the cost on the screen.

	int first_operator, last_operator, minuts, sec;
	float operator_cost, call_cost;

	cout << "Enter the code of your operator: ";
	cin >> first_operator;

	switch (first_operator)
	{
		case 96: first_operator = 1; break;
		case 97: first_operator = 1; break;
		case 98: first_operator = 1; break;
		case 67: first_operator = 1; break;
		case 68: first_operator = 1; break;
		
		
		case 50: first_operator = 2; break;
		case 66: first_operator = 2; break;
		case 95: first_operator = 2; break;
		case 99: first_operator = 2; break;
		
		case 93: first_operator = 3; break;
		case 63: first_operator = 3; break;
		case 73: first_operator = 3; break;

		default: first_operator = 0; break;
	}

	cout << "Enter the code of the outgoing operator: ";
	cin >> last_operator;
	
	switch (last_operator)
	{
		case 96: last_operator = 1; break;
		case 97: last_operator = 1; break;
		case 98: last_operator = 1; break;
		case 67: last_operator = 1; break;
		case 68: last_operator = 1; break;


		case 50: last_operator = 2; break;
		case 66: last_operator = 2; break;
		case 95: last_operator = 2; break;
		case 99: last_operator = 2; break;

		case 93: last_operator = 3; break;
		case 63: last_operator = 3; break;
		case 73: last_operator = 3; break;

		default: last_operator = 0; break;
	}
	
	if (first_operator == last_operator) {
		cout << "Enter the cost of a call on your network: ";
	}
	else {
		cout << "Enter the cost of a call on other network: ";
	}
	cin >> operator_cost;

	cout << "Enter call duration (min sec): ";
	cin >> minuts >> sec;
	if (sec > 0) {
		++minuts;
	}

	call_cost = minuts * operator_cost;

	cout << "\n\n";
	if (first_operator == 1) {
		cout << "Your operator is Kyivstar."<<endl;
	}
	else if (first_operator == 2) {
		cout << "Your operator is Vodafone." << endl;
	}
	else if (first_operator == 3) {
		cout << "Your operator is Lifecell." << endl;
	}
	else {
		cout << "Your operator is Unknown." << endl;
	}

	if (last_operator == 1) {
		cout << "Your operator is Kyivstar." << endl;
	}
	else if (last_operator == 2) {
		cout << "Your operator is Vodafone." << endl;
	}
	else if (last_operator == 3) {
		cout << "Your operator is Lifecell." << endl;
	}
	else {
		cout << "Your operator is Unknown." << endl;
	}

	if (sec > 0) {
		--minuts;
	}
	cout << "The price for " << minuts << " minuts and " << sec;
	cout << " seconds was " << (int)call_cost << "$ and " << (call_cost - (int)call_cost)*100 << " cents.";


	cout<<("\n\n");
	system("pause");
}