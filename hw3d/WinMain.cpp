#include "App.h"

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR	  lpCmdLine,
	int		  nCmdShow)
{
	try
	{
		return App{}.Go();
		//Window wnd(800, 300, "bullitshit");
		//MSG msg;
		//BOOL gResult;
		//while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
		//{
		//	TranslateMessage(&msg);
		//	DispatchMessage(&msg);

		//	//if (wnd.kbd.KeyIsPressed(VK_MENU))
		//	//{
		//	//	MessageBox(nullptr,"Something Happen!","Alt Key Was Pressed", MB_OK | MB_ICONEXCLAMATION);
		//	//}

		//	//while (!wnd.mouse.IsEmpty())
		//	//{
		//	//	const auto e = wnd.mouse.Read();
		//	//	if (e.GetType() == Mouse::Event::Type::Move)
		//	//	{
		//	//		std::ostringstream oss;
		//	//		oss << "Mouse Position: (" << e.GetPosX() << ","<<e.GetPosY()<<")"<<std::endl;
		//	//		wnd.SetTitle(oss.str());
		//	//	}
		//	//}

		//	//while (!wnd.mouse.IsEmpty())
		//	//{
		//	//	const auto e = wnd.mouse.Read();
		//	//	switch (e.GetType())
		//	//	{
		//	//	case Mouse::Event::Type::Leave:
		//	//		wnd.SetTitle("Gone!");
		//	//		break;
		//	//	case Mouse::Event::Type::Move:
		//	//	{
		//	//		std::ostringstream oss;
		//	//		oss<< "Mouse Move to : (" << e.GetPosX() << ", "<<e.GetPosY()<<")"<<std::endl;
		//	//		wnd.SetTitle(oss.str());
		//	//	}
		//	//		break;
		//
		//	//	}
		//	//}
		//	static int i = 0;
		//	while (!wnd.mouse.IsEmpty())
		//	{
		//		const auto e = wnd.mouse.Read();
		//		switch (e.GetType())
		//		{
		//		case Mouse::Event::Type::WheelDown:
		//		{
		//			i--;
		//			std::ostringstream oss;
		//			oss << "Down: "<<i;
		//			wnd.SetTitle(oss.str());
		//		}
		//		break;
		//		case Mouse::Event::Type::WheelUp:
		//		{
		//			i++;
		//			std::ostringstream oss;
		//			oss << "Up: "<<i;
		//			wnd.SetTitle(oss.str());
		//		}
		//		break;
		//		}
		//	}
		//}

		//if (gResult == -1)
		//	return -1;
		//return msg.wParam;
	}
	catch (const ChiliException& e)
	{
		MessageBox(nullptr, e.what(), e.GetType(), MB_OK | MB_ICONEXCLAMATION);
	}
	catch (const std::exception& e)
	{
		MessageBox(nullptr, e.what(), "Standard Exception", MB_OK | MB_ICONEXCLAMATION);
	}
	catch (...)
	{
		MessageBox(nullptr,"No details available","Unknown Exception", MB_OK | MB_ICONEXCLAMATION);
	}
	return -1;
}





//#include <Windows.h>
//#include <string>
//#include<sstream>
////自定义需要的消息处理机制
//LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//	switch (msg)
//	{
//	case WM_CLOSE:
//		PostQuitMessage(69);
//		break;
//	case WM_KEYDOWN://大小写不敏感
//		if (wParam == 'F')
//		{
//			SetWindowText(hWnd,"bullishit");
//		}
//		break;
//	case WM_KEYUP:
//		if (wParam == 'F')
//		{
//			SetWindowText(hWnd,"fuck");
//		}
//		break;
//	case WM_CHAR:	//文本输入的消息，大小写敏感
//		{	static std::string title;
//			title.push_back((char)wParam);
//			SetWindowText(hWnd, title.c_str());
//			break;
//		}
//	case WM_LBUTTONDOWN:
//		{
//			POINTS pt = MAKEPOINTS(lParam);
//			std::ostringstream oss;
//			oss << "(" << pt.x << "," << pt.y << ")";
//			SetWindowText(hWnd, oss.str().c_str());
//			break;
//		}
//
//	}
//	return DefWindowProc(hWnd, msg, wParam, lParam);
//}
//
//int CALLBACK WinMain(
//	HINSTANCE hInstance,
//	HINSTANCE hPrevInstance,
//	LPSTR	  lpCmdLine,
//	int		  nCmdShow)
//{
//	const auto pClassName = "hw3dbutts";
//
//	//注册一个窗口类
//	WNDCLASSEX wc = {0};
//	wc.cbSize = sizeof(wc);
//	wc.style = CS_OWNDC;
//	wc.lpfnWndProc = WndProc;
//	wc.cbClsExtra = 0;
//	wc.cbWndExtra = 0;
//	wc.hInstance = hInstance;
//	wc.hIcon = nullptr;
//	wc.hCursor = nullptr;
//	wc.hbrBackground = nullptr;
//	wc.lpszClassName = pClassName;
//	wc.hIconSm = nullptr;
//	RegisterClassEx(&wc);
//	
//	//创建窗口实例
//	HWND hWnd = CreateWindowEx(
//		0, pClassName,
//		"Happy Hard Window",
//		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
//		200, 200, 640, 480,
//		nullptr, nullptr, hInstance, nullptr
//	);
//
//	//显示窗口
//	ShowWindow(hWnd, SW_SHOW);
//	
//	//消息处理
//	MSG msg;
//	int gResult;
//	while ((gResult=GetMessage(&msg, nullptr, 0, 0)) > 0)
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//	
//	if (gResult == -1)
//	{
//		return -1;
//	}
//	else
//	{
//		return msg.wParam;
//	}
//}