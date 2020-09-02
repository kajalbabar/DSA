/*
 * -------------------- Selection Sort -------------------------------------
 * Used to sort the given array by repeadly finding the minimum element
 * Complexity:
 * 	1.Time:
 * 		best case - O(n^2)
 * 		worst and average case O(n^2)
 *      2.Space:
 *      	O(1) as only one variable argument required
 */

#include <stdio.h>

//forward declaration
void selectionSort(int* ,int );
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
			selectionSort(arr,N);

			printf("After sorting: ");
      print(arr,N);

}

/* selectionSort function
 * parameters: int*  , int
 */
void selectionSort(int* arr, int N) {
        /* temp: for swapping
         * min : to store minimum element
         * j : to traversing
         * indexMin: to store index of minimum element
         */
        int temp,min , j,indexMin;

      //find the min num and replace it with appropriate place
      for(int i=0; i< N; i++) {
            min = arr[i];     //consider first as a minimum num
            j = i;

            //find min from remaining array
            while(j<N) {
                //compare it with min
                if(min > arr[j])  {
                    min = arr[j];         //copy it  to the min
                    indexMin = j;         //and its index
                }
                j++;
            }

            //swap the data if that element is not same as min
            if(arr[i]!=min) {
                  temp = arr[i];
                  arr[i] = min;
                  arr[indexMin] = temp;
            }
            print(arr,N);
      }
}


void print(int*arr , int N) {
  	for(int i=0; i<N; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
