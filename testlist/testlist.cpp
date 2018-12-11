// testlist.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <list>;

using namespace std;

int main()
{
	vector<string> l;
	l.push_back("s");
	list<string> li;
	li.push_back("a");
	li.push_front("c");
    return 0;
}

