/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:35:47 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/01 15:51:19 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class contact {
	private:
		std::string secret;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
	public:
		int		index;
		void set_firstname(std::string);
		void set_secname(std::string);
		void set_nick(std::string);
		void set_number(std::string);
		void set_secret(std::string);
		std::string	get_firstname() const;
		std::string	get_last_name()const;
		std::string	get_nickname()const;
		std::string get_number()const;
		std::string get_secret()const;
};

class phonebook{
	public:
	contact p[7];
};


#endif