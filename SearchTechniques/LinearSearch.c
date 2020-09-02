/*Linear search
    time complexity: O(n)
    space complexity: O(1)
*/

#include <stdio.h>

//prototype of the function
int linearSearch(int* , int , int);

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

      printf("Enter the element to be searched: ");
      scanf("%d", &key);

      //call the function
      int index = linearSearch(arr,N,key);
      if(index != -1)
        printf("The element %d is present at %d location \n",key, index);
      else
        printf("The element %d is not present in the array\n", key);

}

///function defination
int linearSearch(int* arr, int  N, int key) {
        for(int i=0; i<N; i++) {
            if( *(arr+i) == key)
                return i+1;

        }

        //not found then return -1
        return -1;
}
