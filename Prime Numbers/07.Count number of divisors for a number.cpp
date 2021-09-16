//Count number of divisors for a number
//Time complexity -> O(sqrt(n))
//Idea -> All the divisors can be written in the prime factors
//Eg: 40 ->2,2,2,5  -> 2^3 x 5^1 -> divisors = (3+1)x(1+1) = 8
//Formula for counting divisors -> (e1+1) x (e2+1) x ...-> e1,e2...are powers of the prime factors

#include <bits/stdc++.h>
using namespace std;

int main(){
 
int n;
cin>>n;
int res = 1;
for(int i=2; i*i<=n;i++){
  int count =0;
  while(n%i==0){          //getting the count of the power of the prime factors
    count++;
    n=n/i;
  }
  res = res*(count + 1);    //implementing the formula
}

if(n>=2) res = res*2;   //for 11, the above loop won't run, similary for other corner case also

cout<<res;

}
  

