// Print out of employee id and monthly salary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    string id;
    int hours;
    double rate, salary;

    cout << "Enter the employee ID" << endl;
    cin >> id;
    cout << "Enter the numbers of hours you worked" << endl;
    cin >> hours;
    cout << "Enter the amount you rate per hour" << endl;
    cin >> rate;
    salary = rate * hours;

    cout << " Your employee ID is :" << id << endl;
    cout << "Your salary is :" << salary << endl;

    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
