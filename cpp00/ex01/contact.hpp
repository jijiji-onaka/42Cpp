/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:23:06 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/10 20:27:34 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

	public:
		void		set_first_name();
		void		set_last_name();
		void		set_nickname();
		void		set_login();
		void		set_postal_address();
		void		set_email_address();
		void		set_phone_number();
		void		set_birthday_date();
		void		set_favorite_meal();
		void		set_underwear_color();
		void		set_darkest_secret();
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		void		display_selected_field();
};

#endif
