#pragma once
#include "stdafx.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "mswsock.lib")
#pragma comment(lib, "Winmm.lib")

#include <Ws2tcpip.h>
#include <winsock2.h>
#include <mswsock.h>
#include <Mmsystem.h>
#include <Ws2spi.h>
#include <Mstcpip.h>

#include <windows.h>
#include <iostream>
#include <io.h>
#include <cstdlib>
#include <stdio.h>
#include <cstdint>

#include <assert.h>
#include <fcntl.h>
#include <algorithm>
#include <fucntional>

#include <thread>
#include <mutex>
#include <memory>

#include <string>
#include <tchar.h>

#include <ctime>
#include <random>
#include <typeinfo>

#if _DEBUG
#define CONTEXT_SWITCH Sleep(1)
#else
#define CONTEXT_SWITCH ::SwitchToThread()
#endif

typedef void(*Function)(void *);



