/********************************************************************
	created:	2006/06/30
	filename: 	Builder.h
	author:		�

	purpose:	Builder����ʾ����
*********************************************************************/

// #include "stdafx.h"
#include "Builder.h"
#include <iostream>
#include <stdio.h>

#define TRACE printf

void ConcreateBuilder1::BuilderPartA()
{
	TRACE("BuilderPartA by ConcreateBuilder1\n");
}

void ConcreateBuilder1::BuilderPartB()
{
	TRACE("BuilderPartB by ConcreateBuilder1\n");
}

void ConcreateBuilder2::BuilderPartA()
{
	TRACE("BuilderPartA by ConcreateBuilder2\n");
}

void ConcreateBuilder2::BuilderPartB()
{
	TRACE("BuilderPartB by ConcreateBuilder2\n");
}

Director::Director(Builder* pBuilder)
	: m_pBuilder(pBuilder)
{
}

Director::~Director()
{
	delete m_pBuilder;
	m_pBuilder = NULL;
}

// Construct������ʾһ�������������������,��ͬ�Ĳ���֮���װ�䷽ʽ����һ�µ�,
// ���ȹ���PartA�����PartB,ֻ�Ǹ��ݲ�ͬ�Ĺ����߻��в�ͬ�ı�ʾ
void Director::Construct()
{
	m_pBuilder->BuilderPartA();
	m_pBuilder->BuilderPartB();
}