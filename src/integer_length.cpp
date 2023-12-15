#include <iostream>
#include <limits.h>


int main() {

    // 최솟값 결과치
    char min_num1 = CHAR_MIN;
    short min_num2 = SHRT_MIN;
    int min_num3 = INT_MIN;
    long min_num4 = LONG_MIN;
    long long min_num5 = LLONG_MIN;
    

    std::cout << "------------ Min ------------" << std::endl;
    std::cout << "char: " << min_num1 << std::endl;
    std::cout << "short: " << min_num2 << std::endl;
    std::cout << "int: " << min_num3 << std::endl;
    std::cout << "long: " << min_num4 << std::endl;
    std::cout << "long long: " << min_num5 << std::endl;


    // 최댓값 결과치
    char max_num1 = CHAR_MAX;
    short max_num2 = SHRT_MAX;
    int max_num3 = INT_MAX;
    long max_num4 = LONG_MAX;
    long long max_num5 = LLONG_MAX;
    

    std::cout << "------------ Max ------------" << std::endl;
    std::cout << "char: " << max_num1 << std::endl;
    std::cout << "short: " << max_num2 << std::endl;
    std::cout << "int: " << max_num3 << std::endl;
    std::cout << "long: " << max_num4 << std::endl;
    std::cout << "long long: " << max_num5 << std::endl;


    return 0;
}