// testlist.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <list>;
#include <iostream>
#include <iterator>

using namespace std;
typedef struct info_s
{
	int nNumber;
}info_t;

typedef std::list< info_t > list_t;

int main()
{
	vector<string> vectors;
	vectors.push_back("s");
	list<string> li;//list是双向链表
	li.push_back("a");
	li.push_front("c");

	list_t  Listss;
	int count=1;
	list_t  List(count);
	int info = 2;
	list_t  Lists(count, { info });
	list_t::iterator iter;

	for (iter = List.begin(); iter != List.end(); iter++)
	{
		std::cout<<iter->nNumber<<std::endl;
	}
	getchar();
    return 0;
}

// list的构造函数
void test_list_constructor()
{
	std::list<int>::iterator c4_Iter, c5_Iter;

	// 0. Create an empty list c0
	std::list<int> c0;

	// 1. Create a list c1 with 3 elements of default value 0
	std::list<int> c1(3);

	// 2. Create a list c2 with 5 elements of value 2
	std::list<int> c2(5, 2);

	// 3. Create a list c3 with 3 elements of value 1 and with the 
	// allocator of list c2
	std::list<int> c3(3, 1, c2.get_allocator());

	// 4. Create a copy, list c4, of list c2
	std::list<int> c4(c2);

	// 5. Create a list c5 by copying the range c4[_First, _Last)
	c4_Iter = c4.begin();
	c4_Iter++;
	c4_Iter++;
	std::list<int> c5(c4.begin(), c4_Iter);

	// 6. Create a list c6 by copying the range c4[_First, _Last) and with 
	// the allocator of list c2
	c4_Iter = c4.begin();
	c4_Iter++;
	c4_Iter++;
	c4_Iter++;
	std::list<int> c6(c4.begin(), c4_Iter, c2.get_allocator());

	std::cout << "c1 = ";
	std::copy(c1.begin(), c1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "c2 = ";
	std::copy(c2.begin(), c2.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "c3 = ";
	std::copy(c3.begin(), c3.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "c4 = ";
	std::copy(c4.begin(), c4.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "c5 = ";
	std::copy(c5.begin(), c5.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::cout << "c6 = ";
	std::copy(c6.begin(), c6.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
}


