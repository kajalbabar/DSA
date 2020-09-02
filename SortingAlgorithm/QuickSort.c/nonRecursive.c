/* consider array
  7 4 5 2 6
*/

#include <stdio.h>

//prototypes
void quickSort(int* v , int );
void print(int*  ,int );

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
			quickSort(arr,N);

			printf("After sorting: ");
      print(arr,N);

}


void quickSort(int *arr , int N) {
      int pivot = arr[N-1],temp;               //consider last element as pivot
      int left = -1,right = N-1;
      //so start comparing each element with pivot
      while(1) {
            while(arr[++left] <= pivot) {
                continue;
            }
            while(arr[--right] >= pivot) {
              continue;
            }
            if(left >= right)
                break;
            else {
                //swap the
                temp = arr[right];
                arr[right] = arr[left];
                arr[left] = temp;
            }
     }
     //then move the pivot to the actual position
     temp = arr[left];
     arr[left] = arr[N-1];
     arr[N-1] = temp;

     //this is main partion now here we got the starting of first partion is 0-right(0-2), second is 4
     left = -1;
     right = 3;
     pivot = arr[2];
     printf("after first pass\n");
     print(arr,N);

     //so start comparing each element with pivot
     while(1) {
           while(arr[++left] <= pivot) {
               continue;
           }
           while(arr[--right] >= pivot) {
             continue;
           }
           if(left >= right)
               break;
           else {
               //swap the
               temp = arr[right];
               arr[right] = arr[left];
               arr[left] = temp;
           }
    }
    //then move the pivot to the actual position
    temp = arr[left];
    arr[left] = pivot;
    arr[2] = temp;
    printf("After second pass\n");
    print(arr,N);

}
//--------------------- print function ---------------------
void print(int*arr , int N) {
  	for(int i=0; i<N; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
