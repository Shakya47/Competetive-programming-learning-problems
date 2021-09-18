//Least Common Multiple (LCM)
//Time complexity -> O(log(min(a,b))
//Idea -> a * b = gcd(a,b) * lcm(a,b)  => lcm(a,b) = (a * b)/gcd(a,b)

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

  cout<<"LCM: "<<a*b/gcd(a,b); 

}
