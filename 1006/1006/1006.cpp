/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1006.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-05					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int t[1000000 + 1];

int main(){

	int n;
	int now = 0;
	long long int max = 0;
	long long int sum = 0;
	long long int tem = 0;

	int i;
	int first_time = 0;
	int POSITIVE = 1;

	int zeroflag = 0;

	scanf ( "%d", &n );

	for ( i = 1; i <= n; i ++ ){
	
		scanf ( "%d", &now );
		t[i] = now;

		/*用于判断是否是连续数列，若tem=0,则在前一个数不为0的情况下，这是一个单数最大，不计到max
		  至于0的情况，通过存储所有输入数据，并在最后循环一遍判断所有单个正数（前后为0或负数）的
		  左右最大情况*/
		tem = sum;

		sum += now;

		if ( sum < 0 ){
		
			sum = 0;

		}
		
		if ( sum > max && tem != 0 ){
		
			max = sum;
		
		}

	}

	int j;
	j = 1;

	for ( j = 2; j <= n - 1; j ++ ){
		
		if ( t[j] > 0 && t[j - 1] <= 0 && t[j + 1] <= 0 ){
			
			if ( t[j - 1] < t[j + 1] ){
				
				if ( t[j] + t[j + 1] > max ){
				
					max = t[j] + t[j + 1];
				
				}
				
			}

			else {
			
				if ( t[j] + t[j - 1] > max ){
				
					max = t[j] + t[j - 1];
				
				}

			}
			
		}
		
	}

	if ( t[1] + t[2] > max ){
	
		max = t[1] + t[2];

	}
	if ( t[n - 1] + t[n] > max ){
	
		max = t[n] + t[n - 1];
	
	}


	if ( max == 0 ){
	
		printf ( "Game Over\n" );
	
	}
	else {
	
		printf ( "%d\n", max );
	
	}


	return 0;
	
}
