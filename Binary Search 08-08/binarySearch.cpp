#include<iostream>
using namespace std;

int search(int a[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    for (int i = 0; i < size; i++)
    {
        if (key==a[mid])
        {
            return mid;
        }
        else if(key>a[mid]){
             start = mid+1;
        }
        else if(key<a[mid]){
             end = mid-1;
        }
        mid = start + (end-start)/2;
        
    }
    return -1;
    
}

int main(){
    int a[5] = {5,7,9,11,13};
    int ans = search( a, 5,90);
    cout<<ans;
    return 0;
}