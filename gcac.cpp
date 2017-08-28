// greedy candidates in codechef (easy) code:gcac

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){
        long int n,m;
        cin>>n>>m;
        long int qual[n+1][m+1]={0},j;
        long int minsalary[n+1],i=1,offsal[m+1],maxjob[m+1];
        for(i=1;i<=n;i++)   cin>>minsalary[i];
        for(i=1;i<=m;i++)
            cin>>offsal[i]>>maxjob[i];
        for(i=0;i<=n;i++){
            for(j=0;j<=m;j++){
            	if(i==0||j==0)	qual[i][j]=0;
            	else
                scanf("%1d",&qual[i][j]);
            }
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                    if(qual[i][j]==1&&maxjob[j]&&offsal[j]>=minsalary[i]){
                            if(qual[i][0]==0)
                                qual[i][0]=j;
                            else
                                qual[i][0]=(offsal[j]>offsal[qual[i][0]])?j:qual[i][0];   
                    }
            }
            if(maxjob[qual[i][0]])
                maxjob[qual[i][0]]--;
            if(qual[i][0]>0){
            qual[0][0]+=1;
            qual[0][qual[i][0]]=qual[0][qual[i][0]]+1;
            }
        }
        long int sum=0,sal=0;
        for(i=1;i<=m;i++){
            if(qual[0][i]==0)
                sum++;
                else;
            sal =sal +(offsal[i]*qual[0][i]);
        }  
        cout<<qual[0][0]<<" "<<sal<<" "<<sum<<endl;
        t--;
    }
} 
