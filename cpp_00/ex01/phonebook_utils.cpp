#include "phonebook.hpp"

std::string	short_output(std::string str)
{
	std::string res;

	if (str.length() > 10)
	{
		res = str.substr(0, 9);
		res.append(".", 1);
		return (res);
	}
	else
		return (str);
}

void		show_one_contact(Contact contact)
{
	std::cout << "First name: " <<  contact.get_first_name() << std::endl;
	std::cout << "Last name: " <<  contact.get_last_name() << std::endl;
	std::cout << "Nickname: " <<  contact.get_nickname() << std::endl;
	std::cout << "Login: " <<  contact.get_login() << std::endl;
	std::cout << "Postal address: " <<  contact.get_postal_address() << std::endl;
	std::cout << "Email address: " <<  contact.get_email_address() << std::endl;
	std::cout << "Phone number: " <<  contact.get_phone_number() << std::endl;
	std::cout << "Birthday date: " <<  contact.get_birthday_date() << std::endl;
	std::cout << "Favorite meal: " <<  contact.get_favorite_meal() << std::endl;
	std::cout << "Underwear color: " <<  contact.get_underwear_color() << std::endl;
	std::cout << "Darkest secret: " <<  contact.get_darkest_secret() << std::endl;
}


void		show_contact(Contact *contacts, int added_cont)
{
	int i;
	std::string ind;

	i = 0;
	if (added_cont == 0)
		std::cout << "There are no contacts yet" << std::endl;
	else
	{
		while (i < added_cont)
		{
			std::cout
			<< std::setiosflags(std::ios::right)
			<< std::setw(10) << i + 1 << '|'
			<< std::setw(10) << short_output(contacts[i].get_first_name()) << '|'
			<< std::setw(10) << short_output(contacts[i].get_last_name()) << '|'
			<< std::setw(10) << short_output(contacts[i].get_nickname())
			<< std::endl;
			i++;
		}
		std::cout << "Please enter index for desired contact:" << std::endl;
		std::getline(std::cin, ind);
		if (ind.length() > 1 || !((ind[0] - '0') >= 1 && (ind[0] - '0') <= added_cont))
			std::cout << "Invalid index" << std::endl;
		else
			show_one_contact(contacts[(ind[0] - '0') - 1]);
	}

}

std::string	read_and_add(std::string cont_prompt)
{
	std::string	cont_info;

	std::cout << cont_prompt;
	std::getline(std::cin, cont_info);
	return (cont_info);
}

void	add_contact(Contact *contact)
{
	std::cout << "Please enter the following info:" << std::endl;
	contact->set_first_name(read_and_add("First name: "));
	contact->set_last_name(read_and_add("Last name: "));
	contact->set_nickname(read_and_add("Nickname: "));
	contact->set_login(read_and_add("Login: "));
	contact->set_postal_address(read_and_add("Postal address: "));
	contact->set_email_address(read_and_add("Email address: "));
	contact->set_phone_number(read_and_add("Phone number: "));
	contact->set_birthday_date(read_and_add("Birthday date: "));
	contact->set_favorite_meal(read_and_add("Favorite meal: "));
	contact->set_underwear_color(read_and_add("Underwear color: "));
	contact->set_darkest_secret(read_and_add("Darkest secret: "));
}