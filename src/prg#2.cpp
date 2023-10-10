#include <stdio.h>

int main() {
    double Celsius, Fahrenheit; //double를 이용하여 실수값 저장 변수 선언

    Celsius = 60.0; //섭씨 온도 값

    Fahrenheit = (Celsius * 9.0 / 5.0) + 32; 
    printf("화씨 온도 %f도는 섭씨 온도 %f 입니다.\n", Celsius, Fahrenheit);

    Celsius = (Fahrenheit - 32) * (5.0 / 9.0);
    printf("섭씨 온도 %f도는 화씨 온도 %f 입니다.\n", Fahrenheit, Celsius);

    return 0;
}