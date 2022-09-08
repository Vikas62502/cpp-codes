#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n , int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end- start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid-1;
        }
        else if (key<arr[mid])
        {
           end = mid-1;
        }
        else if (key>arr[mid]){
            
             start = mid+1;
        }
       mid = start+(end-start)/2;
    }
    return ans;
}
int lastOccurance(int arr[], int n , int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end- start)/2;
    int ans = -1;
    while (start<=end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid+1;
        }
        else if (key<arr[mid])
        {
           end = mid-1;
        }
        else if (key>arr[mid]){
            
             start = mid+1;
        }
       mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int even[9] = {1,2,2,2,2,2,3,4,5};

    cout<<"the index firstOccurance of 2 is at "<<firstOccurance(even,9,2)<<endl;
    cout<<"the index lastOccurance of 2 is at "<<lastOccurance(even,9,2)<<endl;
    return 0;
}