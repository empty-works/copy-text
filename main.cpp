#include <iostream>
#include <fstream>
#include <string>

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
	std::string line;
	int line_num{1};
	while(std::getline(in_file, line)) {
		if(line.find_first_not_of(' ') != std::string::npos) { // A non-space has been found.
			out_file << line_num << " " << line << std::endl;
			line_num++;
		}
	}		
	std::cout << "Copy complete." << std::endl;
	return 0;
}
