/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1238.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (){

	int a;
	int b;
	int c;
	int t;

	scanf ( "%d%d%d", &a, &b, &c );

	printf ( "%d\n", a > ( t = b > c ? b : c )? a : t );

	return 0;

}