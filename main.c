// #include <stdio.h>
// int main(){
//     printf("Hello World");
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int arr[5];
//     int i;
//     printf("enter 5 numbers:\n");
//     for(i=0;i<5;i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("array elemnts are:\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d",arr[i]);
//     }
//     return 0;
// 
// 
// #include<stdio.h>
// int main (){
//     int a,b,result ;f("enter two numbers :");
//     scanf("%d%d,&a,&b");
//     result = a/b;
//     printf("division=%d",result);
//     return 0;
//     print

// }
// #include<stdio.h>
//  int main ()

//  {
// 	 int a, b, difference ;
	 
// 	 printf("20");
// 	 scanf("%d" , &a);
	 
// 	 printf("15");
// 	 scanf("%d" , &b);
	 
// 	 difference = a - b;
	 
// 	 printf("difference = %d" , difference);
	 
// 	 return 0;

// }
//   #include<stdio.H>
//   int main(){
//     int arr[5];
//     int i;

//     printf("Enter 5 numbers:\n");
//     for(i=0;  i<5; i++){
//         scanf("%d ,&arr[i]");
//     }
//     printf("array elements are:\n");

//     for(i=0; i<5; i++){
//         printf ("%d", arr[i]); 
//     }
    
//         return 0;
//   }

//  #include<stdio.h>
//  int main(){
//     int arr [2][3];
//     int i, j;

//     printf("enter6 elements:\n ");

//     //input elements 
//     for( i= 0; i<2; i++);{
//  for(j=0; j<3 ; j++);{
// scanf("%d", &arr[i][j]);
//  }
// }
 
//   //Displsy elements 
//   printf ("2D Array is :\n");
//       for( i= 0; i<2; i++);{
//  for(j=0; j<3 ; j++);{
// printf("%d", arr[i][j]);
//  }
// }
//  }
//  
// 
// #include<stdio.h>
// int main (){
//     char name[20] = "jhon";
//     printf("%s", name);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char name[50];

//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("Your name is %s", name);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Your string is: %s", str);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, len;

//     printf("Enter a string: ");
//     scanf("%s", str);

//     len = strlen(str);

//     printf("Reverse string: ");

//     for (i = len - 1; i >= 0; i--) {
//         printf("%c", str[i]);
//     }
//     return 0;
// }
    
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("Total vowels = %d", count);

    return 0;
}

