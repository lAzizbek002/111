#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //problem1 - switch case
    /*int a, b, choice;
    cout << "Plese enter 2 numbers: ";
    cin >> a >> b;
    cout << "Enter number from 1 to 4.\n";
    cout << "1 -> a + b\n2 -> a - b\n3 -> a * b\n4 -> a / b\n" << endl;
    cin >> choice;
    switch (choice) {
        case 1: cout << a << " + " << b << " = " << a + b << endl; break;
        case 2: cout << "a - b = " << a - b << endl; break;
        case 3: cout << "a * b = " << a * b << endl; break;
        case 4: cout << "a / b = " << a / b << endl; break;
    }*/

    // 1.1
    /*for (int i = 1; i <= 10; i++){cout << i << " ";}*/

    // 1.2
    /*int num;
    cout << "Input a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++){cout << i << " ";}*/

    // 1.3
    /*int sum = 0;
    for (int i = 1; i <= 10; i++){sum += i;}
    cout << sum << endl;*/

    // 1.4
    /*int sum = 0, num;
    cout<<"Please enter a number:";
    cin>>num;
    for (int i = 1; i <= num; i++){sum += i;}
    cout << sum << endl;*/

    // 1.5
    /*int sum = 0;
    for (int i = 1; i <= 10; i++){sum += i;}
    cout << sum/10.0 << endl;*/

    // 1.6
    /*int num;
    float sum = 0;
    cout<<"Please enter a number:";
    cin>>num;
    for (int i = 1; i <= num; i++){sum += i;}
    cout << sum/num << endl;*/

    // 2.1
    /*for (int i = 1; i <= 10; i++) {if (i % 2 == 1){cout << i << " ";}}*/

    // 2.2
    /*for (int i = 1; i <= 10; i++) {if (i % 2 == 0){cout << i << " ";}}*/

    // 2.3
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {if (i % 2 == 1){cout << i << " ";}}*/

    // 2.4
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {if (i % 2 == 0){cout << i << " ";}}*/

    // 2.5
    /*for (int i = 1; i <= 100; i++) {if (i % 10 == 0){cout << i << " ";}}*/

    // 2.6
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {if (i % 10 == 0){cout << i << " ";}}*/

    // 14 no validation
    /*string binary;
    int decimal = 0;
    cout << "Please enter your binary: ";
    cin >> binary;
    for (int i = 0; i < binary.length(); i++) {if (binary[i] == '1'){decimal += pow(2, binary.length() - i - 1);}}
    cout << decimal << endl;*/

    // 13
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0){cout << "The depth is 0." << endl; return 0;}
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }*/

    // 12 no validation
    /*string num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num.length()-1; i >= 0; i--) {cout << num[i];}*/



    return 0;
}
