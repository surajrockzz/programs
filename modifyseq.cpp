#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long int arr[n],count=0,i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n-1;i++){
            if(arr[i]&&arr[i+1]&&arr[i]==arr[i+1]){
                    arr[i]=0;
                    arr[i+1]=0;
            }
            else if(arr[i]&&arr[i+1]&&arr[i]<arr[i+1]){
                arr[i+1]=arr[i+1]-arr[i];
                arr[i]=0;
            }
            else if(arr[i]&&arr[i++]&&arr[i]>arr[i+1]){
                break;
            }
            if(arr[i]==0)
                count++;
        }
        if(i==n-1){
            if(arr[i]==0)   count++;
            if(count == n)
                cout<<"YES"<<endl;
            else    
            cout<<"NO"<<endl;
        }
        else    cout<<"NO"<<endl;
    } 
}