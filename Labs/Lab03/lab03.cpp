#include <iostream>
#include <string>
#include "Array.h"

/*Function Definitions Here*/
template <typename T>
void ArrayFill(Array<T>& data, const T& value)
{
	data[i] = value;
}

template <typename T>
void SubArray(Array<T>& data, Array<T>&subdata, ulong a, ulong b)
{
	Array<T> temp = subdata;
	if (data[i]==a && data[i]==b)
	{
		subdata = Array<T> (data.Size()+1);
		data[i] = subdata[i];
	}
}

template <typename T>
ulong DelimitedSearch(Array<T>& data, const T& delimit, const T& target)
{
	for (ulong i=0; i<size; i+=1)
	{
	   if (data[i]!=delimit || data[i]!=target)
	   {
		return size;
	   }
	   else
	   {
		return i;
	   }
	}
}

int main()
{
  int data, value, a, b, size, target, delimit;
  string value;
  size = sizeof(arr) / sizeof(arr[0]);
  
  ArrayFill(value);
	SubArray(data, subdata, a, b);
	DelimitedSearch(data, delimit, target);
	
	return 0;
}
