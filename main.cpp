#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    /*//20
    float P_amount, A_rate;
    cout << "Enter the principal amout($): ";
    cin >> P_amount;
    cout << "Enter the annual ratio(%): ";
    cin >> A_rate;
    cout << "Amount after 2 years: " << (P_amount * (1+(A_rate/100)) * (1+(A_rate/100))) << endl;
    cout << "Compound interest: " << (P_amount * (1+(A_rate/100)) * (1+(A_rate/100))) - P_amount << endl;*/

    /*//19
    float P;
    int R, T;
    cout << "Enter the principal amount: ";
    cin >> P;
    cout << "Enter the rate of interest(%): ";
    cin >> R;
    cout << "Enter the time(years): ";
    cin >> T;
    cout << "Simple interest: " << (P * R * T)/100 << endl;*/

    /*//18
    int fee, scholarship;
    cout << "Enter the number of tuition fee: ";
    cin >> fee;
    cout << "Enter the scholarship rate(%): ";
    cin >> scholarship;
    cout << "Sholarship amount: " << (scholarship * fee)/100 << "\n";
    cout << "Final tuition fee: " << fee - ((scholarship * fee)/100) << "\n";*/

    /*//17
    float initial, final;
    cout << "Enter the intial price($): ";
    cin >> initial;
    cout << "Enter the final price($): ";
    cin >> final;
    cout << "Inflation rate: " << ((final - initial)/initial) * 100 << "%";*/

    /*//16
    float productsum = 0, sum = 0,grade, credithours;
    for (int i = 1; i <= 5; i++) {
        cout<<"Enter grade for course "<<i<<":  ";
        cin>>grade;
        cout << "Enter credit hours for course "<<i<<":  ";
        cin>>credithours;
        productsum = productsum + (grade * credithours);
        sum = sum + credithours;
    }
    cout<<"The average GPA: "<< fixed << setprecision(2) <<(productsum / sum);*/

    /*//15
    float price;
    int discount;
    cout << "Enter the original price: ";
    cin >> price;
    cout << "Enter the discount(%): ";
    cin >> discount;
    cout << "Discount amount: " << price*discount/100 << endl;
    cout << "Final price: " << price - (price*discount/100) << endl;*/

    /*//P1
    int amount,number, sum = 0;
    cout << "Amount of numbers to input: ";
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cin >> number;
        sum += number;
    }
    cout << "Sum: " << sum << endl;*/

    return 0;

}
