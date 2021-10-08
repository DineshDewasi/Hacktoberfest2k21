#include <bits/stdc++.h>
using namespace std;

void sorting012(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid <=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i];
    }
}
int main() {
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sorting012(arr,n);
    printarray(arr,n);
	return 0;
}