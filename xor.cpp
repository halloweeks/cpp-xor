#include <iostream>
#include <string.h>

#define XOR 0x79

std::string xor_crypto(std::string str) {
	std::string output = str;
	for (int i = 0; i < str.size(); i++) {
		output[i] = str[i] ^ XOR;
	}
	return output;
}

int main(int argc, char** argv) {
	std::string data = "This is test content just ignore it goes against the saw the saw the saw the saw the saw the saw the";
	std::cout << xor_crypto(data) << "\n";
    return 0;
}