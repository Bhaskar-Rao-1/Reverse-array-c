#include<stdio.h>
int reverse(int arr[],int n);
void print(int arr[],int n);
int main()
{
    int arr[]= {1,2,3,4,6,7};
    reverse(arr,6);
    print(arr,6);
    return 0;
}
int reverse(int arr[],int n) {
    for(int i=0; i<n/2; i++) {
        int first=arr[i];
        int second=arr[n-i-1];
        arr[i]=second;
        arr[n-i-1]=first;
    }
    printf("\n");
}
void print(int arr[],int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}