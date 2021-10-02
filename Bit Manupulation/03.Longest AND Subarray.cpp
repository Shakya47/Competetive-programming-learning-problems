/*You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once).
Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.
*/  

#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  long long n;
  cin>>t;
  while(t--){
    cin>>n;
    int p = log(n)/log(2);  //to get power of a number -> 64 = logBase10(64) -> 6
    int k = pow(2,p);
    int x,y;
    x = k/2;
    y = n-k+1;
    (x>y)?(cout<<x<<endl):(cout<<y<<endl);
  }
}
  


  
