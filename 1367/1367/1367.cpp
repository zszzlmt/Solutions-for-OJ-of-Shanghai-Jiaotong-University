/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1367.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a[30000 + 1] = {};
int b[30000 + 1] = {};

int main ( ){

	int n;
	int m;

	scanf ( "%d%d", &n, &m );

	int i;

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &a[i] );
	
	}

	for ( i = 1; i <= m; i ++ ){
	
		scanf ( "%d", &b[i] );
	
	}

	int j;
	int max = 0;
	int xor;
	int or;
	int andnot;

	for ( i = 1; i <= n; i ++ ){
	
		for ( j = 1; j <= m; j ++ ){
		
			xor = a[i] ^ b[j];

			if ( xor > max ){
			
				max = xor;

			}
		
		}
	
	}

	printf ( "%d\n", max );

	return 0;

}