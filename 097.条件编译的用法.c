#include <stdio.h>

#define DEBUF_MODE 1
#define VERSION_MAJOR 2
#define VERSION_MINOR 3


int main(void)
{
	
	printf("程序开始执行\n");
	
	// 1.基于宏定义的简单条件
	#if DEBUF_MODE
		printf("调试模式已启用\n");
		printf("版本信息：%d.%d\n", VERSION_MAJOR, VERSION_MINOR);
	#endif
	
	// 2.版本检查
	#if VERSION_MAJOR >= 2
		printf("使用新版本特性\n");
		
		// 嵌套条件编译
		#if VERSION_MINOR >= 1
			printf("包含最新的优化\n");
		#else
			printf("使用基础版本的特性\n");
		#endif
	#else
		printf("使用兼容模式\n");
	#endif
	
	printf("程序运行结束\n");
	
	return 0;
}