/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1034.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-22					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int v[200000 + 200000 + 1];

int findmax ( int s, int e );

int main (){

	int n;
	int k;
	int i;
	
	scanf ( "%d%d", &n, &k );

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &v[i] );
	
	}

	for ( i = 1; i <= k; i ++ ){
	
		v[n + i] = v[i];
	
	}

	int s;
	int e;

	s = 1;
	e = k;

	int min;
	int now;

	min = findmax ( s, e );
	now = min;

	s ++;
	e ++;

	while ( s <= n ){//n - 1 sub-sequence
	
		if ( v[s - 1] == now ){
		
			now = findmax ( s, e );
		
		}
		
		if ( v[e] > now ){
		
			now = v[e];

		}

		if ( now < min ){
		
			min = now;
		
		}

		s ++;
		e ++;

	}

	printf ( "%d\n", min );

	return 0;

}

int findmax ( int s, int e ){

	int max = -1;
	int i;
	
	for ( i = s; i <= e; i ++ ){
	
		if ( v[i] > max ){
		
			max = v[i];
		
		}
	
	}

	return max;

}

/*understand the wrong meaning... 
int main (){

	int n;
	int k;
	int i;
	
	scanf ( "%d%d", &n, &k );

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &v[i] );
	
	}

	int min_s;
	int min_e;
	int s;
	int e;

	min_s = 1;
	min_e = k;
	s = 1;
	e = k;

	long long int min;
	long long int now;

	min = 0;

	for ( i = s; i <= e; i ++ ){
	
		min += v[i];
	
	}

	now = min;

	s ++;
	e ++;
	if ( s > n ){
		
		s %= n;
		
	}
	if ( e > n ){
		
		e %= n;
		
	}

	for ( i = 1; i <= n - 1; i ++ ){//n - 1 sub-sequence
	
		now -= v[s - 1];
		now += v[e];

		if ( now < min ){
		
			min_s = s;
			min_e = e;

			min = now;
		
		}
	
		s ++;
		e ++;
		if ( s > n ){
		
			s %= n;
		
		}
		if ( e > n ){
		
			e %= n;
		
		}

	}

	int max;

	max = v[min_s];
	i = min_s;

	while ( 1 ){
	
		if ( v[i] > max ){
		
			max = v[i];
		
		}

		if ( i == min_e ){
		
			break;
		
		}

		i ++;

		if ( i > n ){
		
			i %= n;
		
		}
	
	}

	printf ( "%d\n", max );

	return 0;

}
*/