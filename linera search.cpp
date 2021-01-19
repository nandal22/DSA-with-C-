#include <bits/stdc++.h>
using namespace std;
int Linear(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"waht is your number of elements : ";
	cin>>n;
	int key;
	cout<<"Enter the Key : ";
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<Linear(arr,n,key);
	
	
	
}
