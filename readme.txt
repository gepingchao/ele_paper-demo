使用软件版本信息:
Stm32CubeMX       			4.16  
firmware Package for family STM32F4    	1.130
keil       				5.17
	

电子纸驱动

电子纸使用spi通信 支持局部刷新 全刷新

局部刷新:通过spi传输相应位置的图形信息执行局部刷新命令来改变显示内容,不会像全刷新那样屏幕闪几下才会显示内容,但是会留有之前显示内容的残影

全刷新:通过spi传输一整幅图的内容,然后执行全刷新命令来改变图像内容,显示清晰,但是切换图片的时候屏幕会闪几下

当前demo使用局部刷新的方式,但是传输的画面是整个图形大小,在内存中开辟一块显存,直接操作完显存后输出到屏幕上

当前功能:
指定位置插入图片 
画一个点
画一条先