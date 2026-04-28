#include <stdio.h>

#define DEBUG_MODE 0
#define RELEASE_MODE
#define FEATURE_X

int main(void)
{
	// 基本的ifdef用法
	#ifdef DEBUG_MODE
		printf("调试模式已启用\n");
		printf("详细信息将被输出\n");
	#endif
	
	// ifdef与else配合使用
	#ifdef RELEASE_MODE
		printf("发布模式\n");
	#else
		printf("非发布模式\n");
	#endif
	
	// ifndef使用
	#ifndef FEATURE_X
		printf("FEATURE_X未定义\n");
	#endif
	
	return 0;
}