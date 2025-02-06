#include<stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int i,max,min,total,avg,rev,j,po;
    int arr2[5],a[5],b[5];
    printf("enter the 5 values in the arry \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    printf("\n");
      for(i=0;i<5;i++){
        printf("%d \n",arr2[i] );
    } 
    printf("\n");
    	max=arr[0];
    for(i=0;i<5;i++){
    
    	if(max<=arr2[i])
    	{
    		max=arr2[i];
		}
	}
	printf("the largest number in the array %d \n",max);
	min=arr2[0];
	  for(i=0;i<5;i++){
    	
    	if(arr2[i]<min)
    	{
    		min=arr2[i];
		}
	}
    printf("the smallest number in the array %d \n",min);
    total=0;
    for(i=0;i<5;i++){
    	total=total+arr2[i];
	}
	 printf("the total of number in the array %d \n",total);
	 avg=total/5;
	 printf("the avarege of number in the array %d \n",avg);
	  i=4;
	   for(j=0;j<5;j++){
	 	a[j]=arr2[i];
	 	i--;
	 }

	  printf("\n");
      for(i=0;i<5;i++){
        printf("%d \n",a[i] );
    } 
    printf("enter the poisition bwt 1 to 5\n");
    scanf("%d",&po);
    
    printf("enter the number to be enter \n");
    scanf("%d",&a[po-1]);
      printf("\n");
      for(i=0;i<5;i++){
        printf("%d \n",a[i] );
    } 
	  printf("enter the poisition bwt 1 to 5 to delete \n");
    scanf("%d",&po);
    a[po-1]=0;

      printf("\n");
      for(i=0;i<5;i++){
        if(i==(po-1))
        i++;
      else
        printf("%d \n",a[i] );
    } 
    return 0;
}
