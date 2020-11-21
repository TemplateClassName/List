
#include <iomanip>
#include "List.h"
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	List<int>A;
	for (int i = 0; i < 10; i++)
	{
		A.push_back(i);

	}
	A.pop_front();
	A.pop_back();
	//cout << A.pop_back()<<" "<<A.pop_front();
	List<int>q;
	int m = 2;
	q.push_back(0);
	q.push_back(1);
	//cout << q.pop_back();
	List<int>v;
	
	v.push_back(1);
	v.push_back(34);
	v.push_back(9);
	v.push_back(3);
	v.push_back(27);
	v.push_back(90);
	v.push_back(81);
	cout << v;
	v.reverse();
	cout << v;
	v.Sort();
	cout << v;
	//cout << q;
	return 0;
}
	


