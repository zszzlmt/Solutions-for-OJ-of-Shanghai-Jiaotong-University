/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1505.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-21					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){

	int c;

	scanf ( "%c", &c );

	char cc;

	cc = c + 3;

	if ( cc > 'z' ){
	
		 cc -= 'z';
		 cc += 'a' - 1;
	
	}

	printf ( "%c\n", cc );

	return 0;

}