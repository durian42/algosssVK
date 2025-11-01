#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() {
    int n1=6, n2=3;
    int arr1[n1] = {1, 3, 5, 0, 0, 0};
    int arr2[n2] = {2, 4, 6};
    
    printArray(arr1, n1);
    printArray(arr2, n2);

    int i=n1-n2-1, j=n2-1, k=n1-1;

    while (j>=0) {
        if (i>=0 && arr1[i]>arr2[j])
            arr1[k--]=arr1[i--];
        else
            arr1[k--]=arr2[j--];
    }

    printArray(arr1, 6);
    return 0;
}
