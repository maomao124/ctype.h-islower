﻿#include"head and macro.h"
#include"Class.h"

int main()
{
	/*   *************************************                                             //全屏图形窗口模板
	int rw, rh;
	rw = GetSystemMetrics(SM_CXSCREEN);                                          // 屏幕宽度 像素
	rh = GetSystemMetrics(SM_CYSCREEN);                                          // 屏幕高度 像素
	HWND hwnd = initgraph(rw, rh);                                                    // 初始化绘图窗口并获取窗口句柄
	setbkcolor(GREEN);
	cleardevice();
	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);               // 获取窗口信息
																										 // 设置窗口信息 最大化 取消标题栏及边框
	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);           // 修改窗口样式
	SetWindowPos(hwnd, HWND_TOP, 0, 0, rw, rh, 0);
	*/   //***********************************
	/*      ***********************************
	initgraph(1600, 900);
	setbkcolor(WHITE);
	cleardevice();
	*/  //***********************************
	/*    ***********************************                                             //后台方式运行，Unicode字符集改成多字节字符集
	HWND hwnd; if (hwnd = ::FindWindow("ConsoleWindowClass", NULL)) //找到控制台句柄
	{
		::ShowWindow(hwnd, SW_HIDE); //隐藏控制台窗口
	}
                                                                                                    //unicode字符集下：
	const char* sss = "ConsoleWindowClass";
	WCHAR wszName[200];
	memset(wszName, 0, sizeof(wszName));
	MultiByteToWideChar(CP_ACP, 0, sss, strlen(sss) + 1, wszName,
		sizeof(wszName) / sizeof(wszName[0]));
	HWND hwnd; if (hwnd = ::FindWindow(wszName, NULL)) //找到控制台句柄
	{
		::ShowWindow(hwnd, SW_HIDE); //隐藏控制台窗口
	}
	*/  //**********************************

	//****************从这里开始写主函数代码**********************
	//*************************************************************************



	//*************************************************************************
	runstart();
	//*************************计时开始***************************************

	//C 库函数 int islower(int c) 检查所传的字符是否是小写字母。
	//如果 c 是一个小写字母，则该函数返回非零值（true），否则返回 0（false）
	int var1 = 'Q';
	int var2 = 'q';
	int var3 = '3';

	if (islower(var1))
	{
		printf("var1 = |%c| 是小写字母\n", var1);
	}
	else
	{
		printf("var1 = |%c| 不是小写字母\n", var1);
	}
	if (islower(var2))
	{
		printf("var2 = |%c| 是小写字母\n", var2);
	}
	else
	{
		printf("var2 = |%c| 不是小写字母\n", var2);
	}
	if (islower(var3))
	{
		printf("var3 = |%c| 是小写字母\n", var3);
	}
	else
	{
		printf("var3 = |%c| 不是小写字母\n", var3);
	}

	//*************************计时结束***************************************
	runend();



	//***************************结束********************************
	/*   *************************************
	constexpr int MIN = 1;                            //随机数
	constexpr int MAX = 100;
	constexpr int numm = 10;
	 random_device rd;
	default_random_engine eng(rd());
	uniform_int_distribution<int> distr(MIN, MAX);

	for (int n = 0; n < numm; ++n)
	{
		cout << distr(eng) << ",";
	}
	*/   //***********************************
	/*  //************************************
	SYSTEMTIME sys;                                    //获取系统时间
	GetLocalTime(&sys);
	cout << sys.wYear << "/" << sys.wMonth << "/" << sys.wDay << "      ";
	cout<< setfill('0') << setw(2) << sys.wHour << ":" << setfill('0') << setw(2) << sys.wMinute << ":" << setfill('0') << setw(2) << sys.wSecond << endl;
	*/   //***********************************
	/*   ************************************                            //微软TTS语音模板
	ISpVoice* pVoice = NULL;                                            //创建一个ISpVoice的空指针
	if (FAILED(::CoInitialize(NULL)))                                     //初始化COM编程环境
	{
		cout << "初始化COM环境失败！" << endl;
		return 0;
	}
	                                                                                   //获取ISpVoice接口对象：
	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);
	if (SUCCEEDED(hr))                                                      //如果获取接口对象成功
	{
		char* szStr = (char*)malloc(200);
		sprintf(szStr, "你好，世界。");
		WCHAR wszClassName[200];
		memset(wszClassName, 0, sizeof(wszClassName));
		MultiByteToWideChar(CP_ACP, 0, szStr, strlen(szStr) + 1, wszClassName,
			sizeof(wszClassName) / sizeof(wszClassName[0]));
		hr = pVoice->Speak(wszClassName, 0, NULL);         //朗读
		
		pVoice->Release();                                                 //释放分配资源
		pVoice = NULL;                                                     //防止野指针
	}
	::CoUninitialize();                                                       //退出COM编程环境
	*/  //*********************************
	/*   **********************************                          //多线程模板
	void task()
    {
	//多线程代码
    }
	thread t(task);
	t.detach();
	*/   //*******************************
	rundisplay();                                                                   //计时结果显示
	_getch();
	//closegraph();
	// system("pause");
	//Sleep(10000);
	return 0;
}
