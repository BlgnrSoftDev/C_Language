#include <stdio.h>
#include <stdlib.h>

void findvariable(int* pointer );
void findpointer(int variable);

int main(void)
 {

     int a = 8 ;
     int* ptr = &a ;
     findvariable(&a);
     printf("\n\n*************************************\n") ;
     findpointer(a) ;
     return 0 ;
 }


 void findvariable(int* pointer )
 {
     printf("\n\npointer adresi : %p",&pointer) ;
     printf("\npointerin isaret ettigi degiskenin adresi : %p",pointer) ;
     printf("\npointerin isaret ettigi degiskenin degeri : %d", *pointer) ;


 }


 void findpointer(int variable)
 {
     int* ptr2 = &variable ;
     printf("\ndegisken adresi : %p",&variable) ;
     printf("\npointer adresi : %p",&ptr2) ;
     printf("\npointerin isaret ettigi deger : %d\n\n",*ptr2) ;


 }

