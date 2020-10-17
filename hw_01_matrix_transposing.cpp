/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A[2][3]={{10,20,30},{11,12,13}};
    //10 20 30
    //11 12 13 
    int B[3][2]={0}; //00*00 01*10 02*20 //10*01 11*11 12*21  //
    //10 11          //ij ji ij  ji ij ji  
    //20 12 
    //30 13 
    int C[2][3]={0};
    //10 20 30
    //11 12 13 
    int D[2][3]={0};
    //20 40 60
    //22 24 26
    int E[2][2]={{0,0},{0,0}};
    //10*10+20*20+30*30  10*11+20*12+30*13   
    //11*10+12*20+13*30  11*11+12*12+13*13
    
    //00*00+01*10+02*20  00*01+01*11+02*21
    //10*00+11*10+12*20  10*01+11*11+12*21
    
        printf("A array is:\n");
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            printf("%d ",A[i][j]);
            B[j][i] = A[i][j];
            
        }printf("\n");
    }
    
printf("\n");
 
        printf("B array is:\n");
     for(int i=0;i<3;++i){
        for(int j=0;j<2;++j){
            printf("%d ",B[i][j]);
            
        }printf("\n");
    }
printf("\n");
 
        printf("C array is:\n");
     
     for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            C[i][j]=A[i][j];
            printf("%d ",C[i][j]);
            
        }printf("\n");
    } 
printf("\n");
 
        printf("D array is:\n");  //D =A+C
     
     for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            D[i][j]=C[i][j]+A[i][j];
            printf("%d ",D[i][j]);
            
        }printf("\n");
    } 
printf("\n");
 
       //E =A*B  
    for (int i = 0; i <2; ++i) {  // row A array  (row1 times column1) and add (row1 times column2)
        for (int j = 0; j <2; ++j) {  // column B array
             for (int k = 0; k <3; ++k) {  // column A array
                E[i][j]+= A[i][k]*B[k][j];
         }
      }
   }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
             printf("%d ", E[i][j]);
         
      }printf("\n");
   }

    return 0;
}

/* Comment of FB Group discussion hw_01 of DATA STRUCTURE */

