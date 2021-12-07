/* Diketahui sebuah segitiga siku-siku dengan panjang sisi alas 4 cm dan sisi tinggi 5 cm. Dengan menggunakan rumus Phitagoras, 
buatlah sebuah program Bahasa C untuk menghitung sisi miring segitiga tersebut dan menampilkannya di layar! */

#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

int main() {
	float a;
	float b;
	float c;
    
    std::cout << "Panjang Sisi Alas = 4 \n";
    a = 4;
    b = 5;

	std::cout << "Panjang Sisi Alas = 4 \n";
	std::cout << "Panjang Sisi Miring = 5 ";

	float a2 = pow(a, 2);
	float b2 = pow(b, 2);
	c = sqrt(a2 + b2);

	std::cout << "Jadi Panjang Sisi Miringnnya : " << c << std::endl;
}