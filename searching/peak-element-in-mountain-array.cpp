#include<iostream>
using namespace std;

void searchRange(int* arr, int length) {
        int s = 0, e = length-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                cout<<mid;
                exit(0);
            }else if(arr[mid] < arr[mid-1]) e=mid;
            else if(arr[mid] < arr[mid+1]) s=mid;
        }
    }
  
int main(){
	int arr[4];
	for (int i = 0; i < 4; ++i)
	{
		cin>>arr[i];
	}
	searchRange(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}