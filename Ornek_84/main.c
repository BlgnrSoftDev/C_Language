#include <stdio.h>
#include <stdlib.h>
// recursive function reminder project.....

int calculate(int x[],int y);
int main()
{
    printf("---------Welcome----------------------------------\n\n") ;
    int range, nums[50] ;
    printf("how many nums do u enter ? :\t") ;
    scanf("%d",&range) ;
    for(int i = 0;i < range;++i){
        printf("Enter num %d :\t",i + 1) ;
        scanf("%d",&nums[i]) ;
    }

    printf("Total ==> %d",calculate(nums,range)) ;
    printf("\n\n-------------------------Created by BlgnrSoftDev-------\n\n") ;

    return 0;
}

int calculate(int x[],int y){
if(y == 0)
    return 1 ;
else{
    return x[y-1] * calculate(x,y-1) ;
}

}
