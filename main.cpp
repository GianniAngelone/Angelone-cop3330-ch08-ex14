/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gianni Angelone
 */
/*
This assignment shows the idea of information being passed through a non-reference function where the argument remains constant.
*/

#include "std_lib_facilities.h" //Here we include our given header file.
void Example1(const int x){ //Passing by value examples
    cout<<x*5<<endl; //Multiplication
}
void Example2(int integer){ //Constant
    integer = 13;
    cout<<integer<<endl;
}
void Example3(int integer1){ //Addition
    integer1 = 25;
    cout<<integer1+25<<endl;
}
void Example4(int integer2){ //Remainder test
    cout<<integer2%2<<endl;
}
int main()
{
    Example1(7);
    int integer = 40;
    Example2(integer);
    int integer1 = 10;
    Example3(integer1);
    Example4(21);
    return 0;
}
