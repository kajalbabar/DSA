/*
 * Quick Sort
 * 	It is effective and uses divide and conquer method
 * 	Pivot is selected and then parted into subarray such that lower elements should be placed in left part of pivot and greater element in right part after pivot
 *
 * 	Complixity:
 * 		1.Time:
 * 			worst case: O(n^2)
 * 			best and average case: O(n*log n)
 * 		2.Space:
 * 			O(n*long n)
 *     not stable
 */


 #include <stdio.h>

 //prototypes
void quickSort(int* v , int, int );
void print(int*  ,int );
int partitionFun(int*,  int, int, int);

 void main() {
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
 		  print(arr,N);

       //call the function to sort the element
 			quickSort(arr,0,N);

 			printf("After sorting: ");
       print(arr,N);

}


int partitionFun(int* arr , int left,int right, int pivot) {
      int leftPtr = left,rightPtr = right-1,temp;

      //so start comparing each element with pivot
      while(1) {
            while(arr[++leftPtr] < pivot) {
                continue;
            }
            while(rightPtr > 0 && arr[--rightPtr] > pivot) {
              continue;
            }
            if(leftPtr >= rightPtr)
                break;
            else {
                //swap the
                temp = arr[rightPtr];
                arr[rightPtr] = arr[leftPtr];
                arr[leftPtr] = temp;
            }
            printf("Hii\n");
     }
     //then move the pivot to the actual position
     temp = arr[leftPtr];
     arr[leftPtr] = arr[right];
     arr[right] = temp;
     return leftPtr;
}

void quickSort(int*arr, int left, int right) {
      int pivot,partition;
      if(right-left <= 0)
          return ;
      else  {
          pivot = arr[right];
          partition  = partitionFun(arr, left,right,pivot);
          quickSort(arr,left, partition-1);
          quickSort(arr,partition+1, right);
     }
}
//--------------------- print function ---------------------
void print(int*arr , int N) {
  	for(int i=0; i<N; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
