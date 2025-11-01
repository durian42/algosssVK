#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    int n1=5;
    int n2=4;
    int arr1[n1] = {1,3,5,7,9};
    int arr2[n2] = {2,4,6,8};
    
    int merged[n1+n2];
    
    printArray(arr1,n1);
    printArray(arr2,n2);

    int i=0, j=0, k=0;
    while (i<n1&&j<n2) {
        if (arr1[i]<arr2[j]) 
            merged[k++]=arr1[i++];
        else 
            merged[k++]=arr2[j++];
    }
    while (i<n1) 
        merged[k++]=arr1[i++];
    while (j<n2) 
        merged[k++]=arr2[j++];
    printArray(merged,n1+n2);
    
    return 0;
}
