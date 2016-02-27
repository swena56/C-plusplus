#pragma once
#include <string>
#include <iostream>

using namespace std;
class Box {
	int width, height;
	string name = "default";

public:
	Box(int x, int y) : width(x), height(y) {};
	void set_values(int, int);
	void set_name(string);	
	string toString() { return ("Box: " + name + " has an area of " + to_string(get_area())); };
	
	//adding boxes together
	Box operator+(const Box& b)
	{
		Box box(this->width,this->height);
		return box;
	}

private: 
	string get_name() { return name; };
	int get_area(void);
};

void Box::set_values(int x, int y)
{
	width = x;
	height = y;
}

void Box::set_name(string value)
{
	name = value;
}

int Box::get_area()
{
	if (width != NULL && height != NULL)
		return width * height;
	else
		return 0;
}
