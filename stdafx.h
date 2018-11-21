#ifndef STDAFX_H_
#define  STDAFX_H_

#include <sys/types.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <semaphore.h>

typedef int				BOOL;
typedef void*			LPVOID;
typedef unsigned char	BYTE;
typedef unsigned int    UINT;
typedef unsigned short	WORD;
typedef unsigned int    DWORD;
typedef unsigned long   ULONG;
typedef unsigned short	USHORT;
typedef unsigned char	UCHAR;
typedef short			SHORT;
typedef const char*		LPCSTR;
typedef char*			LPSTR;
typedef unsigned int*  LPARAM;

#define TRUE			1
#define FALSE			0



#include <unistd.h>
#include <cstring>
#include <sstream>
#include <string>	

using namespace std;


int GetPrivateProfileInt(string appName, string key, int iDefault, string fileName);
string GetPrivateProfileString(string appName, string key, string strDefault, string fileName);


#endif
