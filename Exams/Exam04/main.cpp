#include <iostream>
#include <string>
#include "Node.h"
#include "TNode.h"
#include "Array.h"
using namespace std;
using namespace ds;

/****************************************************************************************
 * Fundamentals Mac Rejouis
 ****************************************************************************************
 *1a.) Inorder:C,Y,T,J,F,K,O,P,D
       Preorder:F,T,Y,C,J,P,K,O,D
       Postorder:C,Y,J,T,O,K,D,P,F
 *
 *1b.) T(n)=7T(n/7)+8
  Let a=7, b=7 and k=3 or f(n)=(n^3)
  n^((log 7 base 7) = n, since f(n)>n or n^3>n^1, case 3 applies
  so, T(n) = O(n^3)
 *
 *T(n)=T(n/5)+log(n)
 Let a=1, b=5 and f(n)=log(n)
 n^(log 1 base 5)= n^0 = 1 and since f(n)<n or log(n)<1, case 1 applies
 so, T(n) = O(1).
 *
 * T(n)=(2/3)T(3n/2)+n
 Let a = (2/3),b=(2/3) and f(n)=n
 n^(log (2/3) base (2/3)) = n^1 or n and since n=n, case 2 applies
 so, T(n)=O(n*lg(n))
 *
 *T(n) = 9T(n/3)+(n^2)
 Let a=9, b=3 and f(n)=(n^2)
 n^(log 9 base 3) = n^2 and since (n^2)=(n^2), case 2 applies
 so, T(n)=O((n^2)*lg(n))
 *
 *T(n) = 2T(n/4)+lg(n) (log n base 2)
 Let a=2, b=4 and f(n)=lg(n)
 n^(log 2 base 4) = n^(1/2) and since f(n)>n, case 3 applies
 so, T(n)= O(lg(n))
 ***************************************************************************************/


/****************************************************************************************
 * Problem Solving
 ***************************************************************************************/
bool HasSum(Array<int>&a, Array<int>&b, int n)
{
	if (n>0 && a+b==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<typename T>
dn::Node<T>*Convert(TNode<T>* root)
{
	Node<T>*hd;
	hd->p = p;
	
	if (root!=NULL){      
    Inorder(root->left);
      hd(root->data);       
    Inorder(root->right);
  }
	
	return root;
}


int main()
{
	return 0;
}
