#include <bits/stdc++.h>
using namespace std;

//O(nlogn)

int main(){
 
  int n = 4,m = 5;
  vector <int> na{2, 6, 1, 2};
  vector <int> ma{1, 2, 3, 4, 2 };

  sort(na.begin(), na.end());
  sort(ma.begin(), ma.end());

  auto  p = na.begin();
  auto  q = ma.begin();

  vector <int> isec;

  for(int i=0; i<max(n,m); i++){
    if(*p == *q){
      isec.push_back(*p);
      p++; q++;
    }
    else if(*p < *q ){
      p++;
    }
    else if(*p > * q){
      *q++;
    }

    if(p > na.end() || q > ma.end()) break;

  }

  for(int i = 0 ; i< isec.size(); i++){
    cout<<isec[i]<<", ";
  }


  return 0;
}
  
