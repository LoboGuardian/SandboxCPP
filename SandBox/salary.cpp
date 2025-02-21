#include <iostream>
using namespace std;

int main(){
	double hourlyWage;
    double hoursWorked;
    double daysWorked = 5; // 5 days a week, Monday, Tuesday, Wednesday, Thursday, Friday
    double dailyGrossSalary;
    double weeklyGrossSalary;
    double annualWeeks = 52; // Weeks in a year
    double annualGrossSalary;
    double months = 12; // Months in a year
    double monthlyGrossSalary;
    double socialSecurity = 9.75;
    double socialSecurityDeduction;
    double educationalInsurance = 1.25;
    double educationalInsuranceDeduction;
    double totalDeduction;
    double monthlyNetSalary;

	// Ask the employee how many days they work, how much they earn per hour, and the number of hours they work per day.
    cout << "Welcome worker, please enter your hourly wage \n";
    cout << "Enter your hourly wage ";
    cin >> hourlyWage;
    cout << "Enter the hours worked ";
    cin >> hoursWorked;

	// Calculate the daily gross salary
    dailyGrossSalary = (hourlyWage * hoursWorked);
    cout << "\nHourly salary: " << dailyGrossSalary << " dollars\n" << endl;

	// Calculate weekly earnings
    weeklyGrossSalary = dailyGrossSalary * daysWorked;
    cout << "Your weekly salary is: " << weeklyGrossSalary << " dollars\n" << endl;

    // Calculate the annual gross salary
    annualGrossSalary = weeklyGrossSalary * annualWeeks;
    cout << "Your annual salary is: " << annualGrossSalary << " dollars\n" << endl;

    // Calculate the gross monthly salary
    monthlyGrossSalary = annualGrossSalary / months;
    cout << "Your gross monthly salary is: " << monthlyGrossSalary << " dollars\n" << endl;

    // Calculate social security
    socialSecurityDeduction = ((socialSecurity * monthlyGrossSalary) / 100);
    cout << "Your contribution to social security amounts to: " << socialSecurityDeduction << " dollars\n" << endl;

    // Calculate educational insurance
    educationalInsuranceDeduction = ((educationalInsurance * monthlyGrossSalary) / 100);
    cout << "Your contribution to educational insurance amounts to: " << educationalInsuranceDeduction << " dollars\n" << endl;

    // Total contribution to social and educational insurance
    totalDeduction = educationalInsuranceDeduction + socialSecurityDeduction;
    cout << "Your total contribution is: " << totalDeduction << " dollars\n" << endl;

    // Monthly Net Salary
    monthlyNetSalary = monthlyGrossSalary - (educationalInsuranceDeduction + socialSecurityDeduction);
    cout << "Your net monthly salary (subtracting the contribution to social and educational insurance) is: " << monthlyNetSalary << " dollars\n" << endl;

	}
