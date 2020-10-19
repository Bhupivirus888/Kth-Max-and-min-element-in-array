#include<iostream>
using namespace std;
int main(){
    int arr[100],n,key, j,k;
    cout<<"Enter the size of arry :"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    cout<<"which Kth element do you want to access"<<endl;
    cin>>k;
    cout<<"Your element is : "<<arr[k-1]<<endl;


    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;

}
