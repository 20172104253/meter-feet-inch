// meter feet inch.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CLength
{
private:
	int feet;
	double inch;
public:
	CLength()
	{
		feet = 0;
		inch = 0;
	}
	void set(int f, double i)
	{
		feet = f;
		inch = i;
	}
	void value(int m)
	{
		feet = 3.2808*m;
		inch = (3.2808*m - feet) * 12;
		if (inch > 11)
		{
			feet = feet + (inch / 12) * 1;
			inch = inch - (inch / 12) * 12;
		}
	}
	void display()
	{
		cout << "feet=" << feet << "inch=" << inch << endl;
	}
};
int main()
{
	CLength oc;
	oc.value(15);
	oc.display();
    return 0;
}

