#include<iostream>
using namespace std;

int multi(int n, int a){
	if(n == 1) return a;
	else 
		return a*multi(n-1, a);	
}
int main(){
	int n = 4;
	int a = 5;
	cout<<multi(n,a) <<"\n";
	
// 	int p = 1;
//	for (int i = 1; i <= n; i++) {
//		p = p * a;
//	}
//	cout<<p;
	
}
