#include <stdio.h>
#include <iostream>
#include "stdafx.h"
using namespace std;

int main(void)
{ 
	string    strFileName="config.ini";
	string 	strIPAddress;
	unsigned int       nCtrlPort;
	
	strIPAddress = GetPrivateProfileString("UDP","MSG_WORKER_IP","192.168.1.255",strFileName);
	nCtrlPort=GetPrivateProfileInt("UDP","Monitor_PORT_REC",2884,strFileName);
	
	cout <<
	printf("%s,%d\n\r",strIPAddress.c_str(),nCtrlPort);
	return 0;
}
