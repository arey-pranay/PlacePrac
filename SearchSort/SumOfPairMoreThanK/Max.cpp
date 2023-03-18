#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long arr1[] , long long arr2[] , int n , long long K){
	//FINDING THE MAX ELEMENT

	long long a = *max_element(arr1 , arr1+n); // *max_element is STL function used to find the max element from the array.
	long long b = *max_element(arr2 , arr2+n);

	long long ans = a+b;

	// CHECKING THE CONDITION
	return ans >= K;
}

int main(){
	long long arr1[] = {2,1,3};
	long long arr2[] = {7,8,9};

	long long k = 5;

	int n = sizeof(arr1)/sizeof(arr1[0]);

	if (isPossible(arr1 , arr2 , n , k))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
