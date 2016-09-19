/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1013.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void exchange( int i, int j );

int vol[1000 + 1];//volum of types
int val[1000 + 1];//value of types
double per[1000 + 1];//value per type

int main (){

	int v;//total volum
	int n;//amount of different types

	scanf ( "%d%d", &v, &n );

	int i;
	int j;

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d%d", &vol[i], &val[i] );
		per[i] = ( double ) val[i] / ( double ) vol[i];
	
	}

	double max;
	int index;

	for ( i = 1; i <= n - 1; i ++ ){
		
		max = per[i];
		index = i;

		for ( j = i + 1; j <= n; j ++ ){
		
			if ( per[j] > max ){
			
				max = per[j];
				index = j;
			
			}
		
		}

		exchange( i, index );
	
	}

	int rem = v;
	int biggest_now = 1;
	int total_value = 0;

	while ( rem > 0 ){
	
		if ( rem < vol[biggest_now] ){
		
			break;
		
		}
		else {
		
			total_value += ( rem / vol[biggest_now] ) * val[biggest_now];
			rem = rem % vol[biggest_now];
			biggest_now ++;
		
		}
	
	}

	printf ( "%d\n", total_value );

	return 0;

}

void exchange( int i, int j ){

	int int_t;
	double double_t;

	int_t = vol[i];
	vol[i] = vol[j];
	vol[j] = int_t;

	int_t = val[i];
	val[i] = val[j];
	val[j] = int_t;

	double_t = per[i];
	per[i] = per[j];
	per[j] = double_t;

}