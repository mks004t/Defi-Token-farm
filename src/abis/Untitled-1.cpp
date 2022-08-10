#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  pairsort(int A[],char B[],int N)
{
  pair<int,int > arr[N];
  for(int i=0;i<N;i++)
  {
  	arr[i].first =A[i];
  	arr[i].second = B[i];
  	
  }

  sort(arr, arr+N);
  for (int i=0; i<N;i++)
  	  {    A[i]=arr[i].first;
	      B[i]=arr[i].second;
		}
  for (int i=0;i<N;i++)
 {  cout<<A[i]<<","<<B[i]<<"||";
 }


}


int main ()
{ int a[]={2, 1, 5, 4, 8, 3, 6, 7};
  char b[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
 
pairsort(a,b,8);
 
return 0;
}