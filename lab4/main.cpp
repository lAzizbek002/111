#include <iostream>
#include <cmath>
using namespace std;
int main(){
    /*//problem 1
    int num;
    cout << "Input number: ";
    cin >> num;
    if(num > 0){
        cout << "Positive number.";
    } else if(num < 0) {
        cout << "Negative number.";
    } else { "0 is neither positive or negative."}*/

    /*//problem2
    int num;
    cout << "Input number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even number." << endl;
    } else {
        cout << "Odd number." << endl;
    }*/

    //problem3
    /*int num, num2;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter another number: ";
    cin>>num2;
    if (num > num2) {
        cout << "Largest number: " << num;
    } else if (num < num2) {
        cout << "Latgest number: " << num2;
    }else { cout << "Equal numbers";}*/

    /*//problem4
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 and num1>= num3) {
        cout << "Largest number is " << num1 << endl;
    } else if (num2 >= num1 and num2 >= num3) {
        cout << "Largest number is " << num2 << endl;
    } else cout << "Largest number is " << num3 << endl;*/

    /*//problem5
    int year;
    cout << "Input year: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "Leap year." << endl;
    } else cout << "Not a lear year";*/

    //problem6
    /*int speed;
    cout << "Input speed: ";
    cin >> speed;
    if (speed > 80) {
        cout << "too fast" << endl;
    } else if (speed < 20) {
        cout << "too slow" << endl;
    } else cout << "just right";*/

    /*//problem7
    int mark;
    cout << "Input mark: ";
    cin >> mark;
    if (mark >= 50) cout << "Pass";
    else cout << "Fail";*/

    /*//problem8
    int num;
    cout << "Input number: ";
    cin >> num;
    if(num > 0){
        cout << "Positive number.";
    } else if(num < 0) {
        cout << "Negative number.";
    } else { "0"}*/

    /*//problem9
    string light;
    cout << "Traffic light: ";
    cin >> light;
    if (light == "g") << "Go";
    else if (light == "y") cout << "Get ready";
    else if (light == "r") cout << "Stop";
    else cout << "Invalid input";*/

    /*//problem10
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (0 <= grade && grade <= 59) cout << "F";
    else if (60 <= grade && grade <= 69) cout << "D";
    else if (70 <= grade && grade <= 79) cout << "C";
    else if (80 <= grade && grade <= 89) cout << "B";
    else if (90 <= grade && grade <= 100) cout << "A";
    else cout << "Invalid input";*/

    /*//problem11
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 % num2 == 0) cout << num1 << " is divisible by " << num2;
    else cout << num1 << " is not divisible by " << num2;*/

    /*//problem12
    int len1, len2, len3;
    cout << "Enter three lengths: ";
    cin >> len1 >> len2 >> len3;
    if (len1 < len2 + len3 && len2 < len1 + len3 && len3 < len1 + len2) cout << "Triangle is valid.";
    else cout << "Triangle is not valid.";*/

    /*//problem13
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z') cout << "Lower case alphabet";
    else if (letter >= 'A' && letter <= 'Z') cout << "Upper case alphabet";
    else cout << "It is not an alphabet";*/

    /*//problem14
    int weight1, weight2;;
    float price1, price2;
    cout<<"Enter the weight and price  for package 1: ";
    cin>>weight1>>price1;
    cout<<"Enter the weight and price for package 2: ";
    cin>>weight2>>price2;
    if(weight1/price1 > weight2/price2) cout << "Package 1 has better price";
    else if(weight1/price1 < weight2/price2) cout << "Package 2 has better price";
    else cout << "Both package 1 and package 2 have same price";*/

    /*//problem15
    int num;
    cout << "Enter 3 digit a number: ";
    cin >> num;
    while (num > 999 || num < 100) {
        cout << "Error! Enter a number between 100 and 999 : ";
        cin >> num;
    }
    if (num / 100 == num % 10) cout << num << " is palindrome.";
    else cout << num << " is not palindrome.";*/

    /*//problem16
    int x, y;
    cout << "Enter the cordinates of a point: ";
    cin >> x >> y;
    if (sqrt(x*x + y*y) <= 10) cout << "Point is inside the circle.";
    else cout << "Point is outside the circle.";*/

    //problem17
    float gpa;
    cout << "Enter your gpa: ";
    cin >> gpa;
    if (gpa < 3.0) cout << "You got no scholarship.";
    else if (gpa < 3.5) cout << "You got 50% scholarship.";
    else if (gpa < 4.0) cout << "You got 60% scholarship.";
    else if (gpa < 4.5) cout << "You got 80% scholarship.";
    else cout << "Invalid input.";



    return 0;
}