#include<iostream>
using namespace std;

void nhapmang(int arr[], int n){
	for(int i = 0; i <= n; i++){
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	}
}

double Polynomial(int arr[], int n, double x){
	int P = 0;
	for(int i = 0; i <= n; i++){
		P = arr[i] + x*P;
	}
	return P;
}

	/*
		i=0 --> P = arr[i] vi ban dau P = 0
		i=1 --> p = arr[i+1] + x*arr[i]
		i=2 --> p = arr[i+2] + x*(arr[i+1] +x*arr[i])
		...
		i=n --> p = arr[n] + x*(arr[n-1] + x*(arr[n-2] + x*(arr[n-3] +...+x*(arr[0])...)
		
	*/

int main(){
	int n; double x; 
	cout<<"nhap x: "; cin>>x;
	cout<<"nhap n: "; cin>>n;	
	while(n<=0){
		cout<<"nhap n (n>0): "; 
		cin>>n;	
    }
    int arr[n+1];
    nhapmang(arr, n);
    cout<<"ket qua: "<<Polynomial(arr, n, x);
}
