/********************************************************************
	created:	2006/06/30
	filename: 	AbstractFactory.h
	author:		李创

	purpose:	AbstractFactory的演示代码
*********************************************************************/

// #include "stdafx.h"
#include <iostream>
#include "AbstractFactory.h"
#include <stdio.h>
#define TRACE printf

ConcreateProductA1::ConcreateProductA1()
{
	TRACE("construction of ConcreateProductA1\n");
}

ConcreateProductA1::~ConcreateProductA1()
{
	TRACE("destruction of ConcreateProductA1\n");
}

ConcreateProductA2::ConcreateProductA2()
{
	TRACE("construction of ConcreateProductA2\n");
}

ConcreateProductA2::~ConcreateProductA2()
{
	TRACE("destruction of ConcreateProductA2\n");
}

ConcreateProductB1::ConcreateProductB1()
{
	TRACE("construction of ConcreateProductB1\n");
}

ConcreateProductB1::~ConcreateProductB1()
{
	TRACE("destruction of ConcreateProductB1\n");
}

ConcreateProductB2::ConcreateProductB2()
{
	TRACE("construction of ConcreateProductB2\n");

}

ConcreateProductB2::~ConcreateProductB2()
{
	TRACE("destruction of ConcreateProductB2\n");

}

ConcreateFactory1::ConcreateFactory1()
{
	TRACE("construction of ConcreateFactory1\n");

}

ConcreateFactory1::~ConcreateFactory1()
{
	TRACE("destruction of ConcreateFactory1\n");

}

AbstractProductA* ConcreateFactory1::CreateProductA()
{
	return new ConcreateProductA1();
}

AbstractProductB* ConcreateFactory1::CreateProductB()
{
	return new ConcreateProductB1();
}

ConcreateFactory2::ConcreateFactory2()
{
	TRACE("construction of ConcreateFactory2\n");

}

ConcreateFactory2::~ConcreateFactory2()
{
	TRACE("destruction of ConcreateFactory2\n");

}

AbstractProductA* ConcreateFactory2::CreateProductA()
{
	return new ConcreateProductA2();
}

AbstractProductB* ConcreateFactory2::CreateProductB()
{
	return new ConcreateProductB2();
}