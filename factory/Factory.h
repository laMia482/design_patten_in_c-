/********************************************************************
	created:	2006/06/30
	filename: 	Factory.h
	author:		�

	purpose:	Factory����ʾ����
*********************************************************************/

#ifndef FACTORY_H
#define FACTORY_H

class Product
{
public:
	Product(){}
	virtual ~Product(){}
};

class ConcreateProduct
	: public Product
{
public:
	ConcreateProduct();
	virtual ~ConcreateProduct();
};

class Creator
{
public:
	Creator(){}
	virtual ~Creator(){}
	void AnOperation();

protected:
	virtual Product* FactoryMethod() = 0;
};

class ConcreateCreator
	: public Creator
{
public:
	ConcreateCreator();
	virtual ~ConcreateCreator();

protected:
	virtual Product* FactoryMethod();
};

#endif
