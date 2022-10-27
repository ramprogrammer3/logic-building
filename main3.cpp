#include <iostream>
using namespace std;
int main(){
    int a = 4, b = 6;
    cout << " a&b " <<( a & b )<< endl;
    cout << " a|b " <<( a | b )<< endl;
    cout << " ~a " <<( ~a )<< endl;
    cout << " a^b " <<( a^b )<< endl;

    cout << (17 >> 1) << endl;
    cout << (19 >> 2) << endl;

    cout << (5 << 1) << endl;
    cout << (3 << 2) << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int i  = 10;
    cout << ++i << endl;
    cout << i++ << endl;
    cout << i -- << endl;
    cout << -- i << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a , b = 1;
    a = 10;
    if(++a){
        cout << b << endl;
    }
    cout << ++b << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;
    if(a-- > 0 && ++b > 2){
        cout << "Stage1 - inside if " << endl;
    }else{
        cout << "Stage 2 - inside else ";
    }
    cout << a << " " << b << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int number = 3;
    cout << (25 * (++number));
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b ;
    cout << c;
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " " ;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i<=5; i++){
        cout << i << " ";
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i<= 15; i +=2){
        cout << i << " ";
        if(i&1){
            continue;
        }
        i++;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i<5; i++){
        for(int j = i; j<=5; j++){
            cout << i << " " << j << endl;
        }
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i<5; i++){
        for(int j = i; j<=5; j++){
            if(i+j == 10){
                break;
            }
            cout << " " << j << endl;
        }
    }
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int product = 1;
    int sum = 0;
    while(n!=0){
        int digit = n % 10;
        sum = sum  + digit;
        product = product * digit;
        n = n / 10;
    }
    cout << sum << endl;
    cout << product << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n , i, sum = 0;
    cin >> n;
    for(i = 1; i<= n; i++){
        sum = sum  + i;
    }
    cout << sum << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int n, a = 0, b = 1;
    cin >> n;
    cout << a << " ";
    cout << b << " ";
    for( int i = 1; i<=n; i++){
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}



#include <iostream>
using namespace std;
int main(){
    int n;
    bool prime = true;
    cin >> n;
    if(n < 0){
        n = -n;
    }
    for(int i = 2; i< n; i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }
    if(prime){
        cout << n << " is a prime number ";
    }else{
        cout << n << " is not a prime number ";
    }
    return 0;
}