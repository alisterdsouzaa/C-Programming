//////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Accept N numbers from the user and accept NO from user.
//                      return index of last occurence of NO
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNO)
{
    int iCnt =0;
    int Last = -1;
   
    for(iCnt=iLength; iCnt>=0;iCnt--)
    {
        if(Arr[iCnt] ==iNO)
        {
           Last = iCnt;
           break;
        }
        
    }
    return Last; 
}

int main()
{
    int iSize = 0, iNo =0;
    int *ptr = NULL;
    int iCnt =0;
    int iRet;

    printf("Ente No to check :");
    scanf("%d", &iNo);

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
        printf("Enter element num %d:", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet =FirstOcc(ptr, iSize, iNo);
    if(iRet == -1)
    {
        printf("No occurence");
    }
    else {

    printf("Last occurence of No at Index : %d", iRet);
    }
    
    free(ptr);
    return 0;
}
