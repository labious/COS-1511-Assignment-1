/* The following incomplete program first asks the user to enter the number of items he/she has eaten today
and then to enter the number of calories for each item. 

It then calculates the number of calories he/she has eaten for the day and displays the value.

#include
<iostream> using
namespace std;
int main()
{
int numberOfItems;
int count; //loop counter for the
loop int caloriesForItem;
int totalCalories;
cout << "How many items did you eat
today? "; cin >> numberOfItems;
cout << "Enter the number of calories in each of
the "
<< numberOfItems << " items eaten: " << endl;
// Your code
cout << "Total calories eaten today = " <<
totalCalories; return 0;
}

You have to complete the code. 

First complete the code by using a while loop to read in the calories of
all the items. 

Compile and run your program and submit only the code that you added and the output. 

Then change you program to use a for loop to read in the calories of all the items. Compile and run the program
again and submit only the code that you added and the output. Use the variables that have already
been defined in the given program. 

Test your program by entering 7 for the number of items and the following values for the calories:
7 120 60 150 600 1200 300 200
If your logic is correct, the following will be displayed:
Total calories eaten today = 2631 ? -- 2630
Submit your program and
output */

#include <iostream> 
using namespace std;
int main()
{
    int numberOfItems;
    int count; //loop counter for the loop 
    int caloriesForItem = 0;
    int totalCalories = 0;
    
    cout << "How many items did you eat today? "; 
    cin >> numberOfItems;
    cout << "Enter the number of calories in each of the " << numberOfItems << " items eaten: " << endl;
    
/*     While loop version
        while (count < numberOfItems){
        cin >> caloriesForItem;
        totalCalories += caloriesForItem;
        count++;
    } */

    for (int i = 0; i < numberOfItems;i++){
        cin >> caloriesForItem;
        totalCalories += caloriesForItem;        
    }
    cout << "Total calories eaten today = " << totalCalories;         
    return 0;
}