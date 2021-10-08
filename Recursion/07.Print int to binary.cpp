//Print Binary of a Number

#include <bits/stdc++.h>
using namespace std;

void binary(int n){
  if(n==0) 
    return;
  binary(n/2);
  cout<<n%2;    //Similar to your int to binary conversion division method. 
}

int main(){
  int n;
  cin>>n;  
  binary(n);
 }
