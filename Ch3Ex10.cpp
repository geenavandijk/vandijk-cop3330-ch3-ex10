/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

int main ()
{
    cout<< "Please enter an operation followed by two operands: "<<endl;

    string operation;
    double op1, op2, result;

    cin>>operation>>op1>>op2;

    if (operation == "+")
        result = op1+op2;
    if (operation == "-")
        result = op1-op2;
    if (operation == "*")
        result = op1*op2;
    if (operation == "/")
        result = op1/op2;
    else
        cout<<"Invalid input entered"<<endl;

    cout << op1 << operation << op2 << " = " << result << endl;





    return 0;
}