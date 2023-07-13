// getlocaltime.cpp : Get current local time and print it.
#include <stdio.h>
#include <windows.h>
#include <minwinbase.h>

int main()
{
	struct SystemTime {
		unsigned short wYear;
		unsigned short wMonth;
		unsigned short wDayOfWeek;
		unsigned short wDate;
		unsigned short wHour;
		unsigned short wMinute;
		unsigned short wSecond;
		unsigned short wMilliseconds;
	} SysTime;

	GetLocalTime((LPSYSTEMTIME)&SysTime); //cast current type to LPSYSTEMTIME, a Windows API pointer type

	printf("Year: %u\nMonth: %u\nDay of Week:%u\nDate: %u\nHour: %u\nMinute: %u\nSecond: %u\nMSeconds: %u\n",
		SysTime.wYear, SysTime.wMonth, SysTime.wDayOfWeek, SysTime.wDate, SysTime.wHour, SysTime.wMinute, SysTime.wSecond, SysTime.wMilliseconds);
	
	SystemTime* st=&SysTime;
	GetLocalTime((LPSYSTEMTIME)st);
	printf("Year: %u\nMonth: %u\nDay of Week:%u\nDate: %u\nHour: %u\nMinute: %u\nSecond: %u\nMSeconds: %u\n",
		st->wYear, st->wMonth, st->wDayOfWeek, st->wDate, st->wHour, st->wMinute, st->wSecond, st->wMilliseconds);
	return 0;
}
