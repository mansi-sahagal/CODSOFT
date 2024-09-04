#include<iostream>
using namespace std;
 int main(){
    char op;
    float a,b;

    cout << "Enter operator: +, -, *, /:" <<endl;
    cin >> op;

    cout << "Enter two values :";
    cin >> a >> b ;

    switch(op) {
        case '+':
       cout << a <<"+" << b << "="<< a+b << endl;
         break;

        case '-':
        cout << a <<"-" << b << "="<< a-b << endl;
         break;

        case '*':
        cout << a <<"*" << b << "="<< a*b << endl;
         break;

        case '/':
        cout << a <<"/" << b << "="<< a/b << endl;
         break;
        
        default:
        cout << " Opertor is not correct";
        break;
    }
    return 0;
 }