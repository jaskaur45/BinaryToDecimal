// Purpose of this program:
// BinaryToDecimal.cpp : Convert binary bits to unsigned long integer .

#include "stdafx.h"
#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> bits("1111");
	std::cout << "Decimal Interpretion of " << bits << " is:" << bits.to_ulong() << std::endl;

	// other way of doing
	//std::string binary_bits = "1111";
	//std::bitset<4> bits(binary_bits);
	//std::cout << "Decimal Interpretion of " << bits << " is:" << bits.to_ulong() << std::endl;

    int pause;
	std::cin >> pause;
    return 0;
}

