//All divisors of a number in a sorted form
//Time complexity -> O(sqrt(n))

#include <bits/stdc++.h>
using namespace std;

int main(){
 
int n,i;    //very imp to declare i first;
cin>>n;

for(i=1; i*i<=n ; i++){    //i*i < n and not <=n
  if(n%i==0) cout<<i<<" ";
}

for(i=i-1 ; i>=1 ; i--){          //i is taking the previous loops value
  if(i*i!=n)      
    if(n%i==0) 
      cout<<n/i<<" ";
} 
}
  


