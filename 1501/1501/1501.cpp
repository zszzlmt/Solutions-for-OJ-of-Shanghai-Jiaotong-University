/*******************************************************************************
** Copyright (C), 	2016- , Zach Yeo.                                          *
** File name:		1501.cpp                                                   *
** Description:                                                                *
** Author:			Zhang Shize <zszv587@gmail.com>                            *
**-----------------------------------------------------------------------------*
** History:                                                                    *
** v1.0				2016-09-20					                               *
********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main (){

	double n;
	double per;

	double res;
	double real;

	cin >> n >> per;

	res = n * per;
	real = res * 0.9;

	cout << res << ' ' << real;

	

	return 0;

}