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
int partitionFun(int*,  int, int);

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

//------------------- partition of array ---------------------
int partitionFun(int* arr , int start, int end) {
      int loc , left ,right,temp,flag;
      loc = left = start;
      right = end;
      flag = 0;

      //so start comparing each element with pivot
      while(flag != 1) {
          while(arr[loc] <= arr[right] && loc!=right)
              right--;
          if(loc==right)
              flag = 1;
          else if(arr[loc] > arr[right]) {
                  temp = arr[loc];
                  arr[loc] = arr[right];
                  arr[right] = temp;
                  loc = right;
          }
          if(flag!=1) {
            while((arr[loc] >= arr[left]) && (loc!=left))
            left++;
            if(loc==left)
            flag =1;
            else if(arr[loc] < arr[left]) {
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;
                loc = left;
            }
          }
      }
      return loc;
}

void quickSort(int*arr, int left, int right) {
      int partition;
      if(left < right) {
          partition  = partitionFun(arr, left,right);
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
