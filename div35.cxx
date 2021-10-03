


#include <iostream>

int main(int argc, char **argv)
{
	
	int limit;
	int counter = 0;
	
	
	
	
	std::cout << "Please enter limit" << std::endl;
	std::cin >> limit;
	
	for(int i = 0; i <= limit; i++)
	{
		
		if(i % 3 == 0 || i % 5 == 0)
		{
			counter = counter + i;
			
		
			
		}
	}
	
	std::cout << counter << std::endl;
	return 0;
}

