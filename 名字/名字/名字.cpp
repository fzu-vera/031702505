
#include "pch.h"
#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string a = ",";
	string b = "李林,福建省13107936209张三李四";
	string c;
	int i = b.find(a);  //返回即子字符串索引3
	cout << i;
	cout << endl;
	c = b.substr(i - 4, i + 2);
	cout << c;
	return 0;
}