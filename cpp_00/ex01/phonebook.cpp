#include "phonebook.hpp"

int main()
{
	int			added_cont;
	int			flag_exit;
	std::string	command_in;
	Contact		contacts[8];

	added_cont = 0;
	flag_exit = 0;
	while (flag_exit == 0)
	{
		std::cout << "Please enter ADD, SEARCH, or EXIT command:" << std::endl;
		std::getline(std::cin, command_in);
		if (command_in == "ADD")
		{
			if (added_cont >= 8)
				std::cout << "You've reached a maximum of 8 contacts in the phonebook, ADD is unavailable" << std::endl;
			else
			{
				add_contact(&contacts[added_cont]);
				added_cont++;
			}

		}
		else if (command_in == "SEARCH")
			show_contact(contacts, added_cont);
		else if (command_in == "EXIT")
			flag_exit = 1;
		else
			std::cout << "Error: please enter right command" << std::endl;
	}
	return (0);
}
