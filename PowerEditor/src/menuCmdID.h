// This file is part of Notepad++ project
// Copyright (C)2003 Don HO <don.h@free.fr>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Note that the GPL places important restrictions on "derived works", yet
// it does not provide a detailed definition of that term.  To avoid
// misunderstandings, we consider an application to constitute a
// "derivative work" for the purpose of this license if it does any of the
// following:
// 1. Integrates source code from Notepad++.
// 2. Integrates/includes/aggregates Notepad++ into a proprietary executable
//    installer, such as those produced by InstallShield.
// 3. Links to a library or executes a program that does any of the above.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.


#ifndef MENUCMDID_H
#define MENUCMDID_H

#define    IDM    40000

#define    IDM_FILE    (IDM + 1000)
    #define    IDM_FILE_NEW                     (IDM_FILE + 1)
    #define    IDM_FILE_OPEN                    (IDM_FILE + 2)
    #define    IDM_FILE_CLOSE                   (IDM_FILE + 3)
    #define    IDM_FILE_CLOSEALL                (IDM_FILE + 4)
    #define    IDM_FILE_CLOSEALL_BUT_CURRENT    (IDM_FILE + 5)
    #define    IDM_FILE_SAVE                    (IDM_FILE + 6)
    #define    IDM_FILE_SAVEALL                 (IDM_FILE + 7)
    #define    IDM_FILE_SAVEAS                  (IDM_FILE + 8)
    //#define    IDM_FILE_ASIAN_LANG              (IDM_FILE + 9)
    #define    IDM_FILE_PRINT                   (IDM_FILE + 10)
    #define    IDM_FILE_PRINTNOW                1001
    #define    IDM_FILE_EXIT                    (IDM_FILE + 11)
    #define    IDM_FILE_LOADSESSION             (IDM_FILE + 12)
    #define    IDM_FILE_SAVESESSION             (IDM_FILE + 13)
    #define    IDM_FILE_RELOAD                  (IDM_FILE + 14)
    #define    IDM_FILE_SAVECOPYAS              (IDM_FILE + 15)
    #define    IDM_FILE_DELETE                  (IDM_FILE + 16)
    #define    IDM_FILE_RENAME                  (IDM_FILE + 17)

 // To be updated if new menu item(s) is (are) added in menu "File"
    #define    IDM_FILEMENU_LASTONE             IDM_FILE_RENAME

#define    IDM_EDIT       (IDM + 2000)
    #define    IDM_EDIT_CUT                         (IDM_EDIT + 1)
    #define    IDM_EDIT_COPY                        (IDM_EDIT + 2)
    #define    IDM_EDIT_UNDO                        (IDM_EDIT + 3)
    #define    IDM_EDIT_REDO                        (IDM_EDIT + 4)
    #define    IDM_EDIT_PASTE                       (IDM_EDIT + 5)
    #define    IDM_EDIT_DELETE                      (IDM_EDIT + 6)
    #define    IDM_EDIT_SELECTALL                   (IDM_EDIT + 7)

    #define    IDM_EDIT_INS_TAB                     (IDM_EDIT + 8)
    #define    IDM_EDIT_RMV_TAB                     (IDM_EDIT + 9)
    #define    IDM_EDIT_DUP_LINE                    (IDM_EDIT + 10)
    #define    IDM_EDIT_TRANSPOSE_LINE              (IDM_EDIT + 11)
    #define    IDM_EDIT_SPLIT_LINES                 (IDM_EDIT + 12)
    #define    IDM_EDIT_JOIN_LINES                  (IDM_EDIT + 13)
    #define    IDM_EDIT_LINE_UP                     (IDM_EDIT + 14)
    #define    IDM_EDIT_LINE_DOWN                   (IDM_EDIT + 15)
    #define    IDM_EDIT_UPPERCASE                   (IDM_EDIT + 16)
    #define    IDM_EDIT_LOWERCASE                   (IDM_EDIT + 17)

// Menu macro
    #define    IDM_MACRO_STARTRECORDINGMACRO        (IDM_EDIT + 18)
    #define    IDM_MACRO_STOPRECORDINGMACRO         (IDM_EDIT + 19)
    #define    IDM_MACRO_PLAYBACKRECORDEDMACRO      (IDM_EDIT + 21)
