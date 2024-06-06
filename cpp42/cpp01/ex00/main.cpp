/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymabsout <ymabsout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:28:32 by ymabsout          #+#    #+#             */
/*   Updated: 2024/06/06 10:25:34 by ymabsout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (){
    atexit(b);
    Zombie o("foo");
    o.announce();
    Zombie *i = newZombie("bar");
    Zombie *y = newZombie("oop");
    i->announce(); y->announce();
    randomChump("tmp");
    delete(i); delete(y);
}