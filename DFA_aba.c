//program to impment the dfa string {a,b} such that each string contain aba


#include<stdio.h>

void main(){

  char str[100], f='A';

     int i;

     printf("Enter any string of {a,b}\n");
   scanf("%s",str);

   for ( i = 0; str[i]!='\0' ; i++)
   {

     if(str[i]!='a' && str[i]!='b')
    {
        printf("\nInvalid input enter only a and b\n");
        break;
    }

    else{
        switch (f)
   {
   case 'A': if (str[i]=='a')  f='B';
    else if(str[i]=='b') f='A';
        break;
    
    case 'B': if (str[i]=='b')  f='C';
    else if(str[i]=='a') f='B';
        break;
    
    case 'C': if (str[i]=='b')  f='A';
    else if(str[i]=='a') f='D';
        break;
    
     case 'D': if (str[i]=='b')  f='D';
    else if(str[i]=='a') f='D';
        break;

   default:
    break;
        }

    }
   }
if(f=='D'){
    printf("\nString is accepted");
}
else{
    printf("\nString is not accepted");
}

}