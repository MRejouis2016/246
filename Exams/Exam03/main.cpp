#include <iostream>
#include <string>
#include "Node.h"
#include "Deque.h"
#include "Stack.h"
#include "Array.h"
using namespace std;
using namespace ds;

//Mac Rejouis
/****************************************************************************************
 * Fundamentals
 ****************************************************************************************
 //#1
 * a.) A queue follows the principle First-In-First-Out (FIFO).
 
 * b.) In terms of hashing, a collision occurs when multiple keys are mapped to the same
 hash value.
 
 * c.) For a map data structure, you need an array or linked list of key-value pairs in order
 to represent a map.
 
 * d.) The load factor is equal to k = (m/n) where m is the number of stored keys and n is
 the number of slots in a hash table.
 
 * e.) The insertion method handles collision by open addressing, which is shifting a key to
 the next available slot.
 *
 *
 *
 ***************************************************************************************/


/****************************************************************************************
 * Implementation
 ***************************************************************************************/
//#2
template <class T>
void RemoveFromBack()
{
  if (back!=NULL)
   {
	 Node<T>* t = back;
    	 back=back->prev;
    	 delete t;
    	 t=NULL;
    	 if (back==NULL)
    	 {
      	   front=NULL;
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
//#3
int OddMedian(Array<int>&data)
{
  int size;
  int median = (arr[i]+arr[size-1])/2;
  for (int i=0; i<size; i++)
  {
    if (data.size%2!=0)
    {
	return median;
    }
  }
  return 0;
}

//#4
string Alter(string str)
{
   stack<char> s;
   int n = str.length();
   for (int i=0; i<n; i++)
   {
     s.Push();
   }
   for (int i=0; i<n; i++)
   {
     if (str[i]==str[i+1])
     {
	s.Pop();
     }
     else
     {
	return false;
     }
   }
   return str;
}
		
int main()
{
	string str = "apple";
	Alter(str)
	cout << str;
	return 0;
}
