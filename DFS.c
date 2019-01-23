#include<stdio.h>
void dfs(int v);
int n,a[10][10];
int visited[10];
void main()
{
int i,j,v;
printf("Enter the no. of nodes in the graph\n");
scanf("%d",&n);
printf("Enter the adjacency matrix \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The adjacency matrix shown as\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Enter the starting node for Depth First search\n");
scanf("%d",&v);
for(i=1;i<=n;i++)
visited[i]=0;
dfs(v);
}
void dfs(int v)
{
int i,stack[10],top=-1,pop;
top++;
stack[top]=v;
while(top>=0)
{
pop=stack[top];
top--;
if(visited[pop]==0)
{
printf("%d",pop);
visited[pop]=1;
}
else
continue;
for(i=n;i>=1;i--)
{
if(a[pop][i]==1 && visited[i]==0)
{
top++;
stack[top]=i;
}
}
}
}
