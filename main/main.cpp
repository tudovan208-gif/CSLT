#include <iostream>
#include <cmath>
#include <string>
#include <print>
#include <format>

#include "utils.h"
#include "main.h"

int main (){
    const int MAX = 100;
    double scores[MAX];
    int n = 0;

    input("Nhập vào mảng điểm của các sinh viên", scores, n);
    double min = findmin(scores , n);
    std::println("Điểm nhỏ nhất là: {}", min);

    double max = findmax(scores, n);
    std::println("Điểm lớn nhất là: {}", max);

    min_index(scores , n);

    display("Mảng của bạn vừa nhập là: ", scores, n);
    reverse(scores , n);
    display("Mảng của bạn sau khi đảo ngược là: ", scores, n);
    
    return 0;
}
