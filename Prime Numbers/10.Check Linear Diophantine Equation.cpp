//Linear Diaphantine Equation -> Check & Find Solution of ax + by = c
//Time complexity -> O(log(min(a,b))
//Idea -> Bezout's identity = for eq ax + by = g; g=gcd(a,b)
//        Similarly for diaphantine, ax + by + c; c is multiple of gcd(a,b); c%gcd(a,b)==0
//        To find solution = x & y, learn and use Extended Euclidean Algorithm

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
 int a,b,c;
 cin>>a>>b>>c;

 if(c%gcd(a,b) == 0) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;

}
  


