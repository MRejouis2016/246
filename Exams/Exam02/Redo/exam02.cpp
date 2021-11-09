#include <iostream>
#include <string>
#include "Array.h"
#include "Extra.h"
using namespace std;
using namespace ds;

template<class T>
void OrderedSet<T>::Insert(const T& item)
{
   for (int i=0; i<size; i++)
   {
     if (item!=data[i].value && size < data.Size())
      {
	data[i]=data[i-1]
        size += 1;
      }
   }
};

int main()
{
	OrderedSet<int> a = {5,3,1};
	return 0;
}
