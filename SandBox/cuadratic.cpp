//Cuadratica
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

/*
Equation: 3x^2 - 11x - 4 = 0
Roots: x1 = 4, x2 = -0.333
*/

using namespace std;

int main()
{
	float x, a, b, c, denominator, discriminant, numerator;

    cout << "Program to solve quadratic equations using the general formula \n";
    cout << "Enter the coefficient \"a\": ";
    cin >> a;
    cout << "Enter the coefficient \"b\": ";
    cin >> b;
    cout << "Enter the coefficient \"c\": ";
    cin >> c;
	
	denominator = 2 * a; // Ensure the denominator is not 0
    discriminant = pow(b, 2) - 4 * a * c; // Ensure the discriminant is not negative

    // Calculate the roots
    if (discriminant >= 0 && denominator != 0) {
        x1 = (-b + sqrt(discriminant)) / denominator;
        x2 = (-b - sqrt(discriminant)) / denominator;

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        cout << "Error: The equation has no real roots or is undefined." << endl;
    }

    return 0;
}

