#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define ROW 22             // 游戏区行数
#define COL 32             // 游戏区列数

// 颜色枚举
enum
{
	COLOR_DEFAULT = 7,      // 默认颜色
	COLOR_WHITE = 15,       // 白色   墙壁
	COLOR_RED = 12,         // 红色   食物
	COLOR_LIGHT_BLUE = 11,  // 浅蓝色 蛇头
	COLOR_BLUE = 9          // 蓝色   蛇身
};
// 标记枚举
enum
{
	EMPTY,      // 标记空（什么也没有）
	WALL,       // 标记墙
	FOOD,       // 标记食物
	HEAD,       // 标记头
	BODY        // 标记蛇身
};

// 方向键枚举
enum
{
	UP = 72,         // 上 
	DOWN = 80,       // 下
	LEFT = 75,       // 左
	RIGHT = 77,      // 右
	SPACE = 32,      // 空格（暂停）
	ARROW = 224      // 方向键
};

// 蛇头结构体
struct Snake
{
	int len;          // 记录蛇长度（包含蛇头）
	int headX;        // 蛇头横坐标
	int headY;        // 蛇头纵坐标
};

// 蛇身结构体
struct Body
{
	int bodyX;         // 蛇身横坐标
	int bodyY;         // 蛇身纵坐标
};

#endif