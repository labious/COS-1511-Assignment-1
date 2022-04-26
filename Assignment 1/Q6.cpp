/* A bookshop gives discount to customers as follows:
• Students get 10% discount,
• Book dealers get 12% discount and
• Pensioners get 15% discount.
• All other customers get 10% discount only if their total purchases are more than R200.

You are requested to write two versions of a program that calculates and displays the final amount that is
due, after discount.
(i) The first version of the program uses a switch statement to implement the above program.
(ii) The second version of the program uses nested-if statements.
Hint:
Use the following variables:
float amount; // the amount due before discount
char customerType; // the type of customer: 
'S' (student) or 'D' (dealer) or 'P' (pensioner) or'O'(other) float discount, 
 */

#include <iostream>
using namespace std;
int main(){
    float amount,discount;
    char customerType;
    cout << " Please enter the purchase total : " << endl;
    cin >> amount;
    cout << " Please enter a  customer type : 'S' for (student) 'D' (dealer) 'P' (pensioner) or'O'(other)" << endl;
    cin >> customerType;
    switch(customerType){
        case 'S':
        cout << "Your Student Discount is : R" << amount * 0.1 << " Your total is : R" << amount - amount * 0.1 << endl;	
        break;
        case 'D':
        cout << "Your Dealer Discount is : R" << amount * 0.12 << " Your total is : R" << amount - amount * 0.12 << endl;	
        case 'P':
        cout << "Your Pensioner Discount is : R" << amount * 0.15 << " Your total is : R" << amount - amount * 0.15 << endl;
        break;
        default:
        if (amount < 200){
               cout << "Your do not have a Discount" << " Your total is : " << amount << endl;
        }
        else { 
        cout << "Your Student Discount is : R" << amount * 0.1 << " Your total is : R" << amount - amount * 0.1 << endl;	
        }
    }
return 0;
}