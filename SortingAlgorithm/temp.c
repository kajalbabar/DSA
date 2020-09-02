#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int start,end;
    int evenSum = 0,oddSum = 0;
   // printf("Enter start : \n");
    scanf("%d",&start);
   // printf("Enter end : \n");
   scanf("%d",&end);
   
    if((start>= 0 && end <= 10000) && start != end){
        int ec =0,oc = 0;
        for(int i = start ; i <= end ; i++){
            int no = i;
           
            if(no % 2 == 0){
                evenSum = evenSum + no;
                ec++;
            }else{
                oddSum = oddSum + no;
                oc++;
            }
        }
           
               if(evenSum > oddSum){
                 int c =0;
                   for(int i = start ; i <= end ; i++){
                       int no = i;
                     
                       
                        if(no % 2 == 0){
                            c++;
                            printf("%d ",no);
                          if(c == 5){
                                printf("\n");
                            }
               
                         }
                       }
                       printf("\n");
                 
                   
               }else{
                   int c =0;
                     for(int i = start ; i <= end ; i++){
                          int no = i;
                         
                        if(no % 2 != 0){
                            c++;
                            printf("%d ",no);
                            if(c == 5){
                                printf("\n");
                            }
               
                        }
                   }
               }
       
    }else{
        printf("INVALID RANGE");
    }
   
    return 0;
}
