/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1022.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-14					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Fib ( long long int k );

int main (){

	long long int k;
	
	scanf ( "%lld", &k );
	
	int num;

	num = Fib ( k );
	
	printf ( "%d\n", num % 2010 );
	
	return 0;
	
}

int Fib ( long long int k ){

	if ( k == 1 || k == 2 ){
	
		return 1;
	
	}

	if ( k <= 0 ){
	
	return 0;
	
	}
	
	int mat[4] = { 1, 1, 1, 0 };//Fib mat
	int now[4] = { 1, 1, 0, 0 };//identical mat
	int tmp[4];

	long long int i;

	k -= 2;

	while ( k ){
	
		if ( k & 1 ){
		
			tmp[0] = ( now[0] * mat[0] + now[1] * mat[2] ) % 2010;
			tmp[1] = ( now[0] * mat[1] + now[1] * mat[3] ) % 2010;
			tmp[2] = ( now[2] * mat[0] + now[3] * mat[2] ) % 2010;
			tmp[3] = ( now[2] * mat[1] + now[3] * mat[3] ) % 2010;

			now[0] = tmp[0];
			now[1] = tmp[1];
			now[2] = tmp[2];
			now[3] = tmp[3];

		}

		tmp[0] = ( mat[0] * mat[0] + mat[1] * mat[2] ) % 2010;
		tmp[1] = ( mat[0] * mat[1] + mat[1] * mat[3] ) % 2010;
		tmp[2] = ( mat[2] * mat[0] + mat[3] * mat[2] ) % 2010;
		tmp[3] = ( mat[2] * mat[1] + mat[3] * mat[3] ) % 2010;
	
		mat[0] = tmp[0];
		mat[1] = tmp[1];
		mat[2] = tmp[2];
		mat[3] = tmp[3];

		k = k >> 1;

	}

	return now[0];

}

/*not fast enough
int Fib( long long int k ){

	if ( k == 1 || k == 2 ){
	
		return 1;
	
	}

	if ( k <= 0 ){
	
	return 0;
	
	}

	int pp;	//pre pre num
	int p;	//pre num
	int res;

	long long int i;

	pp = 1;
	p = 1;

	for ( i = 3; i <= k; i ++ ){
	
		res = ( pp + p ) % 2010;
		pp = p;
		p = res;
	
	}

	return res;

}
*/