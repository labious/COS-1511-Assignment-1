/* Suppose a new member of the city council has to be chosen from three candidates and suppose there are 4
voting stations. 

We need a C++ program that will count the votes for every candidate and display the
result. 

At every voting station the voters vote by choosing A, B or C on a ballot paper. 
The voting officer must enter the votes into the program so that they can be counted. X is entered when all the votes at a
specific voting station have been entered.

The program has the following structure:
• The three totals and the number of spoilt votes are initialised to 0. Use the following integer variables
votesForA, votesForB, votesForC, spoiltVotes
• Use a for loop, going from 1 to the number of voting stations.
• Inside this loop is a while loop. A prompting message appears on the screen, asking the voter for
which candidate he or she wants to vote. The choice of the voter is then input.
• Inside the while loop is a switch statement to increment the correct total. The default option
is used to count the number of spoilt votes.
• The while loop is exited when X is entered for the choice.
• When the for loop is exited, the three totals and the number of spoilt votes are displayed.
• Display the results as follows:
Total candidate A: xxx 
Total candidate B: xxx 
Total candidate C: xxx
Total spoilt votes: xxx
Run your program with the input given below and submit printouts of the program and output. (We write the data
of each voting station in one line, but you will possibly enter the values on separate lines.)
B B B A C X
A B C D Y B X B A C
C B X
A B X
Submit your program and output.
 */
#include <iostream>
using namespace std;

int main(){

    