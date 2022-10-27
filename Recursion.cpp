#include <iostream>
#include <stdio.h>
// using namespace std;
// void fun(int n){
//     if(n > 0){
//         printf("%d ", n);
//         fun(n - 1);
//     }
// }
// int main(){
//     int n = 100;
//     fun(n);
//     return 0;
// }


// void fun (int n){
//     if(n > 0){
//         fun(n - 1);
//         printf("%d ", n);
//     }
// }
// int main(){
//     int n = 100;
//     fun(n);
//     return 0;
// }



// void alternate(int n){
//     if(n > 0){
//         alternate(n - 2);
//         printf("%d ",n);
//     }
// }
// int main(){
//     int n = 101;
//     alternate(n);
//     return 0;
// }




// int fun (int n){
//     if(n > 0){
//         return fun(n - 1) + n;
//     }
//     return 0;
// }
// int main(){
//     int r ;
//     r = fun(5);
//     printf("%d",r);
//     return 0;
// }


// int fun (int n){
//     static int x = 0;
//     if(n > 0){
//         x++;
//         return fun(n - 1) + x;
//     }
//     return 0;
// }
// int main(){
//     int r ;
//     r = fun(5);
//     printf("%d",r);
//     return 0;
// }


int x = 0;
int fun (int n){
    if(n > 0){
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main(){
    int r ;
    r = fun(5);
    printf("%d",r);
    return 0;
}


// #include <iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
    
//     return 0;
// }