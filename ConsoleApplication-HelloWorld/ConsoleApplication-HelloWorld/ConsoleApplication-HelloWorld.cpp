// ConsoleApplication-HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string userInput = "";
	cout << "Hello World!" << endl;
	getline (cin, userInput);
    return 0;
}

