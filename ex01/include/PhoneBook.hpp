/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:17:44 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/18 14:29:17 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

const int MAX_CONTACTS = 8;

class	PhoneBook {

public:
	PhoneBook(int num);
	~PhoneBook(void);
	
	bool	addContact();
	void	searchContact(void) const;
	
private:
	Contact	_contacts[MAX_CONTACTS];
	int		_index;

	std::string	_getInputData(std::string field) const;
	void		_displayContactList(void) const;
	std::string	_truncateData(std::string data) const;
};

#endif
