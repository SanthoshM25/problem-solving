#include<iostream>
using namespace std;

void searchRange(int* nums, int target) {
        int s = 0, e = 2;
        while(nums[e]<=target){
            if(nums[e]==target) {
                cout<<e;
                exit(0);
            }
            s = e+1;
            e = e*e;
        }
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] < target) s = mid+1;
            else if(nums[mid] > target) e = mid-1;
            else {
                cout<<mid;
                exit(0);
            }
        }
    }

int main(){
	int arr[6];
	for (int i = 0; i < 6; ++i)
	{
		cin>>arr[i];
	}
	searchRange(arr, 8);
	return 0;
}