#include<iostream>
using namespace std;

int linear_search(int *arr,int n,int k){

	for(int i = 0;i < n;i++){
		if(arr[i] == k){
			return i;
		}
	}

	return -1;
}

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	int k;cin>>k;

	int ans = linear_search(arr,n,k);

	if(ans != -1){
		cout << k << " is Found" << " at index " << ans;
	}
	else{
		cout << k << " is not Found!";
	}

	return 0;
}