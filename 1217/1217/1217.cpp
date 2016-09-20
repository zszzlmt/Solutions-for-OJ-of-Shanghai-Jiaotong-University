/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1217.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[2500 + 1] = {};

int main (){

	int m;
	int n;
	int k;

	scanf ( "%d", &n );

	for ( k = 1; k <= n; k ++ ){
	
		scanf ( "%d", &t[k] );
	
	}

	scanf ( "%d", &m );

	int tmp;
	int i;
	int fin;

	for ( k = 1; k <= m; k ++ ){
	
		scanf ( "%d", &tmp );

		fin = 0;

		for ( i = 1; i <= n; i ++ ){
		
			if ( t[i] == tmp ){
			
				printf ( "Y\n" );
				fin = 1;
				break;

			}
		
		}

		if ( fin == 0 ){
		
			printf ( "N\n" );
		
		}
	
	}


	return 0;

}