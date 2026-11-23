#pragma one //Tránh lỗi thư viện bị gọi nhiều lần

#include <string>

/// <sumary>
/// Tính giai thừa của 1 số
/// </sumary>
/// <pragma name"n" >SỐ Nguyên cần tính giai thừa</pragma>
/// <return> Giai thua </return>
int factorial(int n); // Khai báo function


/// <sumary>
/// Nhập vào số nguyên
/// </sumary>
/// <pragma name"instruction" >Hướng dẫn nhập liệu</pragma>
/// <return> số nguyên </return>
int getint(std::string instruction ); // function hàm nhập số nguyên
// tính tổng các ước số nguyên dương .
int tonguocso(int n);
//tính tích các ước số nguyên dương.
int tichuocso(int n);
//đếm các ước nguyên dương .
int demuoc(int n);
//liệt kê các ước nguyên dương.
int lietke(int n);
//tính tổng các ước số chẵn của số nguyên n
int tonguocsochan(int n);
//tích các ước số lẻ của số nguyên n
int tichuocsole(int n);
// Đếm ước số chẵn của số nguyên n
int demuocsochan(int n);
//tổng các ước số nhỏ hơn số nguyên n
int tonguocsonhohonn(int n);
// kiểm tra số nguyên tố
bool isPrime(int n);
// kiểm tra số đối xứng
bool isPalindrome(int n);
// Nhập vào số thực 
double getdouble(std::string instruction);
// tính x^n bằng đệ quy
double ispow(double x,int n);
// Nhập muốn nhập vào mảng các số: 
void input(std::string , double a[], int& n);
// tìm giá trị nhỏ nhất trong mảng
double findmin(double a[],int n);
// tìm giá trị lớn nhất trong mảng
double findmax(double a[],int n);
// tìm vị trí chỉ mục của giá trị nhỏ nhất trong mảng;
void min_index(double a[], int n);
// đảo ngược các giá trị có trong mảng
void reverse(double a[],int n);
// đổi giá trị của 2 biến
template <typename T>
void permute(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void display(std::string instruction, double a[], int n);
