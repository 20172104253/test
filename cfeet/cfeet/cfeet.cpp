// cfeet.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "����" << feet <<"Ӣ��"<< inches <<"Ӣ��"<< endl;
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

