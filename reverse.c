#include<stdio.h>
void main()
{
	int i,n,m,k,a[10],rev=0;
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
	m=a[i];
	for(i=0;i<n;i++)
	//{
		//if(m!=0)
		{
	    	k=m%10;
	        rev=rev*10+k;
	        m/=10;
	        //printf("Reverse of a[%d] element is %d\n",i,rev);
	    }
	    printf("Reverse of a[%d] element is %d\n",i,rev);
	//}
	//printf("Reverse of a[%d] element is %d\n",i,rev);
}
