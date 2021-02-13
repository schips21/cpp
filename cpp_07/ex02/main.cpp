#include "Array.hpp"

int main(){
	Array<int>intArray(10);
	Array<double>doubleArray(10);

	for (int count = 0; count < intArray.size(); ++count)
	{
		try{
			intArray[count] = count;
			doubleArray[count] = count + 0.5;
		}
		catch (const std::exception & ex){
			std::cout << "Invalid index" << std::endl;
		}
	}
	const Array<double>doubleArray_2(doubleArray);
	for (int count = intArray.size()-1; count >= 0; --count)
	{
		try{
			std::cout << intArray[count] << "\t" << doubleArray[count] << "\t" << doubleArray_2[count] << '\n';
		}
		catch (const std::exception & ex){
			std::cout << "Invalid index" << std::endl;
		}
	}
	return 0;
}