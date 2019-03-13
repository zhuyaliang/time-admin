/*   time-admin 
*   Copyright (C) 2018  zhuyaliang https://github.com/zhuyaliang/
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.

*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.

*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef __TIME_SHARE_H__
#define __TIME_SHARE_H__

#include <gtk/gtk.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <locale.h>
#include <libintl.h>
#include <gio/gio.h>

#define PACKAGE    "time-admin"   
#define LOCALEDIR  "/usr/share/locale/" 
#define _(STRING)  gettext(STRING)
#define TYPEMSG    "<span foreground='red'font_desc='13'>%s </span>"
#define ERROR      1
#define WARING     2
#define INFOR      3
#define QUESTION   4
#define QUESTIONNORMAL   5


GtkWidget *WindowLogin;
int        TimeoutFlag;
typedef struct 
{
    GtkWidget        *MainWindow;
    GtkWidget        *HourSpin;
    GtkWidget        *MinuteSpin;
    GtkWidget        *SecondSpin;
    GtkWidget        *Calendar;
    GtkWidget        *CloseButton;
    GtkWidget        *SaveButton;
    int               UpdateTimeId; 
    int               ApplyId;
    int               OldDay;
    gboolean          NtpState;
    GDBusConnection  *Connection;
    GDBusProxy       *proxy;
}TimeAdmin;

int          MessageReport         (const char  *Title,
                                    const char  *Msg,
                                    int          nType);

void         SetLableFontType      (GtkWidget   *Lable,
                                    const char  *Color,
                                    int          FontSzie,
                                    const char  *Word);

void         QuitApp               (TimeAdmin   *ta);
#endif
