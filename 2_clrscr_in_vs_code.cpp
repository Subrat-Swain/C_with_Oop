#include<iostream>
#define clrscr() system("cls")  // Preprocessor Directives or Macro Statement
using namespace std;
int main()
    {
        clrscr();
        int a, b, c;
        cout<<"Enter Two Number:";
        cin >> a >> b;
        c = a + b;
        cout << "Sum Of Two Number is:"<<c;
        return 0;
    }