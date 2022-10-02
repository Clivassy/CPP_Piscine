#include <iostream>

using namespace std;

/*int main()
{
    double firstNumber(0);
    double secondNumber(0);
    double sum(0);

    cout << "Enter one number" << endl;
    cin >> firstNumber;
    cout << "Enter another number" << endl;
    cin >> secondNumber;
    sum = firstNumber + secondNumber;
    cout << "Final number is " << sum << endl;

    return (0);
}*/

/*int main()
{
    int nbCars(0);

    cout << "How many cars do you have?" << endl;
    cin >> nbCars;

    switch (nbCars)
    {
        case 0:
            cout << "oh, no car, what a pity.. :(" << endl;
            break;
        case 1:
            cout << "Nice, enough for one people!" << endl;
            break;
        case 2:
            cout << "Great, you can share with you BF/GF" << endl;
            break;
        default:
            cout << "Woow! you must have a lot of money !!" << endl;
            break;
    }
    return (0);
}*/

/*int main()
{
    bool adult(false);

    if (adult == true)
    {
       cout << "You are an adult" << endl; 
    }
}*/

int main()
{
    for(int i(0); i < 10 ; i++)
    {
        for(int j(0); j < 5; j++)
        {
            cout << j << endl;
        }
        cout << i << endl;
    }
    return(0);
}