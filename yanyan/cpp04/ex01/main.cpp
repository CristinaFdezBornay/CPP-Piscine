/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:58:37 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:49:28 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

class	InfinityStone : public AWeapon
{
	private:

	public:
		InfinityStone(std::string const & name = "Like Thanos", int apcost = 0, int damage = 50);
		InfinityStone(const InfinityStone& old);
		InfinityStone& operator=	(const InfinityStone& copy);
		~InfinityStone(void);

		virtual void	attack(void) const;
};

InfinityStone::InfinityStone(std::string const & name, int apcost, int damage)
{
	this->m_name = name;
	this->m_AP = apcost;
	this->m_damage = damage;
	this->m_attack = "* CRACK... disapear ! *";
}

InfinityStone::InfinityStone(const InfinityStone& old)
{
	this->m_name = old.getName();
	this->m_AP = old.getAPCost();
	this->m_damage = old.getDamage();
	this->m_attack = "* CRACK... disapear ! *";
}

InfinityStone&	InfinityStone::operator = (const InfinityStone& copy)
{
	this->m_name = copy.getName();
	this->m_AP = copy.getAPCost();
	this->m_damage = copy.getDamage();
	this->m_attack = "* CRACK... disapear ! *";
	return (*this);
}

InfinityStone::~InfinityStone(void)
{
}

void		InfinityStone::attack(void) const
{
	std::cout << this->m_attack << std::endl;
}


class	Thanos : public Enemy
{
	public:
	Thanos(int hp = 666, std::string const & type = "Thanos");
	Thanos(const Thanos& old);
	Thanos&	operator = (const Thanos& copy);
	~Thanos(void);
};

Thanos::Thanos(int hp, std::string const & type)
{
	this->m_HP = hp;
	this->m_type = type;
	this->m_born = "* Reach the stones *";
	this->m_die = "* Back to the past *";
	std::cout << this->m_born << std::endl;
}

Thanos::Thanos(const Thanos& old)
{
	this->m_HP = old.getHP();
	this->m_type = old.getType();
	this->m_born = "* Reach the stones *";
	this->m_die = "* Back to the past *";
	std::cout << this->m_born << std::endl;
}

Thanos&	Thanos::operator = (const Thanos& copy)
{
	this->m_type = copy.getType();
	this->m_HP = copy.getHP();
	this->m_born = "* Reach the stones *";
	this->m_die = "* Back to the past *";
	return (*this);
}

Thanos::~Thanos(void)
{
}




int main()
{
	Character* moi = new Character("moi");
	SuperMutant toto = SuperMutant();

	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	moi->equip(pr);
	std::cout << "HP: " << b->getHP() << std::endl;
	moi->attack(&toto);
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	std::cout << "HP: " << b->getHP() << std::endl;
	moi->attack(b);
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(&toto);
	std::cout << *moi;
	moi->attack(&toto);
	std::cout << *moi;
	moi->attack(&toto);
	std::cout << *moi;
	moi->attack(&toto);
	std::cout << *moi;

	Character* other = new Character("other");
	Thanos tonton;
	InfinityStone* inf = new InfinityStone();

	other->equip(inf);
	std::cout << *other;

	delete moi;
	delete b;
	delete pf;
	delete pr;
	delete other;
	delete inf;

	return 0;
}
