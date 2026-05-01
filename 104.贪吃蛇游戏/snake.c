#include "snake.h"

// 蛇头
struct Snake snake;

// 蛇身
struct Body body[ROW * COL];     // 开辟足以存储蛇身的结构体数组

//地图
int map[ROW][COL];    // 标记游戏区域各个位置的状态

int score;   // 分数

int direction; // 当前移动方向

//隐藏光标
void HideCursor()
{
	CONSOLE_CURSOR_INFO curInfo; //定义光标信息的结构体变量
	curInfo.dwSize = 1; //如果没赋值的话，光标隐藏无效
	curInfo.bVisible = FALSE; //将光标设置为不可见
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
	SetConsoleCursorInfo(handle, &curInfo); //设置光标信息
}

//光标跳转
void CursorJump(int x, int y)
{
	COORD pos; //定义光标位置的结构体变量
	pos.X = x; //横坐标
	pos.Y = y; //纵坐标
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //设置光标位置
}

//颜色设置
void SetColor(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// 初始化界面
void InitInterface()
{
	SetColor(COLOR_WHITE);
	for(int i = 0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			if (i == 0 || i == ROW - 1)
			{
				map[i][j] = WALL;
				printf("■"); // 占用两个字符
			}
			else if (j == 0 || j == COL - 1)
			{
				map[i][j] = WALL;
				printf("■");
			}
			else
			{
				map[i][j] = EMPTY;
				printf("  ");
			}
		}
		printf("\n");
	}
	SetColor(COLOR_DEFAULT);
	printf("当前得分：%d\n", score);
	printf("操作说明：\n");
	printf("↑ ↓ ← →：移动蛇\n");
	printf("空格键：暂停游戏\n");
}
// 初始化蛇

// 随机生成食物

// 打印蛇

// 移动蛇

// 主逻辑

int main(void)
{
	HideCursor();
	InitInterface();
	
	return 0;
}