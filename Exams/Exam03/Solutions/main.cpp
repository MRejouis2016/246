#include <iostream>
#include <string>
#include "Node.h"
#include "Deque.h"
#include "Stack.h"
#include "Array.h"
using namespace std;
using namespace ds;

/****************************************************************************************
 * Fundamentals
 ****************************************************************************************
 * a. first in first out
 *
 * b. at least two keys are mapping to the same hash value
 *
 * c. the keys of the key-value pairs must be distinct
 *
 * d. the number of the keys in a table divided by the number of slots of the table
 *
 * e. when a collision occurs it adds the new key to the beginning of the slot list.
 ***************************************************************************************/


/****************************************************************************************
 * Implementation
 ***************************************************************************************/
template <class T>
void Deque<T>::RemoveFromBack()
{
	if(back != NULL)
	{
		dn::Node<T>* t = back;
		back = back->prev;
		delete t;
		t = NULL;

		if(back == NULL)
		{
			front = NULL;
		}
		else
		{
			back->next = NULL;
		}
	}
}

/****************************************************************************************
 * Problem Solving
 ***************************************************************************************/
int OddMedian(Array<int>& data)
{
	int n = data.Size(), h = n / 2, m;

	if(n % 2 == 0)
	{
		return 0;
	}

	for(int i = 0;i <= h;i += 1)
	{
		m = i;

		for(int j = i + 1;j < n;j += 1)
		{
			if(data[m] > data[j])
			{
				m = j;
			}
		}
		
		if(m != i)
		{
			int t = data[i];
			data[i] = data[m];
			data[m] = t;
		}	
	}
	return data[h];
}

string Alter(string str)
{
	Stack<char> s;
	string rstr = "";

	for(int i = 0;str[i] != '\0';i += 1)
	{
		if(s.IsEmpty() || s.Top() != str[i])
		{
			s.Push(str[i]);
		}
		else if(s.Top() == str[i])
		{
			s.Pop();
		}
	}

	while(!s.IsEmpty())
	{
		rstr = rstr + s.Top();
		s.Pop();
	}
	return rstr;
}

int main()
{
	Deque<int> a = {2,4,6};
	Array<int> b = {203,277,253,221,245};
	Array<int> c = {203,277,245,221};
	string str;

	cout << a << "\n";
	a.RemoveFromBack();
	cout << a << "\n\n";

	cout << "OddMedian(" << b << ") = " << OddMedian(b) << "\n";
	cout << "OddMedian(" << c << ") = " << OddMedian(c) << "\n";

	cout << "\nEnter a string: ";
	cin >> str;
	cout << "Alter(" << str << ") = " << Alter(str) << "\n";
	return 0;
}
