#include <stdio.h>
void selectorsort(int*);

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
	printf("i:%d",i); 
    arrPointer=arr;
   	selectorsort(arrPointer);  
    
    printf("\noutput: ");
    int j=0;
    //for(j=0;j<i;++j){    // i have to change to 20 so it will appear all the array value  
    for(j=0;j<20;++j){    // it will appear all the value is array  
    
		printf("%d ",arrPointer[j]);
	}
    return 0;
}
void selectorsort(int* arrPointer)
{
int k,l,tmp=0; 
    for(k=0;k<20;k++){      
        for(l=k+1;l<=20;l++){	
			if(arrPointer[l] < arrPointer[k]){
                tmp = arrPointer[k];
                arrPointer[k] = arrPointer[l];
                arrPointer[l] = tmp;
            }
            
        }   
    }

}

