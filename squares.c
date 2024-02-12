#include<stdio.h>
void main()
{
	int i,n,a[10],squ;
	printf("Enter the no of elements to be inserted:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		squ=a[i]*a[i];
		printf("Square of the a[%d] element is %d\n",i,squ);
	}
}
