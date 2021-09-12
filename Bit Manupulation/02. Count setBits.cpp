#include <bits/stdc++.h>
using namespace std;

int countBits(int n){  //Time Complexity -> O(logn)
  int ans = 0;
  while(n>0){
    ans += n&1;
    n = n>>1;
  }
  return ans;
}

//Brian Kerningam's Algorithm
int countBitsFast(int n){  //Time Complexity -> O(no. of setbits)

  int ans = 0;
  while(n>0){
    n = n & (n-1);
    ans++;          //ans = no. of times the loop will run
  }

  return ans;

}


int main(){
 
 int n ;
 cin>>n;
 cout<<countBits(n)<<endl;
 cout<<countBitsFast(n)<<endl;
 cout<<__builtin_popcount(n)<<endl; //inbuilt function
  return 0;
} 
