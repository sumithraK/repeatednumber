#include<stdio.h>
#include<math.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
if(a[abs(a[i])]>=0)
{
a[abs(a[i])]=-a[abs(a[i])];
}
else
printf("%d",abs(a[i]));
}
return 0;
}
