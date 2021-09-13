//Finding prime numbers and handling all corner cases and optimising 
//Efficient for large numbers 

#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n){
  if(n==2 || n==3) return true;
  if(n==1) return false;
  if(n%2==0 || n%3==0) return false;
  for(int i = 5; i*i<=n ; i+=6){
    if(n%i==0 || n%(i+2)==0) return false;
  }
  return true;
}


int main(){
 int n;
 cin>>n;
 cout<<boolalpha<<isPrime(n);   //boolapha -> prints true instead of 1 and false instead of 0
  
 } 