//-----------

    #define    IDM_EDIT_BLOCK_COMMENT               (IDM_EDIT + 22)
    #define    IDM_EDIT_STREAM_COMMENT              (IDM_EDIT + 23)
    #define    IDM_EDIT_TRIMTRAILING                (IDM_EDIT + 24)
    #define    IDM_EDIT_TRIMLINEHEAD                (IDM_EDIT + 42)
    #define    IDM_EDIT_TRIM_BOTH                   (IDM_EDIT + 43)
    #define    IDM_EDIT_EOL2WS                      (IDM_EDIT + 44)
    #define    IDM_EDIT_TRIMALL                     (IDM_EDIT + 45)
    #define    IDM_EDIT_TAB2SW                      (IDM_EDIT + 46)
    #define    IDM_EDIT_SW2TAB_LEADING              (IDM_EDIT + 53)
    #define    IDM_EDIT_SW2TAB_ALL                  (IDM_EDIT + 54)
	#define    IDM_EDIT_STREAM_UNCOMMENT            (IDM_EDIT + 47)

// Menu macro
    #define    IDM_MACRO_SAVECURRENTMACRO           (IDM_EDIT + 25)
//-----------

    #define    IDM_EDIT_RTL                         (IDM_EDIT + 26)
    #define    IDM_EDIT_LTR                         (IDM_EDIT + 27)
    #define    IDM_EDIT_SETREADONLY                 (IDM_EDIT + 28)
    #define    IDM_EDIT_FULLPATHTOCLIP              (IDM_EDIT + 29)
    #define    IDM_EDIT_FILENAMETOCLIP              (IDM_EDIT + 30)
    #define    IDM_EDIT_CURRENTDIRTOCLIP            (IDM_EDIT + 31)

// Menu macro
    #define    IDM_MACRO_RUNMULTIMACRODLG           (IDM_EDIT + 32)
//-----------

    #define    IDM_EDIT_CLEARREADONLY               (IDM_EDIT + 33)
    #define    IDM_EDIT_COLUMNMODE                  (IDM_EDIT + 34)
    #define    IDM_EDIT_BLOCK_COMMENT_SET           (IDM_EDIT + 35)
    #define    IDM_EDIT_BLOCK_UNCOMMENT             (IDM_EDIT + 36)
	#define    IDM_EDIT_COLUMNMODETIP               (IDM_EDIT + 37)
	#define    IDM_EDIT_PASTE_AS_HTML               (IDM_EDIT + 38)
	#define    IDM_EDIT_PASTE_AS_RTF                (IDM_EDIT + 39)
	#define    IDM_EDIT_COPY_BINARY                 (IDM_EDIT + 48)
	#define    IDM_EDIT_CUT_BINARY                  (IDM_EDIT + 49)
	#define    IDM_EDIT_PASTE_BINARY                (IDM_EDIT + 50)
	#define    IDM_EDIT_CHAR_PANEL                  (IDM_EDIT + 51)
	#define    IDM_EDIT_CLIPBOARDHISTORY_PANEL      (IDM_EDIT + 52)

    #define    IDM_EDIT_AUTOCOMPLETE                (50000 + 0)
    #define    IDM_EDIT_AUTOCOMPLETE_CURRENTFILE    (50000 + 1)
    #define    IDM_EDIT_FUNCCALLTIP                 (50000 + 2)

    //Belong to MENU FILE
    #define    IDM_OPEN_ALL_RECENT_FILE             (IDM_EDIT + 40)
    #define    IDM_CLEAN_RECENT_FILE_LIST           (IDM_EDIT + 41)

