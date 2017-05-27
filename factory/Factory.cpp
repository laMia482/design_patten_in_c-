/********************************************************************
	created:	2006/06/30
	filename: 	Factory.h
	author:		李创

	purpose:	Factory的演示代码
*********************************************************************/
// #include "stdafx.h"
#include "Factory.h"
#include <stdio.h>
#include <iostream>
#define TRACE printf


ConcreateProduct::ConcreateProduct()
{
	TRACE("construction of ConcreateProduct\n");
}

ConcreateProduct::~ConcreateProduct()
{
	TRACE("destruction of ConcreateProduct\n");
}

void Creator::AnOperation()
{
	Product* p = FactoryMethod();
   
	TRACE("an operation of product\n");

}

ConcreateCreator::ConcreateCreator()
{ 
	TRACE("construction of ConcreateCreator\n");
}

ConcreateCreator::~ConcreateCreator()
{
	TRACE("destruction of ConcreateCreator\n");
}

Product* ConcreateCreator::FactoryMethod()
{
	return new ConcreateProduct();
}
