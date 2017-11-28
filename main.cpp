/**Kevin Griffin
 * Lab Ex-2
 * Factorial calculator
 */

#include <iostream>

using namespace std;

int main()
{
    //Variable declarations
    int n, x;
    //variable declaration includes decimals
    float fact1, fact2;
    //initialising fact1, fact2 and n
    fact1 = 1;
    fact2 = 1;
    n = 0;
    //while loop criteria for entering value for n
    while (n<=0)
    {
    //message displayed prompting user to enter value for n
    cout << "Enter a value for n, Greater than or equal to zero: " << endl;
    cin >> n;

    }

    //For loop criteria
    for(x=n; x>0; x--)
    {
        //For loop equation
        fact1 = fact1 * x;
    }
    // displayed to user with results of for loop
    cout<< "For Loop Factorial calculator: " << fact1 << endl;

    // while loopc criteria
    while(n>0)
    {
    //While loop equation
     fact2 = fact2 * n;
     n--;
    }
    // displayed to user with the results of the while loop
    cout<< "\nWhile loop Factorial Calculator: "<< fact2 << endl;
    return 0;
}
