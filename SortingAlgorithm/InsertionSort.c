/*
 * -------------------- Insertion Sort -------------------------------------
 * Used to sort the given array
 * Complexity :
 * 	1.Time:
 * 		best case - O(n)
 * 		worst and average case O(n^2)
 *      2.Space:
 *      	O(1) as only one variable argument required
 */

#include <stdio.h>

//forward declaration
void insertionSort(int* ,int );
void print(int*, int);

void main() {
	    //take size  of an array and array elements
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
			insertionSort(arr,N);

			printf("After sorting: ");
      print(arr,N);

}

/* insertionSort function
 * parameters: int*  , int
 */
void insertionSort(int* arr, int N) {
        /* temp: for swapping
         * key : to store sorting element
         * j : to store index
         */
        int temp,key , j;

        //start loop form 1 because 0th element is considered as sorted subarray
        for(int i=1; i<N; i++) {
						//get the element as key which is to be placed at correct position
            key = arr[i];
            //index of key
            j = i;

            //swap till the previous element is greatet than key
            while(j > 0  && arr[j-1] > key) {
                  temp = key;
                  arr[j] = arr[j-1];       //shifted to one position before
                  arr[j-1] = key;
                  j--;
             }
          }
}


void print(int*arr , int N) {
  	for(int i=0; i<N; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
