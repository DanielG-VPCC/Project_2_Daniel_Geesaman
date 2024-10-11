
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int choice;

    double number1;
    double number2;
    double answer;

    cout << "Please make a selection:" << endl << endl;
    cout << "1. addition" << endl;
    cout << "2. subtraction" << endl;
    cout << "3. multiplication" << endl;
    cout << "4. division" << endl;
    cout << "5. power" << endl;
    cout << "6. exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:    
        cout << "input a number:";
        cin >> number1;
        cout << "input another number: ";
        cin >> number2;
        answer = number1 + number2;
        cout << number1 << " added to " << number2 << " = " << answer;
        break;
    case 2:
        cout << "input a number:";
        cin >> number1;
        cout << "input another number: ";
        cin >> number2;
        answer = number1 - number2;
        cout << number1 << " minus " << number2 << " = " << answer;
        break;
    case 3:
        cout << "input a number:";
        cin >> number1;
        cout << "input another number: ";
        cin >> number2;
        answer = number1 * number2;
        cout << number1 << " multiplied by " << number2 << " = " << answer;
        break;
    case 4:
        cout << "input a number:";
        cin >> number1;
        cout << "input another number: ";
        cin >> number2;
        answer = number1 / number2;
        cout << number1 << " divided by " << number2 << " = " << answer;
        break;
    case 5:
        cout << "input a number:";
        cin >> number1;
        cout << "input another number: ";
        cin >> number2;
        answer = pow(number1, number2);
        cout << number1 << " to the power of " << number2 << " = " << answer;
        break;
    case 6:
        break;
    default:
        cout << "please make a valid choice";
        
    }

}

