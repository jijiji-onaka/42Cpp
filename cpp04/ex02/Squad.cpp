/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 04:35:46 by tjinichi          #+#    #+#             */
/*   Updated: 2021/06/29 06:52:06 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : unitList_(NULL), unitsNum_(0)
{
}

Squad::~Squad(void)
{
	while (this->unitList_)
	{
		t_ISpaceMarine	*tmp = this->unitList_;
		this->unitList_ = this->unitList_->next;
		delete tmp->unit;
		delete tmp;
	}
}

Squad::Squad(const Squad &other)
{
	this->unitList_ = NULL;
	this->unitsNum_ = 0;
	int	other_unitsNum = other.getCount();
	for (int i = 0; i < other_unitsNum; i++)
	{
		this->push(other.getUnit(i)->clone());
	}
}

Squad &Squad::operator=(Squad const &other)
{
	if (this == &other)
		return (*this);
	while (this->unitList_)
	{
		t_ISpaceMarine	*tmp = this->unitList_;
		this->unitList_ = this->unitList_->next;
		delete tmp->unit;
		delete tmp;
	}

	this->unitList_ = NULL;
	this->unitsNum_ = 0;
	int	other_unitsNum = other.getCount();
	for (int i = 0; i < other_unitsNum; i++)
	{
		this->push(other.getUnit(i)->clone());
	}
	return (*this);
}

int	Squad::getCount(void) const
{
	return (this->unitsNum_);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	++N;
	if (N <= 0 || this->unitsNum_ < N)
		return (NULL);
	t_ISpaceMarine	*list = this->unitList_;
	for (int i = 1; i < N; ++i)
	{
		list = list->next;
	}
	return (list->unit);
}

int	Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return (false);
	++this->unitsNum_;
	if (this->unitList_ == NULL)
	{
		this->unitList_ = MakeListNew(unit);
		return (true);
	}
	t_ISpaceMarine	*begin = this->unitList_;
	while (this->unitList_)
	{
		if (this->unitList_->unit == unit)
			return (false);
		this->unitList_ = this->unitList_->next;
	}
	this->unitList_ = begin;

	while (this->unitList_->next)
		this->unitList_ = this->unitList_->next;
	this->unitList_->next = MakeListNew(unit);
	this->unitList_ = begin;
	return (true);
}

t_ISpaceMarine	*Squad::MakeListNew(ISpaceMarine *unit) const
{
	t_ISpaceMarine	*res;

	try
	{
		res = new t_ISpaceMarine;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::exit(EXIT_FAILURE);
	}
	res->unit = unit;
	res->next = NULL;
	return (res);
}