#define    IDM_SEARCH    (IDM + 3000)

    #define    IDM_SEARCH_FIND                 (IDM_SEARCH + 1)
    #define    IDM_SEARCH_FINDNEXT             (IDM_SEARCH + 2)
    #define    IDM_SEARCH_REPLACE              (IDM_SEARCH + 3)
    #define    IDM_SEARCH_GOTOLINE             (IDM_SEARCH + 4)
    #define    IDM_SEARCH_TOGGLE_BOOKMARK      (IDM_SEARCH + 5)
    #define    IDM_SEARCH_NEXT_BOOKMARK        (IDM_SEARCH + 6)
    #define    IDM_SEARCH_PREV_BOOKMARK        (IDM_SEARCH + 7)
    #define    IDM_SEARCH_CLEAR_BOOKMARKS      (IDM_SEARCH + 8)
    #define    IDM_SEARCH_GOTOMATCHINGBRACE    (IDM_SEARCH + 9)
    #define    IDM_SEARCH_FINDPREV             (IDM_SEARCH + 10)
    #define    IDM_SEARCH_FINDINCREMENT        (IDM_SEARCH + 11)
    #define    IDM_SEARCH_FINDINFILES          (IDM_SEARCH + 13)
    #define    IDM_SEARCH_VOLATILE_FINDNEXT    (IDM_SEARCH + 14)
    #define    IDM_SEARCH_VOLATILE_FINDPREV    (IDM_SEARCH + 15)
    #define    IDM_SEARCH_CUTMARKEDLINES       (IDM_SEARCH + 18)
    #define    IDM_SEARCH_COPYMARKEDLINES      (IDM_SEARCH + 19)
    #define    IDM_SEARCH_PASTEMARKEDLINES     (IDM_SEARCH + 20)
    #define    IDM_SEARCH_DELETEMARKEDLINES    (IDM_SEARCH + 21)
    #define    IDM_SEARCH_MARKALLEXT1          (IDM_SEARCH + 22)
    #define    IDM_SEARCH_UNMARKALLEXT1        (IDM_SEARCH + 23)
    #define    IDM_SEARCH_MARKALLEXT2          (IDM_SEARCH + 24)
    #define    IDM_SEARCH_UNMARKALLEXT2        (IDM_SEARCH + 25)
    #define    IDM_SEARCH_MARKALLEXT3          (IDM_SEARCH + 26)
    #define    IDM_SEARCH_UNMARKALLEXT3        (IDM_SEARCH + 27)
    #define    IDM_SEARCH_MARKALLEXT4          (IDM_SEARCH + 28)
    #define    IDM_SEARCH_UNMARKALLEXT4        (IDM_SEARCH + 29)
    #define    IDM_SEARCH_MARKALLEXT5          (IDM_SEARCH + 30)
    #define    IDM_SEARCH_UNMARKALLEXT5        (IDM_SEARCH + 31)
    #define    IDM_SEARCH_CLEARALLMARKS        (IDM_SEARCH + 32)

    #define    IDM_SEARCH_GOPREVMARKER1        (IDM_SEARCH + 33)
    #define    IDM_SEARCH_GOPREVMARKER2        (IDM_SEARCH + 34)
    #define    IDM_SEARCH_GOPREVMARKER3        (IDM_SEARCH + 35)
    #define    IDM_SEARCH_GOPREVMARKER4        (IDM_SEARCH + 36)
    #define    IDM_SEARCH_GOPREVMARKER5        (IDM_SEARCH + 37)
    #define    IDM_SEARCH_GOPREVMARKER_DEF     (IDM_SEARCH + 38)

    #define    IDM_SEARCH_GONEXTMARKER1        (IDM_SEARCH + 39)
    #define    IDM_SEARCH_GONEXTMARKER2        (IDM_SEARCH + 40)
    #define    IDM_SEARCH_GONEXTMARKER3        (IDM_SEARCH + 41)
    #define    IDM_SEARCH_GONEXTMARKER4        (IDM_SEARCH + 42)
    #define    IDM_SEARCH_GONEXTMARKER5        (IDM_SEARCH + 43)
    #define    IDM_SEARCH_GONEXTMARKER_DEF     (IDM_SEARCH + 44)

    #define    IDM_FOCUS_ON_FOUND_RESULTS      (IDM_SEARCH + 45)
    #define    IDM_SEARCH_GOTONEXTFOUND	       (IDM_SEARCH + 46)
    #define    IDM_SEARCH_GOTOPREVFOUND	       (IDM_SEARCH + 47)

    #define    IDM_SEARCH_SETANDFINDNEXT       (IDM_SEARCH + 48)
    #define    IDM_SEARCH_SETANDFINDPREV       (IDM_SEARCH + 49)
    #define    IDM_SEARCH_INVERSEMARKS         (IDM_SEARCH + 50)
	#define    IDM_SEARCH_DELETEUNMARKEDLINES  (IDM_SEARCH + 51)
	#define    IDM_SEARCH_FINDCHARINRANGE      (IDM_SEARCH + 52)

