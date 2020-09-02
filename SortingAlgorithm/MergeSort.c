/*
 * Merge Sort:
 * 	USes divide and conquer technique
 * 	first  array is divide into subarray recursively then merged back to get the sorted array
 *
 * Complexity:
 * 	1.Time
 * 		best, average and worst = O(n*logn)
 * 	2.Space
 * 		O(n*logn)
 * Stable sorting
 * efficient
 *
 */
#include<stdio.h>
//prototypes
void print(int*, int);
void merge(int*, int, int ,int);
void mergeSort(int*, int, int);

void main() {
       	int N;
       	printf("Enter num of elements: ");
       	scanf("%d",&N);

       	//declare an array of size N
       	int arr[N];

       	printf("Enter %d elements: ",N);
       	for(int i=0; i< N; i++) {
       			scanf("%d",(arr+i));
       	}

       	printf("before sorting: ");
        print(arr,N);

       	//call the function to sort the element
        mergeSort(arr,0,N-1);

        printf("After sorting: ");
       	print(arr,N);
}

//--------------------- print function ---------------------
void print(int*arr , int N) {
  	for(int i=0; i<N; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}



//------------------------ mergeSort function --------------
void mergeSort(int arr[] , int p, int r) {
    int q;
    if(p < r) {
        q = (p+r)/2;
        mergeSort(arr, p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}


//-------------------- merge function ---------------------
void merge(int* arr, int p, int q, int r) {
              //create temp array of size 1000
              int temp[1000];
              int i, j ,k;
              k =0;
              //as we are merging the elements from two are which are seperated at middle q so i will point to start of first part and j will point to start of second part
              i = p;
              j = q+1;

              //and go upto the end of each part
              while(i<=q  && j<=r) {
                  //pratek part cha starting elements pasun start karych compare karyla
                  //jo less asel tyla temp madhe add karycha ani tya subarray cha index inc karycha
                  if(arr[i]<arr[j]) {
                    temp[k++] = arr[i++];
                  }
                  else {
                      temp[k++] = arr[j++];
                  }
              }
              //if any elements remains in first then add to the array
              while(i<=q) {
                temp[k++] = arr[i++];
              }
              //if array element remains in J add to the array
              while(j<=r) {
                  temp[k++] = arr[j++];
              }

              //add this elements to the main array as these are sorted 
              for(i=r; i>=p; i--)
                  arr[i] = temp[--k];
}
