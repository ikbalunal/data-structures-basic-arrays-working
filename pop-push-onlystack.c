#include <stdio.h>

    int arr[4]={1,2,3,4};
    int stack[4];
    int top=-1; 

void push(int x){
        
    if(top==3)
    {
        printf("dolu \n");
    }
    
    else
    {
        top=top+1;
        stack[top]=x;
    }
}

int pop(){
    int result=stack[top];
    top--;
    return result;
} 

int main()
{
 
   
    
        for(int i=0;i<4;i++)
        {
          int x=arr[i];
           push(x);
          
        }
            
        for(int j=0;j<4;j++)
        {
              arr[j]=pop();
          }  
            
        for(int k=0;k<4;k++)
        {
            printf("%d, ",arr[k]);
        }
            
        
        return 0;
}