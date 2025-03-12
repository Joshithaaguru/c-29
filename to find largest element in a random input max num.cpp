#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number of elements");
	scanf("%d",&n);
	double arr[100],max;
	printf("enter %d elements \n",n);
	for(i=0;i<n;i++){
		scanf("%lf",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<=n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("largest element :%.2lf \n",max);
	return 0;
}
