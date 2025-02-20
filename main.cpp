#include <iostream>
 using namespace std;

int main() {
  //problem1.1
    /*
    for (int i = 1; i <= 10; i++) {
        cout << i <<  endl;
    }
*/
    //problem1.2
/*
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    */

    //problem1.3
/*

    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    cout << sum << endl;
    */

    //problem1.4
/*
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;

    */

    //problem1.5
/*
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    double average = static_cast<double>(sum) / 10;
    cout << average << endl;

*/
    //problem1.6
/*
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    double average = static_cast<double>(sum) / n;
    cout << average << endl;

*/

    //problem2.1
/*
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    */

    //problem2.2

    /*
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 1) {
            cout << i << " ";
        }
    }
    cout << endl;

*/

    //problem2.3
/*
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    */

    //problem2.4

    /*
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    */

    //problem2.5
/*
    for (int i = 10; i <= 100; i=i+10) {
            cout << i << " ";

    }
    cout << endl;

    */

    //problem2.6

    /*
    int n;
    cin >> n;
    for (int i = 10; i <= n; i=i+10) {
        cout << i << " ";

    }
    cout << endl;

    */

    //problem3

    char a;
    int a_value=a;
    cout<<a_value;
    int count=0;
    for (char ch='A'; ch<='Z'; ch++) {
        cout<<ch;
        count++;
        if (count==5) {
            cout<<endl;
            count=0;
        }
    }










}