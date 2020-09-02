#include <stdio.h>

// lets take a[5] = {32, 45, 67, 2, 7} as the array to be sorted.



// function to merge the subarrays
void merge(int a[], int p, int q, int r)
{
    int b[8];   //same size of a[]
    int i, j, k;
    k = 0;
    i = p;
    j = q + 1;
    while(i <= q && j <= r)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    while(i <= q)
    {
        b[k++] = a[i++];
    }

    while(j <= r)
    {
        b[k++] = a[j++];
    }

    for(i=r; i >= p; i--)
    {
        a[i] = b[--k];  // copying back the sorted list to a[]
    }
}
// merge sort function
void mergeSort(int a[], int p, int r)
{
    int q;
    if(p < r)
    {
        q = (p + r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}
// function to print the array
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int N,key;
    printf("Enter num of elements: ");
    scanf("%d",&N);

    //declare an array of size N
    int arr[N];

    printf("Enter %d elements: ",N);
    for(int i=0; i< N; i++) {
        scanf("%d",(arr+i));
    }

    printf("before sorting: ");
    printArray(arr,N);

    //call the function to sort the element
    mergeSort(arr,0,N-1);

    printf("After sorting: ");
    printArray(arr,N);
}
