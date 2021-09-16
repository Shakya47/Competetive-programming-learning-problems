//Print numbers which have exactly 3 divisors in n-> range(1,n)
//Time complexity -> O(sqrt(n)loglogn) -> this is better than O(n)
//Idea -> Numbers whose sqrt is prime will have only 3 divisors

#include <bits/stdc++.h>
using namespace std;

int main(){
 
int n;
cin>>n;
int sq = sqrt(n);    
vector<bool> isPrime(sq+1,true);    //Sieve concept

for(int i=2;i<=sq;i++){
  if(isPrime[i]) cout<<i*i<<" ";
  for(int j=i*i;j<=n;j=j+i)
    isPrime[j]=false;
}
}
  
