/*---------Program For Testing Character Data Type----------*/
#include<iostream>
using namespace std;
int main()
    {
        // char ch;
        // cout<< sizeof(ch);

        // ch = 66;
        // cout << ch;

        // int a;
        // a = 'B';
        // cout<< a;

        // int ch;
        // ch = '9';
        // cout << ch;


        // ASCII Value
        // char ch;
        // int x;
        // cout<<"Enter a character:";
        // cin >> ch;
        // x = ch;
        // cout<<"\nCharacter value is: "<< ch;
        // cout<<"\nASCII value is: "<< x;


        // lowercase to uppercase
        char ch;
        cout <<"\nEnter a Character:";
        cin >> ch;
        ch = ch - 32;
        cout<<"\nUpper Case is:" << ch;

        return 0;
    }