#include <iostream>

using namespace std;

int main() {

    //float annualSalary;
    //cout << "Enter your annual salary: ";
    //cin >> annualSalary;
    //float monthlySalary = annualSalary / 12;
    //cout << "Yout monthly salary is: " << monthlySalary << endl;
    //cout << "In ten years you will earn: " << annualSalary * 10 << endl;

    //char character = 'a';

    int yearOfBirth = 1995;
    char gender = 'm';
    bool married = true;
    float averageGrade = 4.5;
    double balance = 4564388595;

    cout << "Size of int is: " << sizeof(int) << " bytes\n";
    cout << "Int min value is: " << INT32_MIN << endl;
    cout << "Int max value is: " << INT32_MAX << endl;
    cout << "Size of unsigned int is: " << sizeof(unsigned int) << " bytes\n";
    cout << "Unsiged int max value is: " << UINT32_MAX << endl;
    cout << "Size of char is: " << sizeof(char) << " bytes\n";
    cout << "Size of bool is: " << sizeof(bool) << " bytes\n";
    cout << "Size of float is: " << sizeof(float) << " bytes\n";
    cout << "Size of double is: " << sizeof(double) << " bytes\n";

    int intMax = INT32_MAX;
    cout << intMax << endl;
    cout << intMax + 1 << endl;

    system("echo hello $(whoami)!");
}

