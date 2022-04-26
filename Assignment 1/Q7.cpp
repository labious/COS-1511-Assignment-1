/* The following code is supposed to display the positive even numbers less than 12. That is, it will
output the numbers 2, 4, 6, 8 and 10. 

However, there is a logical error in the code. Explain what the output
of the code below will be. 


Then write a small program including the code below and make the necessary
changes to fix the code so that it displays what it is intended to display. 

Ensure that your program works correctly. Only submit the program, not the output.
Hint: Use variable diagrams to trace the program to help you find the logical error.
int x = 1;
while (x
!= 12)
{
cout << x <<
endl; x = x +
2;
}
Submit your program and output */


/* The program does not have a break and will never terminate */

#include <iostream>
using namespace std;

int main(){
    int x = 0;
    while (x < 10 ){
        x = x + 2;
        cout << x << endl; 
        }
    return 0;
}