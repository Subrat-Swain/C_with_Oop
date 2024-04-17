// Program for test operators in C++
#include<iostream>
#define clrscr() system("cls")
using namespace std;
int main()
    {
        // float a;
        // int b;
        // clrscr();
        // a = 15 / 2; // 7 not 7.5 as int / int = int;
        // a = 15 / 2.0;
        // a = 15.0 / 2;
        // a = 15.0 / 2.0;
        // cout << a;
        
        // b = 10 % 2;             // gives remainder
        // cout << "\n"<<b;


        // int a, b, c;
        // a = 10;
        // b = 5;
        // c = a > b;      //relational operator only return 0 or 1
        // cout << c;


        // int a, b, c, d;
        // a = 10;
        // b = 10;
        // c = 10;
        // d = (a == b == c);
        // cout << d;

        // int a;
        // clrscr();
        // a = ++5;  // Increment and Decrement Operator not applicable on constant value only applicable on variable
        // cout<< a;

        // int a = 5, b;
        // clrscr();
        // // b = ++a;
        // b = a++;
        // cout<<a;
        // cout<<"\n"<<b;


        int a = 5, b;
        clrscr();
        // b = ++a+a+++++a // Must contain proper spaces
        b = ++a + a++ + ++a;
        cout << b;
        cout<< endl << a;
        return 0;
    }