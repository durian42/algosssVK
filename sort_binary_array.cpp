#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    int n=7;
    int arr[n] = {1,0,1,1,0,0,1};
    
    printArray(arr,n);
    
    int l=0, r=n-1;
    while (l<r) {
        if (arr[l]==1) {
            int tmp=arr[l];
            arr[l]=arr[r];
            arr[r]=tmp;
            r--;
        }
        else l++;
    }
    
    printArray(arr,n);
    
    return 0;
}
