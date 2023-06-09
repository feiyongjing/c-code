#pragma once  // 这是visual studio编译器独有的，其他编译器没有pragma once

#ifndef __TOOL_H__  // 判断系统或者是自定义的头文件是否已经有同名的头文件定义了，如果没有就定义该名称的头文件
#define __TOOL_H__  // 定义头文件

// .h头文件的作用是用于引入其他的头文件、类型的声明、函数的声明
// .c源文件是用于函数的实现，会实现头文件声明的函数，
// 然后在其他的.c源文件可以直接引用头文件进行使用头文件中声明的函数、头文件声明的类型、以及使用引入的其他头文件包含的内容

#include<stdio.h>

// 在头文件中声明函数，而在同名的源文件中实现具体的函数
void fun();

#endif
