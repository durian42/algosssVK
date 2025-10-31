#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,8,9,11,16,18,21};
    int n=7;
    int target=25;
    
    int l=0;
    int r=n-1;
    while (l<r) {
        int Sum=arr[l]+arr[r];
        if (Sum==target) {
            cout<<arr[l]<<"+"<<arr[r]<<"="<<target;
            break;
        } else if (Sum<target) {
            l++;
        } else {
            r--;
        }
    }
    return 0;
}
