#include "stdafx.h"
#include "IniFile.h"

int GetPrivateProfileInt(string appName, string key, int iDefault, string fileName)
{   
	CIniFile ini_parser(fileName);	
	ini_parser.ReadFile();
	int ret = ini_parser.GetValueI(appName, key, iDefault);
	ini_parser.Clear();
	return ret;
}

string GetPrivateProfileString(string appName, string key, string strDefault, string fileName)
{
   CIniFile ini_parser(fileName);
	ini_parser.ReadFile();	
	string ret = ini_parser.GetValue(appName, key, strDefault);
	ini_parser.Clear();
	return ret;
}
