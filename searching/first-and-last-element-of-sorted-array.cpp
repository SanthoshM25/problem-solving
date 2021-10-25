#include<iostream>
using namespace std;

void searchRange(int* nums, int target) {
        int s = 0, e = 6;
        int res[2];
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target) {
                res[0] = mid;
                e = mid-1;
            }else if(nums[mid]>target) e = mid - 1;
            else if(nums[mid] < target) s = mid + 1;
        }
        s=0, e = 6;
         while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target) {
                res[1] = mid;
                s = mid+1;
            }else if(nums[mid]>target) e = mid - 1;
            else if(nums[mid] < target) s = mid + 1;
        }
        cout<< res[0]<<res[1];
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