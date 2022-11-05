// #include <stdio.h>
// int main(){
//     printf("Hello world ");
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int num1;
//     printf("Enter an integer : ");
//     scanf("%d", &num1);
//     printf("Number is  %d ", num1);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     float num1;
//     double num2;

//     printf("Enter a number : ");
//     scanf("%f",&num1);
//     printf("Enter another number : ");
//     scanf("%lf",&num2);

//     printf("num1 = %f \n",num1);
//     printf("num2 = %lf \n",num2);
//     return 0;

// }



// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);
//     printf("%c",ch);
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int a = 9,b = 4, c;
//     c = a+b;  // 13
//     printf("a+b = %d \n",c);
//     c = a-b;  // 5
//     printf("a-b = %d \n",c);
//     c = a*b; //36
//     printf("a*b = %d \n",c);
//     c = a/b;   // 2
//     printf("a/b = %d \n",c);
//     c = a%b;   // 1
//     printf("Remainder when a divided by b = %d \n",c);
    
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter an integer : ");
//     scanf("%d",&number);
//     if(number < 0){
//         printf("Number is negative ");
//     }
//     return 0;
// }


// Check whether an integer is odd or even

// #include <stdio.h>
// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     // True if the remainder is 0
//     if  (number%2 == 0) {
//         printf("%d is an even integer.",number);
//     }
//     else {
//         printf("%d is an odd integer.",number);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int number1, number2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &number1, &number2);
//     if(number1 == number2) {
//         printf("Result: %d = %d",number1,number2);
//     }
//     else if (number1 > number2) {
//         printf("Result: %d > %d", number1, number2);
//     }
//     else {
//         printf("Result: %d < %d",number1, number2);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int number1, number2;
//     printf("Enter two integers: ");
//     scanf("%d %d", &number1, &number2);
//     if (number1 >= number2) {
//       if (number1 == number2) {
//         printf("Result: %d = %d",number1,number2);
//       }
//       else {
//         printf("Result: %d > %d", number1, number2);
//       }
//     }
//     else {
//         printf("Result: %d < %d",number1, number2);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i;
//     for(i = 1; i<=10; i++){
//         printf("%d ",i);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int num, count, sum = 0;
//     printf("Enter a positive integer : ");
//     scanf("%d",&num);
//     for(count = 1; count <= num; count++){
//         sum = sum + count;
//     }
//     printf("sum = %d",sum);
//     return 0;
// }



// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

// #include <stdio.h>
// int main() {
//    int i;
//    double number, sum = 0.0;
//    for (i = 1; i <= 10; ++i) {
//       printf("Enter n%d: ", i);
//       scanf("%lf", &number);
//       if (number < 0.0) {
//          break;
//       }
//       sum += number;
//    }
//    printf("Sum = %.2lf", sum);
//    return 0;
// }



// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

// #include <stdio.h>
// int main() {
//    int i;
//    double number, sum = 0.0;
//    for (i = 1; i <= 10; ++i) {
//       printf("Enter a n%d: ", i);
//       scanf("%lf", &number);
//       if (number < 0.0) {
//          continue;
//       }
//       sum += number; 
//    }
//    printf("Sum = %.2lf", sum);
//    return 0;
// }



// #include <stdio.h>
// int addNumbers(int a, int b){
//     int result;
//     result = a + b;
//     return result;
// }
// int main(){
//     int n1,n2,sum;
//     printf("Enter two numbers : ");
//     scanf("%d %d", &n1,&n2);
//     sum = addNumbers(n1, n2);
//     printf("Sum = %d",sum);
//     return 0;
// }


// #include <stdio.h>
// void checkPrimeNumber();
// int main() {
//   checkPrimeNumber();   
//   return 0;
// }
// void checkPrimeNumber() {
//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d",&n);
//   if (n == 0 || n == 1)
//     flag = 1;
//   for(i = 2; i <= n/2; ++i) {
//     if(n%i == 0) {
//       flag = 1;
//       break;
//     }
//   }
//   if (flag == 1)
//     printf("%d is not a prime number.", n);
//   else
//     printf("%d is a prime number.", n);
// }


// #include <stdio.h>
// int getInteger();
// int main() {
//   int n, i, flag = 0;
//   n = getInteger();    
//   if (n == 0 || n == 1)
//     flag = 1;
//   for(i = 2; i <= n/2; ++i) {
//     if(n%i == 0){
//       flag = 1;
//       break;
//     }
//   }
//   if (flag == 1)
//     printf("%d is not a prime number.", n);
//   else
//     printf("%d is a prime number.", n);

//   return 0;
// }
// int getInteger() {
//   int n;
//   printf("Enter a positive integer: ");
//   scanf("%d",&n);

//   return n;
// }


// #include <stdio.h>
// void checkPrimeAndDisplay(int n);
// int main() {
//   int n;
//   printf("Enter a positive integer: ");
//   scanf("%d",&n);
//   checkPrimeAndDisplay(n);
//   return 0;
// }
// void checkPrimeAndDisplay(int n) {
//   int i, flag = 0;
//   if (n == 0 || n == 1)
//     flag = 1;
//   for(i = 2; i <= n/2; ++i) {
//     if(n%i == 0){
//       flag = 1;
//       break;
//     }
//   }
//   if(flag == 1)
//     printf("%d is not a prime number.",n);
//   else
//     printf("%d is a prime number.", n);
// }


// #include <stdio.h>
// int checkPrimeNumber(int n);
// int main() {
//   int n, flag;
//   printf("Enter a positive integer: ");
//   scanf("%d",&n);
//   flag = checkPrimeNumber(n);
//   if(flag == 1)
//     printf("%d is not a prime number",n);
//   else
//     printf("%d is a prime number",n);
//   return 0;
// }
// int checkPrimeNumber(int n) {
//   if (n == 0 || n == 1)
//     return 1;
//   int i;
//   for(i=2; i <= n/2; ++i) {
//     if(n%i == 0)
//       return 1;
//   }
//   return 0;
// }



