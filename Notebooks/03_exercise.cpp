// Your First C++ Program

#include <iostream>
#include <cstdlib>

void update(int* pa, int* pb)
{
    int a_temp = *pa + *pb; // a_temp = a + b
    int b_temp;
    if(*pa > *pb) { b_temp = *pa - *pb;}        // if (a > b ) b_temp = a - b
    else {b_temp = *pb - *pa;}     // if (b > a) b_temp = b - a
    
    *pa = a_temp;  // a = a_temp
    *pb = b_temp;  // b = b_temp
    
}



int main() {
    int a, b;
    std::cin >> a;  // scanf("%d", &a)
    std::cin >> b;
    std::cout << "a = " << a << " b = " << b << "\n";
    int* pa = &a;
    int* pb = &b;
    update(pa, pb);
    std::cout << "a = " << a << " b = " << b << "\n";
    printf("Address of x is %p\n", pa); 
    //std::cout << "pointer a " << pa;
    
    return 0;
}