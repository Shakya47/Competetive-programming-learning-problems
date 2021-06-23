#include <bits/stdc++.h>
using namespace std;

int findMax(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=(n*2)-1;i++){
		for(int j=1;j<=(n*2)-1;j++){
			cout<<(findMax(abs(i-n),abs(j-n)))+1<<" ";
		}
		cout<<endl;
	}
	
}