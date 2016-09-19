/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1005.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-03					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(){

	int t[9 + 1][9 + 1] = {0};
	/*like a bucket sort to check whether it is unique 1~9 or not*/
	int check[9 + 1] = {0};

	int n;

	scanf ( "%d", &n );

	int i;
	int j;

	int turn;

	for ( turn = 1; turn <= n; turn ++ ){

	int flag = 0;

	for ( i = 1; i <= 9; i ++ ){
	
		check[i] = 0;
	
	}

	/*check the row when input*/
	for ( i = 1; i <= 9; i ++ ){
	
		for ( j = 1; j <= 9; j ++ ){
		
			scanf ( "%d", &( t[i][j]) );

			if ( ( t[i][j] > 9 ) || ( t[i][j] < 1 ) ){
			
				//goto fail;
				flag = 1;
			
			}

			if ( ( ++ ( check[ t[i][j] ] ) ) != i ){
			
				//goto fail;
				flag = 1;
			
			}
		
		}
	
	}

	/*use flag not goto, just for input all data of a case, not interrupted*/
	if ( flag == 1 ){
	
		goto fail;
	
	}

	/*check the col*/
	for ( i = 1; i <= 9; i ++ ){
	
		for ( j = 1; j <= 9; j ++ ){
		
			if ( ( -- ( check[ t[j][i] ] ) ) != 9 - i ){
			
				goto fail;
			
			}	
		
		}
	
	}

	int k;
	int p;

	int cnt = 0;

	/*check nine 3*3 blocks*/
	for ( k = 1; k <= 7; k += 3 ){
	
		for ( p = 1; p <= 7; p += 3 ){
		
			cnt ++;

			for ( i = k; i <= k + 2; i ++ ){
			
				for ( j = p; j <= p + 2; j ++ ){
				
					if ( ( ++ ( check[ t[i][j] ] ) ) != cnt ){
					
						goto fail;
					
					}
				
				}
			
			}
		
		}
	
	}

	printf ( "Right\n" );

	getchar();

	continue;

	fail:

	printf ( "Wrong\n" );

	getchar();

	}

	return 0;

}