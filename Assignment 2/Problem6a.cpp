#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int arr[], int n){
	for(int i = 0; i <= n; i++){
		cout<<"arr["<< i <<"] : ";
		cin>>arr[i];
	}
}
int Polynomial(int arr[], int n, double x){
	int P=0;
	for(int i = 0; i <= n; i++){
		P += arr[i]*pow(x,i);
	}
	return P;
}
int main(){
	int n; 
	double x;
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
