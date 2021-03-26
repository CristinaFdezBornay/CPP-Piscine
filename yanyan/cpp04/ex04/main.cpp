/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:45:28 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:45:53 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "Asteroid.hpp"
#include "Comet.hpp"
#include "MiningBarge.hpp"

int
main(void)
{
	MiningBarge* barge = new MiningBarge();

	IMiningLaser* deep = new DeepCoreMiner();
	IMiningLaser* strip = new StripMiner();

	barge->equip(deep);
	barge->equip(strip);

	IAsteroid* ast = new Asteroid();
	IAsteroid* com = new Comet();

	barge->mine(ast);
	barge->mine(com);

	delete ast;
	delete com;
	delete deep;
	delete strip;
	delete barge;

	return 0;
}
