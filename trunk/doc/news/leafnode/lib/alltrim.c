/*
 * (C) Maint Laboratory 2000-2004
 * Author: Elohin Igor'
 * e-mail: maint@unona.ru
 * fido  : 2:5070/222.52
 * URL   : http://maint.unona.ru
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * ��������, �� ������� �� ������ �� ����� ��������
 */

int empty(char *str)
{
    char *s;

    s = str;
    while (*s) {
	if (*s != ' ')
	    return 1;
	s++;
    }
    return 0;
}
/*
 * ������ ��� ������� ����� � ������
 */
char *ltrim(char *str)
{
	char *s;

	if(str[0] == '\0') return str;
	s = str;
	while (*s && *s == ' ') {
		strcpy(str, &str[1]);
		s = str;
	}
	return str;
}
/*
 * ������ ��� ������� ����� � ������
 */
char *rtrim(char *str)
{
	char *s;

	if(str[0] == '\0') return str;
	s = &str[strlen(str) - 1];
	while (s != str && *s == ' ')
	*s-- = '\0';
	return str;
}
/*
 * ������ ��� ������� � ������ � � ����� ������
 */
char *alltrim(char *str)
{
    return ltrim(rtrim(str));
}
