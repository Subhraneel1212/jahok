// #include<stdio.h>
// int main(){
//     int r;
//     printf("enter the radius:");
//     scanf("%d",r);
//     float v;
//     v= 4*3.14*r*r*r/3;
//     printf("the volume is: %f",v);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     float m1=97;
//     float m2=99;
//     float m3=98;
//     float m4=95;
//     float p=(m1+m2+m3+m4)/5;
//     printf("percentage of four subjects : %f",p);
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     float p,r,t,si;
//     p=100;
//     r=10;
//     t=2;
//     si=(p*r*t)/100;
//     printf("%f",si);
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("enter the radius :");
//     scanf("%f",&radius);
    
//     float pi=3.14;
//     float area = pi*radius*radius;
//     printf("the area of circle is : %f",area);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int p,q;
//     printf("enter values of p and q :");
//     scanf("%d,%d",&p,&q);
//     printf("p=%d q=%d",p,q);
// // //     return 0;
// // // }
// // #include<stdio.h>
// // int main(){
// //     int a,b;//a>b
// //     printf("enter dividend :");
// //     scanf("%d", &a);
// //     printf("enter divisor :");
// //     scanf("%d", &b);
// //     int q=a/b;
// //     int r=a-b*q;
// //     printf("the remaineder when  is divided by  is : %d",r);
// //     return 0;
// // }
// // #include<stdio.h>
// // int main(){
// //     int x;
// //     printf("enter a number :");
// //     scanf("%d",x);
// //     if(x%2==0){
// //         printf("even number");
// //     }
// //     printf("\nthank you");
// //     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int l;
//     printf("enter length :");
//     scanf("%d",&l);
//     int b;
//     printf("enter breath :");
//     scanf("%d",&b);
//     int a=l*b;
//     int p=2*(l+b);
//     if(a>p){
//         printf("area is greater than parimeter");
//     }
//     if(a<p){
//         printf("parimeter is greater than area");
//     }
//     else{
//         printf("area and parimeter is eqal to each other");
//     }
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     if(n>5){
//         printf("the number is greater than 5");
//     }
//     else{
//         printf("the number is not grater than 5");
//     }
//     return 0;
// // }
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("enter a number :");
//      scanf("%d",&n);
//      if(n>99 && n<1000){
//          printf("the number is a three digit number");
//      }
//      else{
//          printf("the number is not a three digit number");
//      }
//      return 0;
//  }
//  #include<stdio.h>
//  int main(){
//      int n;
//      printf("enter a number :");
//      scanf("%d",&n);
//      if(n%5==0 || n%3==0){
//          printf("the number is divisible by 5 or 3");
//      }
//      else{
//          printf("the number is not divisible by 5 or 3");
//      }
//      return 0;
//  }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st number");
//     scanf("%d",&a);
//     printf("enter 2nd number");
//     scanf("%d",&b);
//     printf("enter 3rd number");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("a is the gratest among all the three numbers");
//     }
//     if(b>a && b>c){
//         printf("b is the greatest among all the three numbers");
//     }
//     if(c>a && c>b){
//         printf("c is the greatest among all the three numbers");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("enter first number :");
//     scanf("%d",&a);
//     printf("enter secound number :");
//     scanf("%d",&b);
//     printf("enter third number :");
//     scanf("%d",&c);
//     printf("enter fourth number :");
//     scanf("%d",&d);
//     if(a>b && a>c && a>d){
//         printf("%d is greatest",a);
//     }
//     if(b>a && b>c && b>d){
//         printf("%d is thhe greatest,b");

//     }
//     if (c>a && c>b && c>d){
//         printf("%d is greatest",c);
//     }
//     if(d>a && d>b && d>c){
//         printf("%d is the greatest",d);

//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     if(n%5==0){
//         if(n%3==0){
//             printf("the number is divisible by 5 and 3");
//         }

//     }
//     else{
//         printf("the numer is not divisible by 5 and 3");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     if(n%5==0 || n%3==0){
//         if(n%15!=0){
//             printf("the number is  divisible by 5 or 3 but not 15");
//         }
//         else{
//             printf("the number is divisible by 15");
//         }
//     }
//     else{
//         printf("the number is divisible by 5 or 3");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d", &n);
//     if(n%5==0 || n%3==0 && n%15!=0){
//         printf("the number is divisible by 5 or 3 but not 15");
//     }
//     else{
//         printf("the number is not matching the required condition");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 1st number :");
//     scanf("%d",&a);
//     printf("en //a<c
//         printf("%d is greeatest",c);
//     }
//     else{
//         if(b>c)
//         printf("%d is greatest",b);
//         else
//         printf("%d is greatest",c);
//     }ter 2nd number :");
//     scanf("%d",&b);
//     printf("enter 3rd numer :");
//     scanf("%d",&c);
//     if(a>b){ //here b is out of the race
//         if(a>c)
//         printf("%d is greatest",a);
//         else

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int cp;
//     printf("enter the cost price :");
//     scanf("%d",&cp);
//     int sp;
//     printf("enter the selling price :");
//     scanf("%d",&sp);
//     if(sp>cp){
//         printf("profit");
//     }
//     else if(cp>sp){
//         printf("loss");
//     }
//     else{
//         printf("no profit, no loss");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("enter the coordinates:");
//     scanf("%d%d",&x,&y);
//     if(x==0 && y==0){
//         printf("the point is the origin");
//     }
//     else if(x==0){
//         printf("the point lies in the y axis");
//     }
//     else if(y==0){
//         printf("the point lies in the x axis");
//     }
//     else{
//         printf('the point does not lie in x axis or y axis');
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d",i);
//     }
//     return 0;
// }