#include<stdio.h>
int linearsearch(int a[10], int n, int x)
{ int j, found = -1;
  j=0;
  while(j<n && a[j]!=x)
   { j++;
   }
 if(a[j]==x) found=j;
 return(found);
 }
 
 void main(){
 	int a[20],n,i,x, pos;
 	printf("\n enter the size of array \n");
 	scanf("%d", &n);
 	printf("Enter %d array elements \n",n);
 	for(i=0; i<n; i++)
 	scanf("%d",&a[i]);
 	printf("Enter searching element \n");
 	scanf("%d",x);
 	pos=linearsearch(a,n,x);
 	if(pos==-1)
 	{ printf("\n element not present \n");
	 }
 	    
 	else{
 		printf("Element present at %d", pos+1);
	 } 	
 }