#pragma once  // 这是visual studio编译器独有的，其他编译器没有pragma once

#ifndef __TOOL_H__  // 判断系统或者是自定义的头文件是否已经有同名的头文件定义了，如果没有就定义该名称的头文件
#define __TOOL_H__  // 定义头文件

#include<stdio.h>

// 在头文件中声明函数，而在同名的源文件中实现具体的函数
void fun();

#endif
