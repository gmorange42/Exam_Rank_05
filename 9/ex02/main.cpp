/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:35:12 by ncolomer          #+#    #+#             */
/*   Updated: 2022/05/30 08:58:08 by gmorange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	std::cout << "--- Constructors:\n";
	Warlock richard("Aang", "The Avatar");

	std::cout << "--- Spells:\n";
	Polymorph *water = new Polymorph();
	Fireball *fire = new Fireball();
	Fwoosh *air = new Fwoosh();
	richard.learnSpell(water);
	richard.learnSpell(fire);
	richard.forgetSpell("Fwoosh");
	richard.learnSpell(air);
	richard.forgetSpell("Fwoosh");
	richard.forgetSpell("Fwoosh");
	richard.learnSpell(air);
	richard.learnSpell(air);
	richard.forgetSpell("Fwoosh");

	std::cout << "--- Targets:\n";
	Dummy *hay = new Dummy();
	BrickWall *earth = new BrickWall();

	TargetGenerator tarGen;
	tarGen.learnTargetType(hay);
	tarGen.learnTargetType(earth);

	std::cout << "--- Spells (all):\n";

	richard.launchSpell("Fwoosh", *tarGen.createTarget("Target Practice Dummy"));
	richard.launchSpell("Fireball", *tarGen.createTarget("Inconspicuous Red-brick Wall"));
	richard.launchSpell("Polymorph", *tarGen.createTarget("Target Practice Dummy"));

	std::cout << "--- Forgotten \"Fwoosh\":\n";

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Target Practice Dummy"));
	richard.launchSpell("Fireball", *tarGen.createTarget("Inconspicuous Red-brick Wall"));
	richard.launchSpell("Polymorph", *tarGen.createTarget("Target Practice Dummy"));

	std::cout << "--- Spells (all):\n";

	richard.learnSpell(air);
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Target Practice Dummy"));
	richard.launchSpell("Fireball", *tarGen.createTarget("Inconspicuous Red-brick Wall"));
	richard.launchSpell("Polymorph", *tarGen.createTarget("Target Practice Dummy"));

	std::cout << "--- Non-existant spell:\n";

	richard.launchSpell("ACID", *tarGen.createTarget("Inconspicuous Red-brick Wall"));
	richard.forgetSpell("ACID");
	richard.launchSpell("ACID", *tarGen.createTarget("Target Practice Dummy"));

	std::cout << "--- Destructors:\n";
	return (0);
}
