#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

double squareRoot(double number) {
    if (number == 0.0) {
        return 0.0;
    }

    double x = number;
    double root = 0.0;

    while (true) {
        root = 0.5 * (x + number / x);
        if (root == x) {
            break;
        }

        x = root;
    }

    return root;
}

double power(double number, int exponent) {
    if (number == 0.0) {
        return 0.0;
    }

    double result = 1.0;

    for (int i = 0; i < exponent; ++i) {
        result *= number;
    }

    return result;
}

void clearConsole() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main() {
    double number;
    int type, sqrt_type, power_type, exponent;

    cout << "Enter a number: ";
    cin >> number;

    clearConsole();

    cout << "[1] Square root\n[2] Power\n" << endl;
    cout << "Enter the desired type: ";
    cin >> type;

    clearConsole();

    if (type == 1) {
        cout << "[1] Manual\n[2] Automatic\n" << endl;
        cout << "Enter the desired square root type: ";
        cin >> sqrt_type;

        clearConsole();

        if (sqrt_type == 1) {
            cout << "Square root of " << number << " is " << squareRoot(number) << endl;

            cout << endl;
            system("pause");
        }
        else if (sqrt_type == 2) {
            cout << "Square root of " << number << " is " << sqrt(number) << endl;

            cout << endl;
            system("pause");
        }
    }
    else if (type == 2) {
        cout << "[1] Manual\n[2] Automatic\n" << endl;
        cout << "Enter the desired power type: ";
        cin >> power_type;

        cout << "Enter the desired exponent (power): ";
        cin >> exponent;

        clearConsole();

        if (power_type == 1) {
            cout << number << " to the power of " << exponent << " is " << power(number, exponent);

            cout << endl;
            system("pause");
        }
        else if (power_type == 2) {
            cout << number << " to the power of " << exponent << " is " << pow(number, exponent);

            cout << endl;
            system("pause");
        }
    }
}
