一、源码例程说明
	1、实现Linux下对配置文件*.ini文件的读写。
	
二、源码使用(对外提供2个API接口)
	
	int GetPrivateProfileInt(string appName, string key, int iDefault, string fileName);
	string GetPrivateProfileString(string appName, string key, string strDefault, string fileName);
	
	