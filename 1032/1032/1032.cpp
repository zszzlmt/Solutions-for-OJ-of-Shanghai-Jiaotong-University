/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1032.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int ackerman ( int m, int n );

int main (){

	int m;
	int n;

	scanf ( "%d%d", &m, &n );

	int res;

	res = ackerman ( m, n );

	printf ( "%d\n", res );

	return 0;

}

int ackerman ( int m, int n ){

	if ( m == 0 ){
	
		return n + 1;
	
	}
	else if ( n == 0 ){
	
		return ackerman ( m - 1, 1 );
	
	}
	else {
	
		return ackerman ( m - 1, ackerman ( m, n - 1 ) );
	
	}

}