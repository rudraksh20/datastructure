
#include <stdio.h>
float average(int number[],int n){
    int i;
    float sum=0;
    for (i=0;i<n;i++){
        sum=sum+number[i];
    }
    return sum/n;
}


int main()
{
    int i,number[10];
    float avg;
    int n;
    printf("Enter the number of array element");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    avg=average(number,n);
    printf("the average is");
    printf("%.2f",avg);

    return 0;
}
