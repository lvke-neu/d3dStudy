#pragma once
#include "Window.h"
#include "ChiliTimer.h"
class App
{
public:
	App();
	
	//��ʼ����Ϸ�߼�
	int Go();
private:
	//ÿһ֡����
	void DoFrame();
private:
	Window wnd;
	ChiliTimer timer;
};