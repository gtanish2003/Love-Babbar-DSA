#include<iostream>
#include<vector>
#include<climits>
using namespace std;


void minmax(int *arr,int n){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"Min:"<<min<<endl;
    cout<<"Max:"<<max<<endl;

}

int main(){

    int arr[100];
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<"Enter the elements of the array:"<<endl;

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    minmax(arr,n);


    return 0;
}