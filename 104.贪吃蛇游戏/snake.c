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
void InitSnake()
{
	// 蛇头
	snake.len = 3; // 蛇头的长度初始化为3
	snake.headX = COL/2;  // 蛇头初始化横坐标
	snake.headY = ROW/2;
	
	// 蛇身
	body[0].bodyX = COL/2 - 1; // 第一节蛇身
	body[0].bodyY = ROW/2;
	body[1].bodyX = COL/2 - 2; // 第二节蛇身
	body[1].bodyY = ROW/2;
	
	map[snake.headY][snake.headX] = HEAD; // 在游戏区域标记蛇头
	map[body[0].bodyY][body[0].bodyX] = BODY; // 在游戏区域标记第一节蛇身
	map[body[1].bodyY][body[1].bodyX] = BODY; // 在游戏区域标记第二节蛇身
}

// 随机生成食物
void RandFood()
{
	int x, y;
	do
	{
		x = rand() % (COL - 2) + 1; // 列范围1~COL-2
		y = rand() % (ROW -2 ) + 1;	// 行的范围1~ROW -2
	} while(map[y][x] != EMPTY); // 如果不为空就重新生成
	
	map[y][x] = FOOD; // 标记食物
	CursorJump(2 * x, y);
	SetColor(COLOR_RED); // 设置食物为红色
	printf("■");
	SetColor(COLOR_DEFAULT);
}

// 打印蛇
void DrawSnake()
{
	CursorJump(2 * snake.headX, snake.headY); // 注意乘以2，因为■占用2个字符
	SetColor(COLOR_LIGHT_BLUE); // 设置蛇头颜色为淡蓝色
	printf("■");
	SetColor(COLOR_BLUE); // 设置蛇身颜色为蓝色
	for(int i = 0; i < snake.len  - 1; i++)
	{
		CursorJump(2 * body[i].bodyX, body[i].bodyY);
		printf("■");
	}
	SetColor(COLOR_DEFAULT);
}

// 移动蛇

// 主逻辑

int main(void)
{
	HideCursor();
	InitInterface();
	InitSnake();
	DrawSnake();
	srand(time(NULL)); // 设置随机数种子
	RandFood();
	while(1);
	return 0;
}