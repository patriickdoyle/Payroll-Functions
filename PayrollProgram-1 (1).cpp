/*CSCI 112
payrollProgram.cpp
Prof. Herbert
Last edited by Pat Doyle 2/26
*/

#include <iostream>

using namespace std;

void getUserInput(double &x, double &y);
double getGrossPay (double &x, double &y);
void payRollReport (double &x, double &y, double &z);

//forward declaration of functions

main(){
	
	double hours= 0;//set hours and rate to 0 as a temporary value so they can be passed
	double rate= 0; //to functions as parameters
	double grossPay;
	
	//gets user input for variables and resets their values
	
	getUserInput(hours, rate);
	
	//call function to set hours and rate
	
	grossPay = getGrossPay(hours, rate);
	
	//calls function to calculate gross pay and assign its value in main
	
	payRollReport (hours, rate, grossPay);
	
	//call function to print a report of the user's pay
	
	return 0;
	}	
	
void getUserInput(double &x, double &y){//prompts user for input

	double hours;
	double rate;
	
	//define variables
	
	cout << "Hours worked: " << "\n";
	cin >> hours;
	cout << "Hourly rate: " << "\n";
	cin >> rate;
	
	x = hours;
	y = rate;
	
	//sets parameter values to what the user inputted.
	
}

double getGrossPay(double &x, double &y){//Function takes user input and calculates gross pay
	
	double hours = x;
	double rate = y;
	double gross;
	
	if(hours <= 40){
		gross = hours * rate;
	}
	
	else if (hours > 40){
		gross = (rate * 40) + ((hours - 40) * 1.5) * rate;
	}
	
	else{
		cout << "Error";
		return 0;
	}
	return gross;
	
	//if statements: calculate gross pay taking into account overtime hours and invalid inputs
}

void payRollReport(double &x, double &y, double &z){
	
	double hours = x;
	double rate = y;
	double gross = z;
	
	cout << "\n" << "Payroll Report: " << "\n";
	cout << "Hours: " << hours << "\n";
	cout << "Rate: " << rate << "\n";
	cout << "Gross Pay: " << gross << "\n";
	
	//Prints a basic summary of the user's payment
}
