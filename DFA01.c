//program for the implementation of string over {0,1} start with 01

#include<stdio.h>

void main(){
    char str[100], f='A';

    int i;

    printf("Enter any string of {0,1}\n");
    scanf("%s",str);

    for ( i = 0; str[i]!='\0' ; i++)
   {

    if (str[i]!='1' && str[i]!='0')
    {
        printf("\nInvalid Input, Enter the valid input\n");
        break;
    }
    else{
        switch (f)
   {
    case 'A': if (str[i]=='0')  f='B';
    else if(str[i]=='1') f='D';
        break;

    case 'B': if (str[i]=='1')  f='C';
    else if(str[i]=='0') f='D';
        break;
    
    case 'C': if (str[i]=='1')  f='C';
    else if(str[i]=='0') f='C';
        break;
    case 'D': if (str[i]=='1')  f='D';
    else if(str[i]=='0') f='D';
        break;
        
      default:
    break;
   }
    }

   }
if(f=='C'){
    printf("\nString is accepted");
}
else{
    printf("\nString is not accepted");
} 

}