/*
    https://parzibyte.me/blog
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // The discount percentages
    double socialSecurityDiscountPercentage = 9.75;
    double educationalInsuranceDiscountPercentage = 1.25;
    double incomeTaxDiscountPercentage = 10;
    string name;
    string idCard;
    double hoursWorked;
    double hourlyPay;

    cout << "Salary calculation\nWelcome\n";

    cout << "\nEmployee name: ";
    cin >> name;

    cout << "\nID card: ";
    cin >> idCard;

    cout << "\nHours worked: ";
    cin >> hoursWorked;

    cout << "\nHourly pay: ";
    cin >> hourlyPay;

    // Perform calculations
    double grossSalary = hourlyPay * hoursWorked;

    // Calculate discounts
    double socialSecurityDiscount = (socialSecurityDiscountPercentage * grossSalary) / 100;
    double educationalInsuranceDiscount = (educationalInsuranceDiscountPercentage * grossSalary) / 100;
    double incomeTaxDiscount = (incomeTaxDiscountPercentage * grossSalary) / 100;

    // Total deductions
    double totalDeductions = socialSecurityDiscount + educationalInsuranceDiscount + incomeTaxDiscount;

    // Subtract from gross salary
    double netSalary = grossSalary - totalDeductions;

    // Print the values
    cout << "Employee: " << name << endl;
    cout << "ID card: " << idCard << endl;
    cout << "Hours worked: " << hoursWorked << endl;
    cout << "Hourly pay: " << hourlyPay << endl;
    cout << "Gross salary: " << grossSalary << endl;
    cout << "Social security discount: " << socialSecurityDiscount << endl;
    cout << "Educational insurance discount: " << educationalInsuranceDiscount << endl;
    cout << "Income tax discount: " << incomeTaxDiscount << endl;
    cout << "Total deductions: " << totalDeductions << endl;
    cout << "Net salary: " << netSalary << endl;

    return 0;
}
