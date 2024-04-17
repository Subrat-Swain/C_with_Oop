// Program for Testing decimals float and double
#include<iostream>
#define clrscr() system("cls");
using namespace std;
int main()
    {
        // int a;
        // a = 12.345;
        // cout<< a;

        // cout << sizeof(45) << "\n";// int takes 4 byte : 64-bit OS
        // cout << sizeof(12.345) << "\n"; // default double which take 8 byte.
        // cout << sizeof(12.345f); // f for float data no need to implicit type conversion

        // clrscr();
        // double a;
        // a = 15 / 2.0;
        // cout << a;



        // Mark Calculation
        // int h, e, c, m, total;
        // cout<< "\nEnter marks of 4 subjects";
        // float per;
        // cin>>h>>e>>c>>m;
        // total = (h + e + c + m);
        // cout<< "\nTotal Marks:"<< total;
        // // per = total / 4;        // We will never get any decimal value in result
        // per = total / 4.0;
        // cout << "\nPercentage: "<< per; 

        // cout << "15/2: "<< 15/2 << endl;    //int
        // cout << "15.0/2: "<< 15.0/2 << endl;    // decimal
        // cout << "15/2.0: "<< 15/2.0 << endl;    // decimal
        // cout << "15.0/2.0: "<< 15.0/2.0 << endl;    // decimal


        // Calculating area of a circle
        float r, C, A;
        const float PI = 3.14f;
        clrscr();
        cout<< "\nEnter radius of circle:";
        cin >> r;
        A = PI * r * r;
        cout<< "\nArea is: "<< A;
        C = 2 * PI * r;
        cout << "\nCircumference is: "<< C;
        return 0;



    }