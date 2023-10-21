#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void print(int arr[]){
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;

    cout<<"The array before reversing is:"<<endl;
    print(arr);
    reverse(arr,n);


    cout<<"The array after reversing is:"<<endl;
    print(arr);
}