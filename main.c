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
 #include <stdio.h>
int main() {
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
