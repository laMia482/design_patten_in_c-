/********************************************************************
	created:	2006/06/30
	filename: 	Builder.h
	author:		�

	purpose:	Builder����ʾ����
*********************************************************************/

#ifndef BUILDER_H
#define BUILDER_H

// �������,������Builder�Ļ���,�ṩ��ͬ���ֵĹ����ӿں���
class Builder
{
public:
	Builder(){};
	virtual ~Builder(){}

	// ���麯��,�ṩ������ͬ���ֵĹ����ӿں���
	virtual void BuilderPartA() = 0;
	virtual void BuilderPartB() = 0;
};

// ʹ��Builder������Ʒ,������Ʒ�Ĺ��̶�һ��,���ǲ�ͬ��builder�в�ͬ��ʵ��
// �����ͬ��ʵ��ͨ����ͬ��Builder��������ʵ��,����һ��Builder��ָ��,ͨ�������ʵ�ֶ�̬����
class Director
{
public:
	Director(Builder* pBuilder);
	~Director();

	void Construct();

private:
	Builder* m_pBuilder;
};

// Builder��������,ʵ��BuilderPartA��BuilderPartB�ӿں���
class ConcreateBuilder1
	: public Builder
{
public:
	ConcreateBuilder1(){}
	virtual ~ConcreateBuilder1(){}

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};

// Builder��������,ʵ��BuilderPartA��BuilderPartB�ӿں���
class ConcreateBuilder2
	: public Builder
{
public:
	ConcreateBuilder2(){}
	virtual ~ConcreateBuilder2(){}

	virtual void BuilderPartA();
	virtual void BuilderPartB();
};

#endif