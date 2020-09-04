/* binary search
      time complexity:O(1) for best case O(nlogn) for worst and average case
      space complexity: O(1)
*/
#include <stdio.h>
#include <stdlib.h>

//prototype of the function
int binarySearch(int* , int , int,int);

void main() {
        //take size  of an array and array elements
        int N,key;
        printf("Enter num of elements: ");
        scanf("%d",&N);

        //N should Be greater than 0
        if(N <= 0)
                exit(0);

        //declare an array of size N
        int arr[N];

        printf("Enter %d elements: ",N);
        for(int i=0; i< N; i++) {
            scanf("%d",(arr+i));
        }

        printf("Enter the element to be searched: ");
        scanf("%d", &key);

        //call the function
        int index = binarySearch(arr,key,0,N);
        if(index != -1)
          printf("The element %d is present at %d location \n",key, index+1);
        else
          printf("The element %d is not present in the array\n", key);

}


//function defination
int binarySearch(int* arr, int key , int start, int end) {
        int middle;
        if(start<=end) {
           //calculate middle
            middle = (start+end)/2;

            //if num found out at middle position
            if(arr[middle]==key)
                return middle;

            //if middle element is less than key then search for right otherwise left
            if(arr[middle] > key)
                 return binarySearch(arr,key, 0 , middle-1);
            if(arr[middle] < key )
                 return binarySearch(arr,key , middle+1, end);
        }
        return -1;
}
