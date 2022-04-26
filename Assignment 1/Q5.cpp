/* Include the for loop below in a small program and complete the program. The loop should execute 10
times. Do not change the for loop below. Compile and run your program to see for yourself that it works.
You do not have to submit this program and output.
for (int i = 1; i <= n;
i++) cout << i * i;
Now convert the for loop into a while loop and add any variable initialisations that you think are
necessary. Compile and run your program and submit only the program containing the while loop and its
output. */

#include <iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    //Take input from the user
    cout << "Enter a number to see all squares : ";
    cin >> n; 
    //square until input is reached.
    while (i <= n) {
        cout << i * i ;
        i++;
    }
    return 0;
}
