#include<iostream>
using namespace std;

void nhapmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<"arr["<<i<<"] : ";
		cin>>arr[i];
	}
}

bool LinearSearch(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[i] == i)
			return true;
	}
	return false;
}

int main(){
	int n;
	cout<<"nhap n: "; cin>>n;
	while(n<=0){
		cout<<"nhap n > 0: "; cin>>n;
	}
	int arr[n-1];
	nhapmang(arr,n);
	if(LinearSearch(arr, n)){
		cout<<"true";
	}else cout<<"false";
}
