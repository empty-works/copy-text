#include <iostream>
#include <fstream>

int main() {
	std::ifstream in_file{"romeojuliet.txt"};
	std::ofstream out_file{"romeojuliet_out.txt"};
	if(!in_file) {
		std::cerr << "Error loading in file." << std::endl;
		return 1;
	}
	if(!out_file) {
		std::cerr << "Error loading out file." << std::endl;
		return 1;
	}
			
	return 0;
}
