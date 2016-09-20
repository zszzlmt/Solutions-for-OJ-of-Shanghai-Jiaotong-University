/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1247.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[10000 + 1] = {};

int main (){

	int n;
	int k;
	int m;

	int s;
	int e;
	int i;

	scanf ( "%d%d", &n, &m );

	int rem = n + 1;

	for ( k = 1; k <= m; k ++ ){
	
		scanf ( "%d%d", &s, &e );

		for ( i = s; i <= e; i ++ ){
		
			if ( t[i] == 0 ){
			
				rem --;
				t[i] = 1;
			
			}
		
		}
	
	}

	printf ( "%d\n", rem );

	return 0;

}