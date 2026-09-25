#include<bits/stdc++.h>
using namespace std;

int printAllSubarrays(int arr[],int n){

	int maxSubarraySum = INT_MIN;
	int prefixSubarraySum = 0;

	for(int i = 0;i < n;i++){
		prefixSubarraySum = 0;
		for(int j = i;j < n;j++){
			prefixSubarraySum += arr[j];
			maxSubarraySum = max(prefixSubarraySum,maxSubarraySum);
		}
		
	}

	return maxSubarraySum;
}

int main(){

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout << printAllSubarrays(arr,n);

	return 0;
}