// Joe Rensvold
// Section 2
// Project 2
// Due September 10th

/*
    This program will prompt the user for a non-negative integer.
    The program will then display either the sum of that integer's
    digits or an error message depending on the user's input.

*/

/*
    Pre-condition: A non-negative integer
    Post-Condition: The sum of the entered integer's digits
*/




#include <iostream>
using namespace std;

int digSum(int enteredInt)
{
    int temp = 0;

     if (enteredInt <= 0)
     {
         return 0;
     }

     else
     {
         temp = enteredInt % 10;
         enteredInt = enteredInt / 10;
         return digSum(enteredInt) + temp;
     }

}

int main()
{
    int integer;

    cout << "Enter a non-negative integer: " << endl;
    cin >> integer;

    if (integer <= 0)
        cout << "That integer is not a valid entry." << endl;
    else
        cout << "The added sum is " << digSum(integer) << endl;


    return 0;
}