#define IDM_VIEW    (IDM + 4000)
    //#define    IDM_VIEW_TOOLBAR_HIDE            (IDM_VIEW + 1)
    #define    IDM_VIEW_TOOLBAR_REDUCE            (IDM_VIEW + 2)
    #define    IDM_VIEW_TOOLBAR_ENLARGE           (IDM_VIEW + 3)
    #define    IDM_VIEW_TOOLBAR_STANDARD          (IDM_VIEW + 4)
    #define    IDM_VIEW_REDUCETABBAR              (IDM_VIEW + 5)
    #define    IDM_VIEW_LOCKTABBAR                (IDM_VIEW + 6)
    #define    IDM_VIEW_DRAWTABBAR_TOPBAR         (IDM_VIEW + 7)
    #define    IDM_VIEW_DRAWTABBAR_INACIVETAB     (IDM_VIEW + 8)
    #define    IDM_VIEW_POSTIT                    (IDM_VIEW + 9)
    #define    IDM_VIEW_TOGGLE_FOLDALL            (IDM_VIEW + 10)
    #define    IDM_VIEW_USER_DLG                  (IDM_VIEW + 11)
    #define    IDM_VIEW_LINENUMBER                (IDM_VIEW + 12)
    #define    IDM_VIEW_SYMBOLMARGIN              (IDM_VIEW + 13)
    #define    IDM_VIEW_FOLDERMAGIN               (IDM_VIEW + 14)
    #define    IDM_VIEW_FOLDERMAGIN_SIMPLE        (IDM_VIEW + 15)
    #define    IDM_VIEW_FOLDERMAGIN_ARROW         (IDM_VIEW + 16)
    #define    IDM_VIEW_FOLDERMAGIN_CIRCLE        (IDM_VIEW + 17)
    #define    IDM_VIEW_FOLDERMAGIN_BOX           (IDM_VIEW + 18)
    #define    IDM_VIEW_ALL_CHARACTERS            (IDM_VIEW + 19)
    #define    IDM_VIEW_INDENT_GUIDE              (IDM_VIEW + 20)
    #define    IDM_VIEW_CURLINE_HILITING          (IDM_VIEW + 21)
    #define    IDM_VIEW_WRAP                      (IDM_VIEW + 22)
    #define    IDM_VIEW_ZOOMIN                    (IDM_VIEW + 23)
    #define    IDM_VIEW_ZOOMOUT                   (IDM_VIEW + 24)
    #define    IDM_VIEW_TAB_SPACE                 (IDM_VIEW + 25)
    #define    IDM_VIEW_EOL                       (IDM_VIEW + 26)
    #define    IDM_VIEW_EDGELINE                  (IDM_VIEW + 27)
    #define    IDM_VIEW_EDGEBACKGROUND            (IDM_VIEW + 28)
    #define    IDM_VIEW_TOGGLE_UNFOLDALL          (IDM_VIEW + 29)
    #define    IDM_VIEW_FOLD_CURRENT              (IDM_VIEW + 30)
    #define    IDM_VIEW_UNFOLD_CURRENT            (IDM_VIEW + 31)
    #define    IDM_VIEW_FULLSCREENTOGGLE          (IDM_VIEW + 32)
    #define    IDM_VIEW_ZOOMRESTORE               (IDM_VIEW + 33)
    #define    IDM_VIEW_ALWAYSONTOP               (IDM_VIEW + 34)
    #define    IDM_VIEW_SYNSCROLLV                (IDM_VIEW + 35)
    #define    IDM_VIEW_SYNSCROLLH                (IDM_VIEW + 36)
    #define    IDM_VIEW_EDGENONE                  (IDM_VIEW + 37)
    #define    IDM_VIEW_DRAWTABBAR_CLOSEBOTTUN    (IDM_VIEW + 38)
    #define    IDM_VIEW_DRAWTABBAR_DBCLK2CLOSE    (IDM_VIEW + 39)
    #define    IDM_VIEW_REFRESHTABAR              (IDM_VIEW + 40)
    #define    IDM_VIEW_WRAP_SYMBOL               (IDM_VIEW + 41)
    #define    IDM_VIEW_HIDELINES                 (IDM_VIEW + 42)
    #define    IDM_VIEW_DRAWTABBAR_VERTICAL       (IDM_VIEW + 43)
    #define    IDM_VIEW_DRAWTABBAR_MULTILINE      (IDM_VIEW + 44)
    #define    IDM_VIEW_DOCCHANGEMARGIN           (IDM_VIEW + 45)
    #define    IDM_VIEW_LWDEF					  (IDM_VIEW + 46)
    #define    IDM_VIEW_LWALIGN					  (IDM_VIEW + 47)
    #define    IDM_VIEW_LWINDENT				  (IDM_VIEW + 48)
    #define    IDM_VIEW_SUMMARY 				  (IDM_VIEW + 49)

    #define    IDM_VIEW_FOLD                      (IDM_VIEW + 50)
        #define    IDM_VIEW_FOLD_1    (IDM_VIEW_FOLD + 1)
        #define    IDM_VIEW_FOLD_2    (IDM_VIEW_FOLD + 2)
        #define    IDM_VIEW_FOLD_3    (IDM_VIEW_FOLD + 3)
        #define    IDM_VIEW_FOLD_4    (IDM_VIEW_FOLD + 4)
        #define    IDM_VIEW_FOLD_5    (IDM_VIEW_FOLD + 5)
        #define    IDM_VIEW_FOLD_6    (IDM_VIEW_FOLD + 6)
        #define    IDM_VIEW_FOLD_7    (IDM_VIEW_FOLD + 7)
        #define    IDM_VIEW_FOLD_8    (IDM_VIEW_FOLD + 8)

    #define    IDM_VIEW_UNFOLD                    (IDM_VIEW + 60)
        #define    IDM_VIEW_UNFOLD_1    (IDM_VIEW_UNFOLD + 1)
        #define    IDM_VIEW_UNFOLD_2    (IDM_VIEW_UNFOLD + 2)
        #define    IDM_VIEW_UNFOLD_3    (IDM_VIEW_UNFOLD + 3)
        #define    IDM_VIEW_UNFOLD_4    (IDM_VIEW_UNFOLD + 4)
        #define    IDM_VIEW_UNFOLD_5    (IDM_VIEW_UNFOLD + 5)
        #define    IDM_VIEW_UNFOLD_6    (IDM_VIEW_UNFOLD + 6)
        #define    IDM_VIEW_UNFOLD_7    (IDM_VIEW_UNFOLD + 7)
        #define    IDM_VIEW_UNFOLD_8    (IDM_VIEW_UNFOLD + 8)

	#define    IDM_VIEW_FILESWITCHER_PANEL        (IDM_VIEW + 70)
	#define    IDM_VIEW_SWITCHTO_OTHER_VIEW       (IDM_VIEW + 72)

	#define    IDM_VIEW_DOC_MAP                   (IDM_VIEW + 80)

	#define    IDM_VIEW_PROJECT_PANEL_1           (IDM_VIEW + 81)
	#define    IDM_VIEW_PROJECT_PANEL_2           (IDM_VIEW + 82)
	#define    IDM_VIEW_PROJECT_PANEL_3           (IDM_VIEW + 83)

    #define    IDM_VIEW_GOTO_ANOTHER_VIEW        10001
    #define    IDM_VIEW_CLONE_TO_ANOTHER_VIEW    10002
    #define    IDM_VIEW_GOTO_NEW_INSTANCE        10003
    #define    IDM_VIEW_LOAD_IN_NEW_INSTANCE     10004


