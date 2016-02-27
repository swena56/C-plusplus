// ClassExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>



#include "Box.h"
using namespace std;

int main()
{
	string userInput;
	Box box(2, 3);

	cout << "Demonstration of using a class in c++" << endl;
	cout << box.toString() << endl;

	getline(cin, userInput);
    return 0;
}

/*
Questions
	How do I separate this into header files?
*/
