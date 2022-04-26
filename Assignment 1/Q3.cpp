/* You are requested to write a very simple calculator. Your calculator should be able to handle the five
basic mathematic operations – 

add, 

subtract, 

multiply, 

divide and 

modulus – 

on two input values.


Your program should have the following structure:
• Ask the user to enter two float variables named var1 and var2
• Ask the user to enter a character variable named operation to represent the operation to be
performed on the two variables.
• Perform the appropriate operation by using if-statements
• The output must be given in fixed-point notation with two digits after the decimal point.
A typical run is displayed below:
Please enter the first float value:
35.6 Please enter the second value:
24.12 Please enter the operation
required : + The sum of 35.6 and
24.12 is 59.72
Submit both your program and
output. */


/*
 Your program should have the following structure:
• Ask the user to enter two float variables named var1 and var2
• Ask the user to enter a character variable named operation to represent the operation to be
performed on the two variables.
• Perform the appropriate operation by using if-statements
• The output must be given in fixed-point notation with two digits after the decimal point. */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    /* declare first, second as float*/
    float first, second;
    string operation;
    /* Print instructions for first input */
    cout << "Please enter the first float value : "<<endl;
    cin >> first;
   /* Print instructions for second input */
    cout << "Please enter the second float value : "<<endl;
    cin >> second;
       /* Print instructions for operation input */
    cout << "Please enter the character for the operation:"<<endl;
    cin >> operation;
    /* Logic to do calculations */
    if (operation == "+"){
        cout << "The sum of " << first << " and " << second << " is equal to : ";
        cout<<setprecision(2)<<fixed << first + second <<endl;
    }
    else if (operation == "-"){
        cout << "The difference between " << first << " and " << second << " is equal to : "; 
        cout<<setprecision(2)<<fixed << first - second <<endl;
    }
    else if (operation == "*"){	
        cout << "The product of " << first << " and " << second << " is equal to: "; 
        cout<<setprecision(2)<<fixed << first * second <<endl;
    }
    else {
        cout << "The remainder between" << first << " and " << second << " is equal to : " ;
        cout<<setprecision(2)<<fixed << first / second <<endl;
    }
    return 0;
}