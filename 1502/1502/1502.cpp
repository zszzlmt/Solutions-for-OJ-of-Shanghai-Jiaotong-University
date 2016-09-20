/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1502.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){

	double a;
	double b;
	double c;
	double d;
	double res;
	int sum;

	scanf ( "%lf%lf%lf%lf", &a, &b, &c, &d );

	sum = a + b + c + d;

	res = (double)sum / 4;

	switch ( sum % 4 ){
		
	case 2:
		printf ( "%.1lf\n", res );
		break;
	case 1:
	case 3:
		printf ( "%.2lf\n", res );
		break;
	default:
		printf ( "%.0lf\n", res ); 	
		break;

	}

	

	return 0;

}