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

void zeroLast(int arr[], int n) {
    int j=0;
    for (int i=0; i<n; i++)
        if (arr[i] != 0)
            arr[j++]=arr[i];
    while (j<n) arr[j++]=0;
}

int main() {
    int arr1[6] = {0, 0, 1, 0, 3, 12};
    int arr2[9] = {0, 33, 57, 88, 60, 0, 0, 80, 99};
    int arr3[9] = {0, 0, 0, 18, 16, 0, 0, 77, 99};
    printArray(arr1, 6);
    printArray(arr2, 9);
    printArray(arr3, 9);
    
    zeroLast(arr1, 6);
    zeroLast(arr2, 9);
    zeroLast(arr3, 9);
    
    printArray(arr1, 6);
    printArray(arr2, 9);
    printArray(arr3, 9);
    return 0;
}
