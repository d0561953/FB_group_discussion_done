// fb group question of c 
// input value store in arr
// use pointer point to the memory place of arr
// then pass to the sort function and sort it 
// then output to main program where arrpointer point to the memory place of arr
// Author: Chris Sin
// Date:2020/10/22 15:36pm
 
#include <stdio.h>
void selectorsort(int* ,int);

int main(void)
{
    int*arrPointer;
    int arr[20]={0};
    printf("input: ");
    int i=0;
    for(i=0;i<20;++i){
        scanf("%d",&arr[i]);
        if(getchar()=='\n') {
            //i = i-1;  // not need this because is it not count in the array yet
            break; 			  
        }         
	}
	printf("i:%d",i); //have a check of size of arr (only for debug)
    arrPointer=arr;
   	selectorsort(arrPointer,i);  // passing the size of arr to control the size of loop of output
    
    printf("\noutput: ");
    
    for(int j=0;j<=i;++j){     // output value in sizeof input means only output the number of array not need output other of that
		printf("%d ",arrPointer[j]);
	}
    return 0;
    
}
void selectorsort(int* arrPointer,int i)   //pass the sizeof arr to sort don't need to sort the other value of 0
{
int k,l,tmp=0; 
int n=i;  // n is means to store size of arr
    for(k=0;k<n;++k){      // n=4 start from 0 to 4 means compare 5 times
        for(l=k+1;l<=n;++l){	//i=4 n=4 means have 5 value in arr so it mean first node compare with second thirth forth fifth
			if(arrPointer[l] < arrPointer[k]){    // output in < asc order , > dsc order k is first l is second
                tmp = arrPointer[k];              // swap
                arrPointer[k] = arrPointer[l];
                arrPointer[l] = tmp;
            }  
        }   
    }
}



