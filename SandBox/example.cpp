/* Program #01 */

#include <iostream>
using namespace std; 

int main(){

    cout<<"Hello world \n"; // Prints "Hello world" to the console

    cout<<" Welcome to your first program \n"; // Prints a welcome message

    
return 0; 

}

/* PSEINT (A pseudocode language)
Algorithm EXAMPLE
    Define VARIABLE_1 As Integer
    Write "ENTER AN INTEGER DATA"
    Read VARIABLE_1;
    Write VARIABLE_1;

EndAlgorithm
*/

/* Program #02
#include <iostream>
using namespace std;

// This allows us to display values and variables
int main(){
    // This is a comment
    int integer_number=10; 
    float decimal=11.5;
    double decimal2=11.5700044;
    
    char letter='j';
    
    cout << letter;
    
    cout << 
    
return 0;
} */

/* Program #03
#include <iostream>
using namespace std;

int main(){
string name;
 cout << "Welcome User \n ";
 cout << "Enter your Name\n ";
 cin  >> name;
 cout << "Your name is: \n "<< name ;

return 0;

} */

/* Program #04
#include <iostream>
using namespace std;

int main(){
    string item1, item2, item3, item4, item5;

    cout<<"Enter 5 items to the list\n";
    cout<<"Product 1 to buy: ";
    cin>>item1;
    cout<<"Product 2 to buy: ";
    cin>>item2;
    cout<<"Product 3 to buy: ";
    cin>>item3;
    cout<<"Product 4 to buy: ";
    cin>>item4;
    cout<<"Product 5 to buy: ";
    cin>>item5;
    cout<<"\nShopping List: \n";
    cout<<item1<<endl;
    cout<<item2<<endl;
    cout<<item3<<endl;
    cout<<item4<<endl;
    cout<<item5<<endl;
    system("Pause"); // This line might not be portable to all systems
    return 0;
} */

/* Program #05
#include <iostream>
using namespace std;
int main(){
    
    int integer_number=10; // integer numbers 
    float decimal_number=11.5; // numbers with one decimal
    double number_with_more_decimals=11.551884; // numbers with more than one decimal
    char letter='L'; // Store letters.
    //stream for sentences.
    cout<< letter;
    
    return 0;
} */

/*Program #05*/
//Calculate the sides of a square
int main(){
    float side_a, area; // Declare variables
    cout << "Program that calculates the area of a square" << endl;
    cout << "Enter one of the sides of the square" << endl;
    cin >> side_a; // Reading data
    
    area = side_a * side_a; // Calculating the area
    cout << "The area of the square with side " << side_a << " is: " << area << endl; // Displaying the result
}