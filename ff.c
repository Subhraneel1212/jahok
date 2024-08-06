// # include<stdio.h>
// # include<math.h>
// //power
// int main(){
//     int a,b;
//     a=4;b=5;
//    int power = pow(a,b);
//    printf("%d",power);
//     return 0;
// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("%d",16%10);
//     return 0;
// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("%d",(4<3) && (5>2) );
//     return 0;
// // }
//odd ,even number judge.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x;
//     printf("enter a number :");
//     scanf("%d",&x);
//     printf("the value is : %d",x%2==0);
//     return 0;
// }

// #include<stdio.h>
//  int main(){
//     int ismonday = 0;
//     int israining = 0;
//     printf("%d", ismonday || israining);
// //     int issunday = 1;
// // //     int issnowing = 1;
// // //     printf("%d",issunday && issnowing);
// // //     return 0;
    
// // // }
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int x;
// //     printf("enter a number :");
// //     scanf("%d",&x);
// //     printf("%d", x>9 && x<100);
// //     return 0;
// // }
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int age;
// //     printf("enter age :");
// //     scanf("%d", &age);


// //     if (age > 18) {
// //         printf("adult \n");
// //         printf("they can vote \n");
// //         printf("they can drive \n");


// //     }
// //     else{
// //         printf("not adult \n");
// //     }
// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d",&age);
//     if(age >= 18){
//         printf("child");
//     }
    
//     return 0;
// }
//         printf("adult");
//     }
//     else if(age >13 && age < 18){
//         printf("teenager");
//     }
// // //     else{
// // #include<stdio.h>
// // #include<math.h>
// // int main(){
// //     int age;
// //     printf("enter age :");
// //     scanf("%d", &age);
// //     age >= 18 ? printf("adult") : printf("not adult");
// //     return 0;
// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//          int day;
//          printf("enter day(1-7) : ");
//          scanf("%d", &day);
//          switch (day) {
//             case 1 : printf("monday \n");
//                      break;
//             case 2 : printf("tuesday\n");
//                      break;
//             case 3  : printf("thrusday\n");
//                      break;
//             case 4 : printf("friday\n");
//                      break;
//             case 5 : printf("saturday\n");
//                      break;
//             case 6  : printf("sunday\n");
//                      break;
//             case 7  : printf("monday\n");
//                      break;
//                      default : printf("not a valid day!\n");
//          }  

//          return 0;  
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;
//     printf("enter number : ");

//     scanf("%d", &number);

//     if(number >= 0) {
//         printf("positive\n");
//         if(number % 2 == 0) {
//             printf("even\n");

//         } else{
//             printf("odd\n");
//         }
//     } else {
//         printf("negetive\n");
//     }
    
// //     return 0;

// // // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int marks;
//     printf("enter number(0-100) : ");
//     scanf("%d", &marks);

//     // if(marks >= 0 && marks <= 30) {
//     //     printf("fail\n");
//     // }else if(marks > 30 && marks <= 100) {
//     //     printf("pass\n");
//     // } else{
//     //     printf("wrong marks");
//     // }
// //     marks <= 30 ? printf("fail\n") : printf("pass\n");

// //     return 0;

// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int marks;
//     printf("enter a number(0-100) : ");
//     scanf("%d", &marks);
//     if (marks < 30){
// //         printf("c\n");
// //     }
// //     else if(marks >= 30 && marks < 70) {
// //         printf("b\n");
// //     }
// //     else if(marks >= 70 && marks < 90) {
// //         printf("a\n");
// //     }
// //     else{
// //         printf("A+\n");
// //     }
// //     return 0;
// // }
// #include<stdio.h>
// #include<math.h>
// int main(){
//     char ch;
//     printf("enter character :");
//     scanf("%c", &ch);
//     if(ch >= 'A' && ch <= 'Z') {
//         printf("upper case");
//     }
//     else if(ch >= 'a' && ch <= 'z'){
//         printf("lower case");
//     }
//     else {
//         printf("not an english letter");
//     }
//     return 0;
// }