#define    IDM_FORMAT    (IDM + 5000)
    #define    IDM_FORMAT_TODOS             (IDM_FORMAT + 1)
    #define    IDM_FORMAT_TOUNIX            (IDM_FORMAT + 2)
    #define    IDM_FORMAT_TOMAC             (IDM_FORMAT + 3)
    #define    IDM_FORMAT_ANSI              (IDM_FORMAT + 4)
    #define    IDM_FORMAT_UTF_8             (IDM_FORMAT + 5)
    #define    IDM_FORMAT_UCS_2BE           (IDM_FORMAT + 6)
    #define    IDM_FORMAT_UCS_2LE           (IDM_FORMAT + 7)
    #define    IDM_FORMAT_AS_UTF_8          (IDM_FORMAT + 8)
    #define    IDM_FORMAT_CONV2_ANSI        (IDM_FORMAT + 9)
    #define    IDM_FORMAT_CONV2_AS_UTF_8    (IDM_FORMAT + 10)
    #define    IDM_FORMAT_CONV2_UTF_8       (IDM_FORMAT + 11)
    #define    IDM_FORMAT_CONV2_UCS_2BE     (IDM_FORMAT + 12)
    #define    IDM_FORMAT_CONV2_UCS_2LE     (IDM_FORMAT + 13)

    #define    IDM_FORMAT_ENCODE            (IDM_FORMAT + 20)
    #define    IDM_FORMAT_WIN_1250          (IDM_FORMAT_ENCODE + 0)
    #define    IDM_FORMAT_WIN_1251          (IDM_FORMAT_ENCODE + 1)
    #define    IDM_FORMAT_WIN_1252          (IDM_FORMAT_ENCODE + 2)
    #define    IDM_FORMAT_WIN_1253          (IDM_FORMAT_ENCODE + 3)
    #define    IDM_FORMAT_WIN_1254          (IDM_FORMAT_ENCODE + 4)
    #define    IDM_FORMAT_WIN_1255          (IDM_FORMAT_ENCODE + 5)
    #define    IDM_FORMAT_WIN_1256          (IDM_FORMAT_ENCODE + 6)
    #define    IDM_FORMAT_WIN_1257          (IDM_FORMAT_ENCODE + 7)
    #define    IDM_FORMAT_WIN_1258          (IDM_FORMAT_ENCODE + 8)
    #define    IDM_FORMAT_ISO_8859_1        (IDM_FORMAT_ENCODE + 9)
    #define    IDM_FORMAT_ISO_8859_2        (IDM_FORMAT_ENCODE + 10)
    #define    IDM_FORMAT_ISO_8859_3        (IDM_FORMAT_ENCODE + 11)
    #define    IDM_FORMAT_ISO_8859_4        (IDM_FORMAT_ENCODE + 12)
    #define    IDM_FORMAT_ISO_8859_5        (IDM_FORMAT_ENCODE + 13)
    #define    IDM_FORMAT_ISO_8859_6        (IDM_FORMAT_ENCODE + 14)
    #define    IDM_FORMAT_ISO_8859_7        (IDM_FORMAT_ENCODE + 15)
    #define    IDM_FORMAT_ISO_8859_8        (IDM_FORMAT_ENCODE + 16)
    #define    IDM_FORMAT_ISO_8859_9        (IDM_FORMAT_ENCODE + 17)
    #define    IDM_FORMAT_ISO_8859_10       (IDM_FORMAT_ENCODE + 18)
    #define    IDM_FORMAT_ISO_8859_11       (IDM_FORMAT_ENCODE + 19)
    #define    IDM_FORMAT_ISO_8859_13       (IDM_FORMAT_ENCODE + 20)
    #define    IDM_FORMAT_ISO_8859_14       (IDM_FORMAT_ENCODE + 21)
    #define    IDM_FORMAT_ISO_8859_15       (IDM_FORMAT_ENCODE + 22)
    #define    IDM_FORMAT_ISO_8859_16       (IDM_FORMAT_ENCODE + 23)
	#define    IDM_FORMAT_DOS_437           (IDM_FORMAT_ENCODE + 24)
	#define    IDM_FORMAT_DOS_720           (IDM_FORMAT_ENCODE + 25)
    #define    IDM_FORMAT_DOS_737           (IDM_FORMAT_ENCODE + 26)
    #define    IDM_FORMAT_DOS_775           (IDM_FORMAT_ENCODE + 27)
    #define    IDM_FORMAT_DOS_850           (IDM_FORMAT_ENCODE + 28)
    #define    IDM_FORMAT_DOS_852           (IDM_FORMAT_ENCODE + 29)
    #define    IDM_FORMAT_DOS_855           (IDM_FORMAT_ENCODE + 30)
    #define    IDM_FORMAT_DOS_857           (IDM_FORMAT_ENCODE + 31)
    #define    IDM_FORMAT_DOS_858           (IDM_FORMAT_ENCODE + 32)
    #define    IDM_FORMAT_DOS_860           (IDM_FORMAT_ENCODE + 33)
    #define    IDM_FORMAT_DOS_861           (IDM_FORMAT_ENCODE + 34)
    #define    IDM_FORMAT_DOS_862           (IDM_FORMAT_ENCODE + 35)
    #define    IDM_FORMAT_DOS_863           (IDM_FORMAT_ENCODE + 36)
    #define    IDM_FORMAT_DOS_865           (IDM_FORMAT_ENCODE + 37)
    #define    IDM_FORMAT_DOS_866           (IDM_FORMAT_ENCODE + 38)
    #define    IDM_FORMAT_DOS_869           (IDM_FORMAT_ENCODE + 39)
    #define    IDM_FORMAT_BIG5              (IDM_FORMAT_ENCODE + 40)
    #define    IDM_FORMAT_GB2312            (IDM_FORMAT_ENCODE + 41)
    #define    IDM_FORMAT_SHIFT_JIS         (IDM_FORMAT_ENCODE + 42)
    #define    IDM_FORMAT_KOREAN_WIN        (IDM_FORMAT_ENCODE + 43)
    #define    IDM_FORMAT_EUC_KR            (IDM_FORMAT_ENCODE + 44)
    #define    IDM_FORMAT_TIS_620           (IDM_FORMAT_ENCODE + 45)
    #define    IDM_FORMAT_MAC_CYRILLIC      (IDM_FORMAT_ENCODE + 46)
    #define    IDM_FORMAT_KOI8U_CYRILLIC    (IDM_FORMAT_ENCODE + 47)
    #define    IDM_FORMAT_KOI8R_CYRILLIC    (IDM_FORMAT_ENCODE + 48)
    #define    IDM_FORMAT_ENCODE_END        IDM_FORMAT_KOI8R_CYRILLIC

    //#define    IDM_FORMAT_CONVERT           200

