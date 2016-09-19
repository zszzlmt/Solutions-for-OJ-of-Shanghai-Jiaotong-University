/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1024.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int t[10000 + 1] = {};

int comp ( const void * a, const void * b );

int main (){

	int n;
	int i;

	scanf ( "%d", &n );

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &t[i] );
	
	}

	qsort( t + 1, n, sizeof( int ), comp );

	for ( i = 1; i <= n; i ++ ){
	
		printf ( "%d", t[i] );
		
		if ( i != n ){
		
			printf ( " " );

		}
	
	}

	printf ( "\n" );

	return 0;

}

int comp ( const void * a, const void * b ){
	return * ( int * ) a - * ( int * ) b;
}