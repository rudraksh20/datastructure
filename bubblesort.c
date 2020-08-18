void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

int main()
{
    int n,i;
    printf("Enter the number of array element");
    scanf("%d",&n);
    int number[n];
    for (i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    bubbleSort(number, n);
    for (i=0;i<n;i++){
        printf("%d",number[i]);
        printf(" ");
    }
    return 0;
}
