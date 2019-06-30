//#pragma once

#include<pthread.h>
#include<iostream>
#include<stdio.h>

namespace wd
{
class Noncopyable
{
protected:
	Noncopyable(){}
	~Noncopyable(){}

	Noncopyable(const Noncopyable &	)=delete;//
	Noncopyable & operator=(const Noncopyable &)=delete;//c++避免复制控制函数方法
};
}//end of wd

