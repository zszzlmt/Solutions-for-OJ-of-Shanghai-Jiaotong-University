/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1002.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-02					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

/*	fail
#include<stdio.h>

short t[1001][1001];

int main(){

	int l;
	int w;
	int a;
	int b;

	scanf ( "%d%d", &l, &w );

	int j;
	int k;

	int js;
	int ks;

	int m;
	int n;

	int max = 0;
	int now = 0;

	for ( j = 1; j <= l; j ++ ){
	
		for( k = 1; k <= w; k ++ ){
		
			scanf ( "%d", &( t[j][k] ) );

		}
	}

	scanf ( "%d%d", &a, &b );

	for ( j = a, js = 1; j <= l; j ++, js ++ ){
	
		for ( k = b, ks = 1; k <= w; k ++, ks++ ){
			
			now = 0;

			for ( m = js; m <= j; m ++ ){
			
				for ( n = ks; n <= k; n ++ ){
				
					now += t[m][n];
				
				
				}
			
			
			}

			if( now > max ){
			
				max = now;
			
			}


		}

	}

	printf ( "%d\n", max );

	return 0;

}
*/

#include<stdio.h>

int t[1001][1001] = {};
int sum[1001][1001] = {};
int colum[1001][1001] = {};

int main(){

	int l;
	int w;

	scanf ( "%d%d", &l, &w );

	int j;
	int k;

	for ( j = 1; j <= l; j ++ ){
	
		for ( k = 1; k <= w; k ++ ){
		
			scanf ( "%d", &( t[j][k]) );

			colum[j][k] = colum[j - 1][k] + t[j][k];

			sum[j][k] = sum[j][k - 1] + colum[j][k];

		}
	
	}

	int a;
	int b;
	int max = 0;
	int now = 0;

	scanf ( "%d%d", &a, &b );

	for ( j = a; j <= l; j ++ ){
	
		for ( k = b; k <= w; k ++ ){
		
			now = 0;

			now = sum[j][k] - sum[j - a][k] - sum[j][k - b] + sum[j - a][k - b];

			if ( now > max ){
			
				max = now;
			
			}
		
		}

	}

	printf ( "%d\n", max );

	return 0;

}