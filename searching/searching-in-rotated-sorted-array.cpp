#include<iostream>
using namespace std;

int binarySearch(int* nums, int target, int s, int e){
	while(s<=e){
		int mid = (s+e)/2;
		if(nums[mid] < target) s = mid+1;
		else if(nums[mid] > target) e = mid-1;
		else if(nums[mid] == target) return mid;
	}
	return -1;
}

int search(int* nums, int target, int length){
	int s = 0, e = length, start = nums[0];
	if(length == 0 ) 
            if( nums[0] == target) return 0;
            else return -1;
	while(s<=e){
		int mid = (s+e)/2;
		// if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
  //           peak = mid;
  //           break;
  //       }
		// else if(nums[mid] < nums[mid-1]) e = mid;
		// else if(nums[mid] < nums[mid+1]) s = mid;
		if(nums[mid] > nums[mid+1]) {
			start = mid+1;
			break;
		}
		else if(nums[mid] < nums[mid+1]) {
			e = mid;
			if(nums[mid < start]) start = mid;
		}
	}
	if(nums[start] == target) return start;

	int res = binarySearch(nums, target, 0, start);
	if(res == -1) res = binarySearch(nums, target, start, length);
	return res;
}

int main(){
	int n;
	cin>>n;
	int nums[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>nums[i];
	}
	int target;
	cin>>target;
	int result = search(nums, target, n-1);
	cout<<result;
	return 0;
}