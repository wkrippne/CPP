/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrippner <wkrippne@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:42:51 by kupferstrah       #+#    #+#             */
/*   Updated: 2023/10/14 22:00:09 by wkrippner        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int			_index;

	std::string _printLen(std::string str) const;
	std::string _getInput(std::string str) const;

public:
	Contact();
	~Contact();
	void	init(void);
	void	view(int index) const;
	void	display(int index) const;
	void	setIndex(int i);

};

#endif // CONTACT_HPP