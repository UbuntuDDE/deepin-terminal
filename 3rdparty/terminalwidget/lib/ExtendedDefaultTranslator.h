/*
    This file is part of Konsole, an X terminal.

    Copyright 2006-2008 by Robert Knight <robertknight@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
    02110-1301  USA.
*/

"keyboard \"Default (XFree 4)\""
"key Escape             : \"\\E\""
"key Tab   -Shift       : \"\\t\"\n"
"key Tab   +Shift+Ansi  : \"\\E[Z\"\n"
"key Tab   +Shift-Ansi  : \"\\t\"\n"
"key Backtab     +Ansi  : \"\\E[Z\"\n"
"key Backtab     -Ansi  : \"\\t\"\n"
"key Return-Shift-NewLine : \"\\r\"\n"
"key Return-Shift+NewLine : \"\\r\\n\"\n"
"key Return+Shift         : \"\\EOM\"\n"
"key Backspace      : \"\\x7f\"\n"
"key Up   -Shift-Ansi : \"\\EA\"\n"
"key Down -Shift-Ansi : \"\\EB\"\n"
"key Right-Shift-Ansi : \"\\EC\"\n"
"key Left -Shift-Ansi : \"\\ED\"\n"
"key Up    -Shift-AnyMod+Ansi+AppCuKeys           : \"\\EOA\"\n"
"key Down  -Shift-AnyMod+Ansi+AppCuKeys           : \"\\EOB\"\n"
"key Right -Shift-AnyMod+Ansi+AppCuKeys           : \"\\EOC\"\n"
"key Left  -Shift-AnyMod+Ansi+AppCuKeys           : \"\\EOD\"\n"
"key Up    -Shift-AnyMod+Ansi-AppCuKeys           : \"\\E[A\"\n"
"key Down  -Shift-AnyMod+Ansi-AppCuKeys           : \"\\E[B\"\n"
"key Right -Shift-AnyMod+Ansi-AppCuKeys           : \"\\E[C\"\n"
"key Left  -Shift-AnyMod+Ansi-AppCuKeys           : \"\\E[D\"\n"
"key Up    -Shift+AnyMod+Ansi                     : \"\\E[1;*A\"\n"
"key Down  -Shift+AnyMod+Ansi                     : \"\\E[1;*B\"\n"
"key Right -Shift+AnyMod+Ansi                     : \"\\E[1;*C\"\n"
"key Left  -Shift+AnyMod+Ansi                     : \"\\E[1;*D\"\n"
"key Enter+NewLine : \"\\r\\n\"\n"
"key Enter-NewLine : \"\\r\"\n"
"key Home        -AnyMod     -AppCuKeys           : \"\\E[H\"  \n"
"key End         -AnyMod     -AppCuKeys           : \"\\E[F\"  \n"
"key Home        -AnyMod     +AppCuKeys           : \"\\EOH\"  \n"
"key End         -AnyMod     +AppCuKeys           : \"\\EOF\"  \n"
"key Home        +AnyMod                          : \"\\E[1;*H\"\n"
"key End         +AnyMod                          : \"\\E[1;*F\"\n"
"key Insert      -AnyMod                          : \"\\E[2~\"\n"
"key Delete      -AnyMod                          : \"\\E[3~\"\n"
"key Insert      +AnyMod                          : \"\\E[2;*~\"\n"
"key Delete      +AnyMod                          : \"\\E[3;*~\"\n"
"key Prior -Shift-AnyMod                          : \"\\E[5~\"\n"
"key Next  -Shift-AnyMod                          : \"\\E[6~\"\n"
"key Prior -Shift+AnyMod                          : \"\\E[5;*~\"\n"
"key Next  -Shift+AnyMod                          : \"\\E[6;*~\"\n"
"key F1          -AnyMod                          : \"\\EOP\"\n"
"key F2          -AnyMod                          : \"\\EOQ\"\n"
"key F3          -AnyMod                          : \"\\EOR\"\n"
"key F4          -AnyMod                          : \"\\EOS\"\n"
"key F5          -AnyMod                          : \"\\E[15~\"\n"
"key F6          -AnyMod                          : \"\\E[17~\"\n"
"key F7          -AnyMod                          : \"\\E[18~\"\n"
"key F8          -AnyMod                          : \"\\E[19~\"\n"
"key F9          -AnyMod                          : \"\\E[20~\"\n"
"key F10         -AnyMod                          : \"\\E[21~\"\n"
"key F11         -AnyMod                          : \"\\E[23~\"\n"
"key F12         -AnyMod                          : \"\\E[24~\"\n"
"key F1          +AnyMod                          : \"\\EO*P\"\n"
"key F2          +AnyMod                          : \"\\EO*Q\"\n"
"key F3          +AnyMod                          : \"\\EO*R\"\n"
"key F4          +AnyMod                          : \"\\EO*S\"\n"
"key F5          +AnyMod                          : \"\\E[15;*~\"\n"
"key F6          +AnyMod                          : \"\\E[17;*~\"\n"
"key F7          +AnyMod                          : \"\\E[18;*~\"\n"
"key F8          +AnyMod                          : \"\\E[19;*~\"\n"
"key F9          +AnyMod                          : \"\\E[20;*~\"\n"
"key F10         +AnyMod                          : \"\\E[21;*~\"\n"
"key F11         +AnyMod                          : \"\\E[23;*~\"\n"
"key F12         +AnyMod                          : \"\\E[24;*~\"\n"
"key Space +Control : \"\\x00\"\n"
"key Up    +Shift-AppScreen  : scrollLineUp\n"
"key Prior +Shift-AppScreen  : scrollPageUp\n"
"key Down  +Shift-AppScreen  : scrollLineDown\n"
"key Next  +Shift-AppScreen  : scrollPageDown\n"
"key ScrollLock     : scrollLock\n"
"\0"
