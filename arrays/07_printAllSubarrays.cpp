#include<bits/stdc++.h>
using namespace std;

void printAllSubarrays(int arr[],int n){

	int maxSubarraySum = INT_MIN;
	int subarraySum = 0;

	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			subarraySum = 0;
			for(int k = i;k <= j;k++){
				// cout << arr[k] << ",";
				subarraySum += arr[k];
			}
			maxSubarraySum = max(subarraySum,maxSubarraySum);
			// cout << endl;
		}
		// cout << endl;
	}

	cout << maxSubarraySum;
}

int main(){

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	printAllSubarrays(arr,n);

	return 0;
}