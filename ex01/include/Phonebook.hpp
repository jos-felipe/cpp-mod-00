/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:17:44 by josfelip          #+#    #+#             */
/*   Updated: 2024/09/16 15:23:21 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

const int MAX_CONTACTS = 8;

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACTS];
	int contactCount;
	int currentIndex;

public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
};

#endif
