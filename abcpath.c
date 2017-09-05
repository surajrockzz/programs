#include <stdio.h>
#include<stdlib.h>
int dfs(char **arr,char **visi, int i, int j, int m, int n)
{
    int v = 0, p = 0;
    if (i > 0 && j > 0 && arr[i - 1][j - 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr,visi, i -1,j-1, m, n);
        p = v > p ? v : p;
    }
    if (i > 0 && arr[i - 1][j] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr,visi, i - 1, j, m, n);
        p = v > p ? v : p;
    }
    if (i > 0 && j < n - 1 && arr[i - 1][j + 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr, visi,i - 1, j + 1, m, n);
          p = v > p ? v : p;
    }
    if (j < n - 1 && arr[i][j + 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr, visi,i, j + 1, m, n);
          p = v > p ? v : p;
    }
    if (j > 0 && arr[i][j - 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr, visi,i, j - 1, m, n);
          p = v > p ? v : p;
    }
    if (i < n - 1 && j > 0 && arr[i + 1][j - 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr,visi, i + 1, j - 1, m, n);
          p = v > p ? v : p;
    }
    if (i < n - 1 && arr[i + 1][j] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr,visi, i + 1, j, m, n);
          p = v > p ? v : p;
    }
    if (i < n - 1 && j < n - 1 && arr[i + 1][j + 1] == arr[i][j] + 1)
    {
    	if(visi[i][j]){
    		v=visi[i][j];
		}
		else
        v = dfs(arr, visi,i + 1, j + 1, m, n);
          p = v > p ? v : p;
    }
    visi[i][j]=1;
    return p + 1;
}
int main(){
        int m,n,i,j,k=1;
        scanf("%d%d",&m,&n);  
      	while(m+n){
        		char **arr;
        arr = (char **)malloc(sizeof(char *) * m);
	arr[0] = (char *)malloc(sizeof(char) * m * n);
	for(i = 0; i < m; i++)
		arr[i] = (*arr + n * i);
	char **visi;
    visi = (char **)malloc(sizeof(char *) * 60);
	visi[0] = (char *)malloc(sizeof(char) * 60 * 60);
	for(i = 0; i < 60; i++)
		visi[i] = (*visi + 60 * i);
	int b=0,g=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf(" %c",&arr[i][j]);
                visi[i][j]=0;
            }
        }
		for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]=='A')
                	b= dfs(arr,visi,i,j,m,n);
                	g=g>b?g:b;
            }
        }        
        printf("Case %d: %d\n",k++,g);
        scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			break;
	    }
    }

