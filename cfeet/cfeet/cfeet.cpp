// cfeet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	void setfeet(int fe);
	void setinches(int in);
	void display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int fe)
{
	feet = fe;
}
void CFeet::setinches(int in)
{
	inches = in;
}
void CFeet::display()
{
	cout << "基类" << feet <<"英尺"<< inches <<"英寸"<< endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
int main()
{
    return 0;
}

