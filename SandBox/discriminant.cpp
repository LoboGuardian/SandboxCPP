/* 
Program made to solve quadratic equations

Remembering that a quadratic equation is any equation in
which the highest exponent of the unknown is 2.

*/

#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
    #include <math.h>
#else
    #include <iostream>
    #include <cstdlib>
    #include <cmath>
    using namespace std;
#endif


int main (void)
{
    float a, b, c, discriminant, x1; // Declare our variables, the term a, b, and c of the equation, the discriminant and the value of x1
    float x2; // Similarly, we declare the variable X2
    // The next thing is to request the value of a, b, and c from the user.
    cout << "Enter the value of a: ";
    cin >> a;
    cin.get();
    cout << "Enter the value of b: ";
    cin >> b;
    cin.get();
    cout << "Enter the value of c: ";
    cin >> c;
    cin.get();
    // Then we calculate our discriminant, 
    discriminant=b*b-4.0*a*c;
    // We create a selection block to determine if it is less than zero
    if(discriminant<0)
    {
        // If the value is less than 0, we are offered an imaginary solution
        discriminant=-discriminant;
        cout << "\nImaginary solutions\n" << endl;
    }
    else
        cout << "\nReal solutions\n" << endl;
    if(a!=0)
    {
    	// On the other hand, if it is equal to zero, we calculate the quadratic equation, remembering that we have 2 values, one positive, and one negative
        x1=(-b+sqrt(discriminant))/2.0/a;
        x2=(-b-sqrt(discriminant))/2.0/a;
    }
    else
    {
        x1=0;
        x2=0;
        cout << "It is not a quadratic equation" << endl;
    }
    // We show the values obtained on the screen
    cout << "Value of discriminant: " << discriminant << endl;
    cout << "Value of x1: " << x1 << endl;
    cout << "Value of x2: " << x2 << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}

