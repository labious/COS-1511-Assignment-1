/* The Computer Science Department follows certain criteria when a student learns to program.

A number of programming exercises must be worked through.

To proceed to the next exercise

a student has to obtain a mark of 50% or more and

must have completed 5 or more program runs.

You are requested to

write a program to validate if a student can proceed to the next program.

aYour program should have the following structure:
• Declare two integer variables programsDone and result.
• Validate the data captured for the two variables using a while loop.
• The loop should be repeated until the value of result is greater than or equal to 50 and the value of
programsDone is greater than or equal to 5.

• Display a message like "Good! You can now proceed to the next exercise"
Submit both your program and output. */

#include <iostream>
using namespace std;
int main() {
/* declare the two integer variables*/
int programsDone, result, average;
/* Logic to add result*/
    while (average < 50 ) {
        programsDone++;
        cout << "Please enter the result of program number " << programsDone << endl;
        cin >> result;
        average = (average + result)/programsDone; 
    }
    return 0;
}

