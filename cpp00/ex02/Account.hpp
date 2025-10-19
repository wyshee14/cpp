// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	// Static member function belongs to class
	// Can be called without creating instance
	// Can access static member function
	// Cannot access non static member
	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	// Public Constructor
	// Can create object outside of the class (ex: in main)
	Account( int initial_deposit );
	// Public Destructor
	~Account( void );

	// Non static function - access by an object
	// Can access both static and nonstatic members

	// Setter
	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	// Getter
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	// Static member variable
	// Shared by all objects by the class
	// Update the info if something changes
	// Not tied to any objects so have to declare outside the class as global variable
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	// Static member function
	static void	_displayTimestamp( void );

	// Non static member variable
	// Belongs to individual objects
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	// Private Constructor
	// Avoid any creation object outside the class
	// this is not allow Account a() - without parameter
	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
