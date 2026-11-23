
#include <iostream>
#include <cmath>
#include <print>
#include <string>

int factorial(int n){
    int product = 1;

    for (int i = 1; i <= n; i++){
        product *= i;
    }

    return product;
}
int getint(std::string instruction){
    int number;
    std::cout << instruction;
    std::cin >> number;

    return number;
}
int tonguocso(int n){
    int sum = 0;
    for(int i = 1; i <= n ; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}
int tichuocso(int n){
    int product=1;
    for (int i =1 ; i <= n; i++){
        if (n % i == 0){
            product *= i;
        }
    }
    return product;
}
int demuoc(int n){
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (n%i == 0){
            count++;
        }
    }
    return count;
}
void lietke(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0 && i % 2 != 0){
        std::print("{} ", i);
        }
    }
}
int tonguocsochan(int n){
    int sum = 0;
    for (int i=1; i <= n; i++){
        if ( n%i == 0 && i % 2 ==0){
            sum += i;
        }
    }
    return sum;
}
int tichuocsole(int n){
    int product=1;
    for (int i = 1; i <= n; i++){
        if (n%i == 0 && i % 2 != 0){
            product *= i;
        }
    }
    return product;
}
int demuocsochan(int n){
    int count = 0;
    for (int i = 1; i <= n ; i++){
        if (n%i==0 && i %2 == 0){
            count++;
        }
    }
    return count;
}
int tonguocsonhohonn(int n){
    int sum =0;
    for(int i = 1; i < n; i++){
        if (n%i == 0){
            sum+=i;
        }
    }
    return sum;
}
bool isPrime(int n){
    if (n < 2){
        return false;
    } else if ( n == 2){
        return true;
    } else {
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
    }
}
bool isPalindrome(int n){
    if (n < 0){
        return false;
    }
    int newnumber = 0;
    int temp = n;
    while (n > 0){
        int number = n % 10;
        newnumber = newnumber * 10 + number;
        n /= 10;
        if (newnumber - temp == 0){
            return true;
        }
    }
    return false;
}
double getdouble(std::string instruction){
    double number;
    std::print("{}", instruction);
    std::cin >> number;
    return number;
}
double ispow(double x,int n){
    if (n == 0){
        return 1.0;
    } else if (n < 0){
        return 1.0/ispow(x, -n);
    }
    return x*ispow( x, (n-1));
}
void input(std::string instruction, double a[], int& n){
    std::println("{}" ,instruction);

    std::print("Số lượng các phần tử cần nhập: ");
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::print("a[{}]: ", i);
        std::cin >> a[i];
    }
}
double findmin(double a[],int n){
    double min = a[0];
    for(int i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    return min;
}
double findmax(double a[], int n){
    double max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}
void min_index(double a[], int n){
    int min_index;
    double min = a[0];
    for(int i = 1; i < n; i++){
        if (a[i] < min){
            min = a[i];
            min_index = i;
        }
    }
    std::println("Giá trị nhỏ nhất của mảng nằm ở chỉ mục {}", min_index);
}

template <typename T>
void permute(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void reverse(double a[], int n){
        int mid = n / 2;
    for(int i = 0; i < mid ; i++){
        permute<>(a[i], a[n - 1 - i]);  
    }
}
void display(std::string instruction, double a[], int n){
    std::print("{}", instruction);
    for(int i = 0; i < n; i++){
        std::print(" {}", a[i]);
        if (i != n - 1){
          std::print(",");  
        }
    }
    std::println("");
}
