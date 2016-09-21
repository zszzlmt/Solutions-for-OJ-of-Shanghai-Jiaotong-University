/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1511.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-21					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main (){

	int n;

	cin >> n;

	int i;

	double res = 0;

	for ( i = 1; i <= n; i ++ ){
	
		if ( i % 2 != 0 ){
		
			res += ( double ) 4 / ( 2 * i - 1);
		
		}
		else {
		
			res -= ( double ) 4 / ( 2 * i - 1);
		
		}
	
	}

	cout << res;

	return 0;

}