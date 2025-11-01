void reverseArray(int arr[], int l,int r){
    while (l<r) {
        int tmp=arr[l];
        arr[l]=arr[r];
        arr[r]=tmp;
        l++;
        r--;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n ";
    
    k=k%n;
    if (k<0) {
        k+=n;
    }
    
    reverseArray(arr, 0, n-1);
    
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n ";
    
    reverseArray(arr, 0, k-1);
    
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n ";
    
    reverseArray(arr, k, n-1);
    
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n ";

    return 0;
}
