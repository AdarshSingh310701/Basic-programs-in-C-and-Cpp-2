#include <stdio.h>

int main(void) {
	
    int arr[50], num, temp, i, j;  
    printf(" Please, enter the total no. you want to enter: ");  
    scanf("%d",&num);  
      
    for (i = 0; i < num; i++)  
    {  
        scanf("%d",&arr[i]); 
    }  
      
      
    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    
    for ( i = 0; i < num; i++)  
    {  
        printf("%d ", arr[i]);
    }  
    
	return 0;
}


