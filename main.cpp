#include <iostream>
#include <cmath>

int factorial(int n); // Khai báo function

int main (){
    std::cout << "Đây là chương trình tính tổng của 2 giai thừa a,b\n";
    int a,b;
    std::cout << "Nhập vào số a= ";
    std::cin >> a;

    std::cout << "Nhập vào số b= ";
    std::cin >> b;

    int sum;
    sum = factorial(a) + factorial(b);
    std::cout << "S = " << a << "! + " << b << "! = " << sum; 

    return 0;
}

int factorial(int n){
    int product = 1;

    for (int i = 1; i <= n; i++){
        product *= i;
    }

    return product;
}