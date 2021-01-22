#include <iostream>
#include <fstream>

int main(int argc, char **argv){
	int start;
	std::string str;
	int flag = 0;

	if (argc != 4 || strlen(argv[1]) == 0 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0){
		std::cout << "Error: arguments" << std::endl;
		return 1;
	}
	std::ifstream file_in(argv[1]);
	if (!file_in.is_open()){
		std::cout << "Error: can't open file" << std::endl;
		return 1;
	}
	std::ofstream file_out(std::string(argv[1]) + ".replace");
	if (!file_out.is_open()){
		std::cout << "Error: can't open file" << std::endl;
		file_in.close();
		return 1;
	}
	while (!file_in.eof())
	{
		getline(file_in, str);
		start = 0;
		while ((start = str.find(argv[2])) != std::string::npos &&
		std::string(argv[2]) != std::string(argv[3]))
		{
			str.replace(start, strlen(argv[2]), argv[3]);
		}
		if (flag == 1 )
			file_out << std::endl;
		file_out << str;
		flag = 1;
	}
	file_in.close();
	file_out.close();
	return 0;
}