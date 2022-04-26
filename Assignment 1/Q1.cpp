/*

Write a program to display the recipe on the screen but with a difference.

The quantity of each ingredient must be multiplied by a value entered from the
keyboard.

For example,
if the recipe needs 2 cups of flour the output displayed will be something like this
Please enter the factor to multiply the ingredients with : 4
Recipe name

Ingredients
other ingredients
8 cups flour

Method
The program has the following structure:
• Declare an int variable named mFactor to store the value with which the quantity of each ingredient
must be multiplied.
• The program must make use of a cin statement to input a value from the keyboard and store it in
mFactor.
Submit both your program and output. */


#include <iostream>
using namespace std;
int main(){
    /* number of people to serve factor */
    int mFactor;
    /* Quantity of ingredients */
    int quantity[7] = {4,250,1,2,1,150,4};
    /* ingredients */
    string  ingredients[7] = {"eggs","ml milk","teaspoon ground cinnamon","tablespoon caster sugar","teaspoon vanilla essence","g butter","slices bread"};
    /* method of making the toast */
    string method[4] = {"Place the eggs milk cinnamon sugar and vanilla essence in a bowl and whisk ",
                        "Heat a frying pan or the flat plate of a barbecue on lowest setting and melt the butter. soak each slice of bread in the egg mixture until wet through",
                        "Place the soaked bread in the pan or on the flat plate and cook until golden brown. turn and cook the other side. It is important to cook on a low to medium setting so the egg mixture cooks and sets rather than cooking on a higher heat which will burn the outside and leave the inside soggy."
                        ,"Once cooked transfer to a plate and serve with your choice of toppings or simply eat it on its own."};
    /* take an input from the user */
    cout << " FRENCH TOAST RECIPE : " << endl;
    cout << " How many people are you feeding : ";
    cin >> mFactor;
    //Create white space//
    cout << endl;
    cout << endl;
    cout << "Here are your Ingredients" << endl;
    /* Printing the table header */
    cout << " Quantity      " << "          Ingredient " << endl;
    //  Printing quantity elements
        for (int j = 0; j < 7; j++) {
            cout << " " << mFactor * quantity[j] / 2 << "                         " << ingredients[j] << endl;
            cout << endl;
        }
    //Create white space//
        cout << " Please follow the following method to Prepare your serving"  << endl;
        cout << endl;
        /* Loop over the array and print*/
        for (int j = 0; j < 4; ++j) {
                cout << "Step " << (j + 1) << endl;
                cout << method[j] << endl;
                  cout << endl;
        }
    return 0;
}
