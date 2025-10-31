#include <iostream>
using namespace std;

int main() {
    int arr[]={3,8,6,9,9,8,6};
    int n=7;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    for (int i=0; i<n/2; i++) {
        int j=n-1-i;
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
    cout<<"\n";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
