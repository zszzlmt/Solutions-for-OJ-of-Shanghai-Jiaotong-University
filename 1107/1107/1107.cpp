/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1107.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){

	int m;
	int k;

	scanf ( "%d", &m );

	int n;

	for ( k = 1; k <= m; k ++ ){
	
		scanf ( "%d", &n );

		if ( n <= 0 ){
		
		printf ( "no\n" );
		continue;

		}
	
		printf ( "yes\n" );

	}

	return 0;

}