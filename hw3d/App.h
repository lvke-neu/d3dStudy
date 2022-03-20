#pragma once
#include "Window.h"
#include "ChiliTimer.h"
class App
{
public:
	App();
	
	//初始化游戏逻辑
	int Go();
private:
	//每一帧绘制
	void DoFrame();
private:
	Window wnd;
	ChiliTimer timer;
};