#define    IDM_LANG    (IDM + 6000)
    #define    IDM_LANGSTYLE_CONFIG_DLG    (IDM_LANG + 1)
    #define    IDM_LANG_C                  (IDM_LANG + 2)
    #define    IDM_LANG_CPP                (IDM_LANG + 3)
    #define    IDM_LANG_JAVA               (IDM_LANG + 4)
    #define    IDM_LANG_HTML               (IDM_LANG + 5)
    #define    IDM_LANG_XML                (IDM_LANG + 6)
    #define    IDM_LANG_JS                 (IDM_LANG + 7)
    #define    IDM_LANG_PHP                (IDM_LANG + 8)
    #define    IDM_LANG_ASP                (IDM_LANG + 9)
    #define    IDM_LANG_CSS                (IDM_LANG + 10)
    #define    IDM_LANG_PASCAL             (IDM_LANG + 11)
    #define    IDM_LANG_PYTHON             (IDM_LANG + 12)
    #define    IDM_LANG_PERL               (IDM_LANG + 13)
    #define    IDM_LANG_OBJC               (IDM_LANG + 14)
    #define    IDM_LANG_ASCII              (IDM_LANG + 15)
    #define    IDM_LANG_TEXT               (IDM_LANG + 16)
    #define    IDM_LANG_RC                 (IDM_LANG + 17)
    #define    IDM_LANG_MAKEFILE           (IDM_LANG + 18)
    #define    IDM_LANG_INI                (IDM_LANG + 19)
    #define    IDM_LANG_SQL                (IDM_LANG + 20)
    #define    IDM_LANG_VB                 (IDM_LANG + 21)
    #define    IDM_LANG_BATCH              (IDM_LANG + 22)
    #define    IDM_LANG_CS                 (IDM_LANG + 23)
    #define    IDM_LANG_LUA                (IDM_LANG + 24)
    #define    IDM_LANG_TEX                (IDM_LANG + 25)
    #define    IDM_LANG_FORTRAN            (IDM_LANG + 26)
    #define    IDM_LANG_BASH               (IDM_LANG + 27)
    #define    IDM_LANG_FLASH              (IDM_LANG + 28)
    #define    IDM_LANG_NSIS               (IDM_LANG + 29)
    #define    IDM_LANG_TCL                (IDM_LANG + 30)
    #define    IDM_LANG_LISP               (IDM_LANG + 31)
    #define    IDM_LANG_SCHEME             (IDM_LANG + 32)
    #define    IDM_LANG_ASM                (IDM_LANG + 33)
    #define    IDM_LANG_DIFF               (IDM_LANG + 34)
    #define    IDM_LANG_PROPS              (IDM_LANG + 35)
    #define    IDM_LANG_PS                 (IDM_LANG + 36)
    #define    IDM_LANG_RUBY               (IDM_LANG + 37)
    #define    IDM_LANG_SMALLTALK          (IDM_LANG + 38)
    #define    IDM_LANG_VHDL               (IDM_LANG + 39)
    #define    IDM_LANG_CAML               (IDM_LANG + 40)
    #define    IDM_LANG_KIX                (IDM_LANG + 41)
    #define    IDM_LANG_ADA                (IDM_LANG + 42)
    #define    IDM_LANG_VERILOG            (IDM_LANG + 43)
    #define    IDM_LANG_AU3                (IDM_LANG + 44)
    #define    IDM_LANG_MATLAB             (IDM_LANG + 45)
    #define    IDM_LANG_HASKELL            (IDM_LANG + 46)
    #define    IDM_LANG_INNO               (IDM_LANG + 47)
    #define    IDM_LANG_CMAKE              (IDM_LANG + 48)
    #define    IDM_LANG_YAML               (IDM_LANG + 49)
    #define    IDM_LANG_COBOL              (IDM_LANG + 50)
    #define    IDM_LANG_D                  (IDM_LANG + 51)
    #define    IDM_LANG_GUI4CLI            (IDM_LANG + 52)
    #define    IDM_LANG_POWERSHELL         (IDM_LANG + 53)
    #define    IDM_LANG_R                  (IDM_LANG + 54)
    #define    IDM_LANG_JSP                (IDM_LANG + 55)

    #define    IDM_LANG_EXTERNAL           (IDM_LANG + 65)
    #define    IDM_LANG_EXTERNAL_LIMIT     (IDM_LANG + 79)

    #define    IDM_LANG_USER               (IDM_LANG + 80)     //46080
    #define    IDM_LANG_USER_LIMIT         (IDM_LANG + 110)    //46110


