#include<iostream>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
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
            else{
                break;
            }
            if(i!=n-1)
                cout<<"NO"<<endl;
            else if(i==n-1){
                if(arr[i]==0)
                        cout<<"YES"<<endl;
                else    cout<<"NO"<<endl;
            }
        }
    }
}