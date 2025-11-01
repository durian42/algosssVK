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
    int arr[n] = {3,2,4,1,11,8,9};
    printArray(arr, n);
    int evenIndex=0;
    for (int i=0; i<n; i++) {
        if (arr[i]%2 == 0) {
            swap(arr[i], arr[evenIndex]);
            evenIndex++;
        }
    }

    printArray(arr, n);
    return 0;
}
