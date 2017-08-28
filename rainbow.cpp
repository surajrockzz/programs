// chef and rainbow in codechef 

#include<iostream>
#include<stack>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem[n],i,f=0,b=n-1,d=1;
        for(i=0;i<n;i++)    cin>>rem[i];
        while(f<b){
            if(rem[f]==rem[b]&&rem[f]==d)
                    f++,b--;
            else
                break;
            if(rem[f]==rem[b]&&rem[f]==d);
            else
                d++;
        }
        //cout<<d<<"\n";
        //cout<<"f="<<f<<" b= "<<b<<"\n";
        if(f>b&&d==7&&(rem[f]==7||rem[b]==7))
            cout<<"yes"<<"\n";
        else if(f==b&&d==7&&rem[f]==7)
                cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";
    }
 }
