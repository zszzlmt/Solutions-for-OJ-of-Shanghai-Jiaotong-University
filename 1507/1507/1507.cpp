/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1507.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-29					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int a[10000 + 1] = {};
int b[10000 + 1] = {};

int comp ( const void * a, const void * b );

int main ( ){

	int n;
	int i;

	scanf ( "%d", &n );

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &a[i] );
	
	}

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &b[i] );
	
	}

	qsort ( a + 1, n, sizeof ( int ), comp );
	qsort ( b + 1, n, sizeof ( int ), comp );

	int sum = 0;

	for ( i = 1; i <= n; i ++ ){
	
		if ( a[i] > b[n + 1 - i] ){
		
			sum += a[i] - b[n + 1 - i];
		
		}
		else {
		
			sum += b[n + 1 - i] - a[i];
		
		}
	}

	printf ( "%d", sum );

	return 0;

} 

int comp ( const void * a, const void * b ){

	return * ( int * ) a - * ( int * ) b;

}