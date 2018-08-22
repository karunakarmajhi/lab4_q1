//write a C++ program to enter length in centimeter and convert it into meter and kilometer

//library 
#include<iostream>
using namespace std;
 
//writing of the main function
int main(){

//declaration of variables
float a;

//assigning values to the variables
cout << "enter the length in centimeter - ";

//reading out variables
cin >> a;
cout << "the entered value is - " << a;

//process
cout << "value in meter is " << a/100 << "m" << endl;
cout << "value in kilometer is " << a/100000 << "km" << ".\n";

//end statement
return 0;
}


