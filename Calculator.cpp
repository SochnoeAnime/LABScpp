/***********************************/
/*				   */
/* Code by: Khromov Egor Pavlovich */
/* github.com/SochnoeAnime/LABScpp */
/*		10.2021		   */
/*				   */
/***********************************/
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double first_number, second_number, result;
    char operation;

    cin >> first_number >> operation >> second_number;

    switch (operation)
    {
    case '+':
        cout << first_number + second_number << endl;
        break;
    case '-':
        cout << first_number - second_number << endl;
        break;
    case '*':
        cout << first_number * second_number << endl;
        break;
    case '/':
        if (second_number == 0) {cout << "You cannot divide by 0!\n";break;}
        else {cout << first_number / second_number << endl; break;}
        break;
    case '^':
        cout << pow(first_number, second_number) << endl;
        break;
    default:
        cout << "ERROR" << endl;
    }

    system("pause");
    return 0;
}