#define    IDM_ABOUT    (IDM  + 7000)
    #define    IDM_HOMESWEETHOME    (IDM_ABOUT  + 1)
    #define    IDM_PROJECTPAGE      (IDM_ABOUT  + 2)
    #define    IDM_ONLINEHELP       (IDM_ABOUT  + 3)
    #define    IDM_FORUM            (IDM_ABOUT  + 4)
    #define    IDM_PLUGINSHOME      (IDM_ABOUT  + 5)
    #define    IDM_UPDATE_NPP       (IDM_ABOUT  + 6)
    #define    IDM_WIKIFAQ          (IDM_ABOUT  + 7)
    #define    IDM_HELP             (IDM_ABOUT  + 8)


#define    IDM_SETTING    (IDM + 8000)
//    #define    IDM_SETTING_TAB_SIZE                 (IDM_SETTING + 1)
//    #define    IDM_SETTING_TAB_REPLCESPACE          (IDM_SETTING + 2)
//    #define    IDM_SETTING_HISTORY_SIZE             (IDM_SETTING + 3)
//    #define    IDM_SETTING_EDGE_SIZE                (IDM_SETTING + 4)
    #define    IDM_SETTING_IMPORTPLUGIN             (IDM_SETTING + 5)
    #define    IDM_SETTING_IMPORTSTYLETHEMS         (IDM_SETTING + 6)
    #define    IDM_SETTING_TRAYICON                 (IDM_SETTING + 8)
    #define    IDM_SETTING_SHORTCUT_MAPPER          (IDM_SETTING + 9)
    #define    IDM_SETTING_REMEMBER_LAST_SESSION    (IDM_SETTING + 10)
    #define    IDM_SETTING_PREFERECE                (IDM_SETTING + 11)
//    #define    IDM_SETTING_AUTOCNBCHAR              (IDM_SETTING + 15)
    #define	   IDM_SETTING_SHORTCUT_MAPPER_MACRO	(IDM_SETTING + 16)
	#define	   IDM_SETTING_SHORTCUT_MAPPER_RUN		(IDM_SETTING + 17)
	#define	   IDM_SETTING_EDITCONTEXTMENU  	    (IDM_SETTING + 18)

#define    IDM_EXECUTE  (IDM + 9000)

#define IDM_SYSTRAYPOPUP     (IDM + 3100)
    #define IDM_SYSTRAYPOPUP_ACTIVATE         (IDM_SYSTRAYPOPUP + 1)
    #define IDM_SYSTRAYPOPUP_NEWDOC           (IDM_SYSTRAYPOPUP + 2)
    #define IDM_SYSTRAYPOPUP_NEW_AND_PASTE    (IDM_SYSTRAYPOPUP + 3)
    #define IDM_SYSTRAYPOPUP_OPENFILE         (IDM_SYSTRAYPOPUP + 4)
    #define IDM_SYSTRAYPOPUP_CLOSE            (IDM_SYSTRAYPOPUP + 5)

#endif //MENUCMDID_H
