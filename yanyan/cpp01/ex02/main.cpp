/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 00:23:04 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/08 01:54:51 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <time.h>

int		main(void)
{
	Account	acc0(42);
	Account	acc1(54);
	Account	acc2(957);
	Account	acc3(432);
	Account	acc4(1234);
	Account	acc5(0);
	Account	acc6(754);
	Account	acc7(16576);

	Account::displayAccountsInfos();

	acc0.displayStatus();
	acc1.displayStatus();
	acc2.displayStatus();
	acc3.displayStatus();
	acc4.displayStatus();
	acc5.displayStatus();
	acc6.displayStatus();
	acc7.displayStatus();

	acc0.makeDeposit(5);
	acc1.makeDeposit(765);
	acc2.makeDeposit(564);
	acc3.makeDeposit(2);
	acc4.makeDeposit(87);
	acc5.makeDeposit(23);
	acc6.makeDeposit(9);
	acc7.makeDeposit(20);

	Account::displayAccountsInfos();

	acc0.displayStatus();
	acc1.displayStatus();
	acc2.displayStatus();
	acc3.displayStatus();
	acc4.displayStatus();
	acc5.displayStatus();
	acc6.displayStatus();
	acc7.displayStatus();

	acc0.makeWithdrawal(48);
	acc1.makeWithdrawal(34);
	acc2.makeWithdrawal(657);
	acc3.makeWithdrawal(4);
	acc4.makeWithdrawal(76);
	acc5.makeWithdrawal(24);
	acc6.makeWithdrawal(657);
	acc7.makeWithdrawal(7654);

	Account::displayAccountsInfos();

	acc0.displayStatus();
	acc1.displayStatus();
	acc2.displayStatus();
	acc3.displayStatus();
	acc4.displayStatus();
	acc5.displayStatus();
	acc6.displayStatus();
	acc7.displayStatus();
}
