#include <stdio.h>

int** arr;
void main() {
         arr = (int**) malloc(sizeof(int*)*4);
	int x = 10;
         arr[0] =&x ;
          for(int i=0; i<4; i++)
                   printf("%d\n",*arr[0]);

}
