//Greatest Common Divisor -> Euclidean Algorithm
//Time complexity -> O(log(min(a,b))

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  while(b!=0){
    a = a%b;
    swap(a,b);
  }
  return a;
}

int main(){
 
  int a,b;
  cin>>a>>b;

  cout<<"GCD: "<<gcd(a,b); 

}
