// spoj problem  http://www.spoj.com/problems/COMDIV/ 
#include<math.h>
#include<stdio.h>
using namespace std;
int gcd (int a ,int b){
	int D,d,q,r;
	if(a>b){
		D=a;
		d=b;
		q=D/d;
		r=D%d;
	}
	else{
		D=b;
		d=a;
		q=D/d;
		r=D%d;
	}
	while(r!=0){
		D=d;
		d=r;
		q=D/d;
		r=D%d;
	}
	return d;
}
int factors(int f){
	int s = sqrt(f),i,t=2;
	for(i=2;i<=s;i++)
		if(f%i==0)
			t+=2;
	if(s*s == f)
		return t-1;
	else
		return t;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int a,b;
   scanf("%d %d",&a,&b);
   if(a==b)
   		printf("%d\n",factors(a));
   	else{
   		printf("%d\n",factors(gcd(a,b)));
	   }
}
} 
