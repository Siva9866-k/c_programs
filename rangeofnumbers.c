#include<stdio.h>
int main(){
    int count;
    float value,high,low,sum,average,range;
    sum=0;
    count=0;
    printf("Enter the numbers:");
input:
      scanf("%f",&value);
      if(value<0) goto output;
        count=count+1;
      if(count==1)
         high=low=value;
      else if(value>high)
               high=value;
             else if(value<low)
                     low=value;
       sum=sum+value;
       goto input;
output:
       average=sum/count;
       range=high-low;
       printf("\n");
       printf("Total values:%d\n",count);
       printf("Hghest-value:%f\nLowest-value:%f\n",high,low);
       printf("Range  :%fAverage :%f\n",range,average);


          

}