// Initial Code
// #include <iostream>
// #include <stdio.h>
// #include <math.h>

// using namespace std;

// int main(){
//    float x, a, b, c, denominator, discriminant, numerator;

//    cout << "Enter the value of a: " << endl;
//    cin >> a;
//    cout << "Enter the value of b: " << endl;
//    cin >> b;
//    cout << "Enter the value of c: " << endl;
//    cin >> c;
   
//    denominator = 2 * a;
//    discriminant = pow(b, 2) - 4 * a * c;
//    numerator = ;
 
// return 0;
// }

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip> // For setting precision

using namespace std;

int main(){
    // Declare variables for the coefficients of the quadratic equation and other calculations
   float coefficientA, coefficientB, coefficientC, denominator, discriminant, numerator;
   float x,a,b,c,denominador, discriminante, numerador;
   
   // Prompt the user to enter the value of 'a' (coefficient A)
   cout << "Enter the value of a: " << endl;
   cin >> coefficientA;

   // Prompt the user to enter the value of 'b' (coefficient B)
   cout << "Enter the value of b: " << endl;
   cin >> coefficientB;

   // Prompt the user to enter the value of 'c' (coefficient C)
   cout << "Enter the value of c: " << endl;
   cin >> coefficientC;
   
   // Calculate the denominator of the quadratic formula
   denominator = 2 * coefficientA;

   // Calculate the discriminant (b^2 - 4ac)
   discriminant = pow(coefficientB, 2) - 4 * coefficientA * coefficientC;

    if (discriminant >= 0) { // Check for real roots
        // Calculate and print the first root
        numerator = -coefficientB + sqrt(discriminant);
        float root1 = numerator / denominator;
        cout << "Root 1: " << fixed << setprecision(6) << root1 << endl; // Format output

        // Calculate and print the second root
        numerator = -coefficientB - sqrt(discriminant);
        float root2 = numerator / denominator;
        cout << "Root 2: " << fixed << setprecision(6) << root2 << endl; // Format output

    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}