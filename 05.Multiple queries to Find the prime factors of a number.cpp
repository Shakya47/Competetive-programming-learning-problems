//Time Complexity = O(nloglogn)
//Based on Sieve Eratosthenes

#include <bits/stdc++.h>
using namespace std;

int main(){
 
 int n = 1000; //n = maxQuery, This will be given in the question
 vector<int> isPrime(n+1, 0);

 //Pre-processing
 //Fill the isPrime with the smallest prime factor for each integer 
 for(int i=2; i<=n; i++){
  if(isPrime[i]==0){
    isPrime[i]=i;
    for(int j=i*i; j<=n; j = j+i)
      if(isPrime[j]==0)           //Very Important, for multiples of 30, bug is fixed
        isPrime[j]=i;
  }
 }

// Now do the query loop
 int t,p;
 cin>>t;
 while(t--){
  cin>>p;
  while(p>1){
    cout<<isPrime[p]<<" ";
    p = p/isPrime[p];
  }
  cout<<"\n";
 }
}
  


