/////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Accept N numbers from the user and dsiplay numbers which
//                       are even and  divisible by 5. 
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void Dislpay(int Arr[],int iSize)
{
     int iCnt = 0, iSumEven = 0, iSumOdd =0;
     for(iCnt=0; iCnt<iSize; iCnt++)
     {
         if(((Arr[iCnt]%5 == 0)) && ((Arr[iCnt]%2 == 0)))
         {
             printf("The num divisible by 5 and even is : %d\n", Arr[iCnt]);
         }
     }
     
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d", &iSize);

    ptr = (int *) malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter your elements one by one :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

     Dislpay(ptr, iSize);

    free(ptr);
    return 0;
}
