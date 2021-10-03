


#include <iostream>

int main(int argc, char **argv)
{
	int one;
	//int two;
	int counter;
	
	std::cout << "Please enter number" << std::endl;
	
	std::cin >> one;
	//std::cin >> two;
	
	for(int i = one-1; i >= 0; i--)
	{
	//	std::cout << i;
		
		if(one % i == 0)
		{
			counter = i;
		}
		
			
	}
	
	std::cout << counter << std::endl;
	
	
	return 0;
}

