/*
 * Bubble Sorting: Used to sort the given array
 * Complexity :
 * 	1.Time:
 * 		best case - O(n)
 * 		worst and average case O(n^2)
 *      2.Space:
 *      	O(1) as only one variable argument required
 */

#include <stdio.h>

//forward declaration
void bubbleSort(int* ,int );


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
			for(int i=0; i<N; i++) {
					printf("%d\t",arr[i]);
			}
			printf("\n");
			//call the function to sort the element
			bubbleSort(arr,N);

			printf("After sorting: ");
 			for(int i=0; i<N; i++) {
 					printf("%d\t",arr[i]);
 			}
 			printf("\n");

}

/* bubbleSort function
 * parameters: int*  , int
 */
void bubbleSort(int* arr, int N) {
			  int temp;
				int flag = 0;					//if already sorted then set this to the one and break the loop
				for(int i=0; i<N; i++) {
						//pass
						flag= 0;
						for(int j=0; j < N-1-i; j++) {
								//if element is greater then swap it
								if(arr[j] > arr[j+1]) {
										temp = arr[j];
										arr[j] = arr[j+1];
										arr[j+1] = temp;

										//if make any changes then flag = 1;
										flag = 1;
								}
						}
						if(!flag)
							 break;
				}
}
