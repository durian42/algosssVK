#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

void swap(int &a, int &b){
    int tmp=a; 
    a=b; 
    b=tmp;
}

int main() {
    int n=7;
    int arr[n] = {2,1,0,2,1,0,1};
    
    printArray(arr,n);

    int low=0, mid=0, high=n-1;
    while (mid<=high) {
        if (arr[mid]==0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        } 
        else if (arr[mid]==1) mid++;
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    printArray(arr,n);
    return 0;
}
