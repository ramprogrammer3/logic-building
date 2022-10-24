#include <iostream>
using namespace std;
int main(){
    cout << "Hello world" << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n > 0){
        cout << " N is positive " << endl;
    }else{
        cout << " N is negative " << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    if(a > b){
        cout << "a is greater" << endl;
    }
    if(b > a){
        cout << "b is greater" << endl;
    }
    return 0;
}




#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter value of a " << endl;
    cin >> a;
    if(a > 0){
        cout << "A is positive " << endl;
    }else{
        if( a < 0){
            cout << " A negative " << endl;
        }else{
            cout << " A is zero"<< endl;
        }
    }
    return 0;
}




#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a > 0){
        cout << "POsitive" << endl;
    }else if(a < 0){
        cout << "Negative " << endl;
    }else{
        cout << "Zero " << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a = 9;
    if(a == 9){
        cout << "NINE" << endl;
    }
    if(a > 0){
        cout << "POSITIvE "  << endl;
    }else{
        cout << "NEGATive " << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = a + 1;
    if((a = 3)==b){
        cout << a << endl;
    }else{
        cout << a + 1 << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int a = 24;
    if(a > 20){
        cout << "Love ";
    }else if( a == 24){
        cout << "Ram" << endl;
    }else{
        cout << "kumar"<< endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int i = 1;
    while(i <= n ){
        cout << i << " " ;
        i++;
    }
    return 0;
}



#include <iostream> 
using namespace std;
int main(){
    int n, i = 1, sum = 0;
    cin >> n;
    while(i <= n){
        sum = sum + i;
        i = i + 1;
    }
    cout << "sum  = " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n , i = 0, sum = 0;
    cin>> n;
    while(i <= n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum  = " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n , i = 1, sum = 0;
    cin>> n;
    while(i <= n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "sum  = " << sum << endl;
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n,i = 2,chekPrime = true;
    cin >> n;
    if(n < 0){
        n = -n;
    }
    while(i < n){
        if( n % i == 0){
            chekPrime = false;
        }
        i = i + 1;
    }
    if(chekPrime){
        cout << "Number is prime" << endl;
    }else{
        cout << "Number is not prime" << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << " * ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}