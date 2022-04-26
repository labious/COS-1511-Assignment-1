/* A teacher at Leva Primary School needs to divide her class in different group sizes according to the
activity they have to do.

This will help her to prepare workstations for each group.

For example,
for art projects the class has to be divided in groups of 6;
for science projects the class has to be divided in groups of 4.

She asked you to write a program to determine the number of groups as well as the number of pupils
who are left to form a smaller group.

There are 56 pupils in the class.

The program has the following structure:

• Declare three int variables
nrPupils = 56,
nrGroups, and
nrLeft.

nrPupils represents the number of pupils in a class,
nrGroups represents the number of groups the class is divided into, and
nrLeft represents the number of pupils, if any, who are in the remaining smaller group.

• Declare an int variable groupSize that is used by a cin statement to input a value from the
keyboard and store the size of the groups the teacher requested.

Display an appropriate message. E.g. Please enter the size of each group?
• Write the statement to calculate the number of groups of size groupSize.
• Write the statement to calculate the number of pupils who are in the remaining smaller group.


The output of the program must be displayed as follows:
There are 9 groups consisting of 6
pupils There are 3 remaining pupils
Submit both your program and output */

#include <iostream>
using namespace std;
int main(){
    /* • Declare three int variables */
    int nrGroups, nrLeft,groupSize;
    /* Innitialise number of students */
    int nrPupils = 56;
    /* Print the instructions for the input of student groups */
    cout << "Please enter the size of each group    : or press 0 to terminate the program : "<< endl;
    cout <<  endl;
    /* take the input for students */
    cin >> groupSize;
    cout << endl;
    /* Logic to calculate the remainder */
while (groupSize != 0) {
    cout << "There are  " << nrPupils / groupSize << " groups consisting of " << groupSize << " pupils." ;
    cout << endl;
    cout << endl;
    cout << "There are  "  << nrPupils % groupSize << " remaining pupils " << endl;
    break;
}
return 0;
}
