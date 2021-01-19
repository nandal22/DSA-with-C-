#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of students : ";
	cin>>n;
	int extraCandies;
	cout<<"Enter the extra candies : ";
	cin>>extraCandies;
	int candies[n];
	cout<<"Enter the number of candies : ";
	for(int i=0;i<n;i++){
		cin>>candies[i];
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(candies[i]>max){
			max=candies[i];
		}
		cout<<candies[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(extraCandies+candies[i]>=max){
			candies[i]=1;
		}
		else{
			candies[i]=0;
		}
	}
	for(int i=0;i<n;i++){
		
		cout<<candies[i]<<" ";
	}
	
}
