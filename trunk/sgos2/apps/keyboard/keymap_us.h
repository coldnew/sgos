/*
 * 美式键盘映射表定义
 * 2007-2-3 21:18 由Flash添加
 */

#define _ KEY_NONE
/* key status
 * __ normal
 * s_ shift+
 * l_ caps+
 * n_ num+
 * e_ shift alt ctrl cap num scr win
 */
#define __	KEYMAP_NORMAL
#define s_	KEYMAP_SHIFT
#define l_	KEYMAP_LETTER
#define n_	KEYMAP_NUMBER
#define e_	KEYMAP_EXTRA

#define USKEYMAP
char *uskeymapstr = "US Keyboard";

KEYMAP KeyMap_US[KEYSNUM] = {
/*                0 */ {__, _, _},
/* ESCAPE         1 */ {__, KEY_ESC, _},
/* 1              2 */ {s_, '1', '!'},
/* 2              3 */ {s_, '2', '@'},
/* 3              4 */ {s_, '3', '#'},
/* 4              5 */ {s_, '4', '$'},
/* 5              6 */ {s_, '5', '%'},
/* 6              7 */ {s_, '6', '^'},
/* 7              8 */ {s_, '7', '&'},
/* 8              9 */ {s_, '8', '*'},
/* 9             10 */ {s_, '9', '('},
/* 0             11 */ {s_, '0', ')'},
/* MINUS         12 */ {s_, '-', '_'},
/* EQUALS        13 */ {s_, '=', '+'},
/* BACK          14 */ {__, KEY_BS, _},
/* TAB           15 */ {__, KEY_TAB, _},
/* Q             16 */ {l_, 'q', 'Q'},
/* W             17 */ {l_, 'w', 'W'},
/* E             18 */ {l_, 'e', 'E'},
/* R             19 */ {l_, 'r', 'R'},
/* T             20 */ {l_, 't', 'T'},
/* Y             21 */ {l_, 'y', 'Y'},
/* U             22 */ {l_, 'u', 'U'},
/* I             23 */ {l_, 'i', 'I'},
/* O             24 */ {l_, 'o', 'O'},
/* P             25 */ {l_, 'p', 'P'},
/* LBRACKET      26 */ {s_, '[', '{'},
/* RBRACKET      27 */ {s_, ']', '}'},
/* RETURN        28 */ {__, KEY_ENTER, _},
/* LCONTROL      29 */ {e_, KEY_LCTRL, KEY_CTRL},
/* A             30 */ {l_, 'a', 'A'},
/* S             31 */ {l_, 's', 'S'},
/* D             32 */ {l_, 'd', 'D'},
/* F             33 */ {l_, 'f', 'F'},
/* G             34 */ {l_, 'g', 'G'},
/* H             35 */ {l_, 'h', 'H'},
/* J             36 */ {l_, 'j', 'J'},
/* K             37 */ {l_, 'k', 'K'},
/* L             38 */ {l_, 'l', 'L'},
/* SEMICOLON     39 */ {s_, ';', ':'},
/* APOSTROPHE    40 */ {s_, '\'', '\"'},
/* GRAVE         41 */ {s_, '`', '~'},
/* LSHIFT        42 */ {e_, KEY_LSHIFT, KEY_SHIFT},
/* BACKSLASH     43 */ {s_, '\\', '|'},
/* Z             44 */ {l_, 'z', 'Z'},
/* X             45 */ {l_, 'x', 'X'},
/* C             46 */ {l_, 'c', 'C'},
/* V             47 */ {l_, 'v', 'V'},
/* B             48 */ {l_, 'b', 'B'},
/* N             49 */ {l_, 'n', 'N'},
/* M             50 */ {l_, 'm', 'M'},
/* COMMA         51 */ {s_, ',', '<'},
/* PERIOD        52 */ {s_, '.', '>'},
/* SLASH         53 */ {s_, '/', '?'},
/* RSHIFT        54 */ {e_, KEY_RSHIFT, KEY_SHIFT},
/* MULTIPLY      55 */ {n_, '*', '*'},
/* LMENU         56 */ {e_, KEY_LALT, KEY_ALT},
/* SPACE         57 */ {__, KEY_SPACE, _},
/* CAPITAL       58 */ {e_, KEY_CAPS, KEY_CAPS},
/* F1            59 */ {__, KEY_F1, _},
/* F2            60 */ {__, KEY_F2, _},
/* F3            61 */ {__, KEY_F3, _},
/* F4            62 */ {__, KEY_F4, _},
/* F5            63 */ {__, KEY_F5, _},
/* F6            64 */ {__, KEY_F6, _},
/* F7            65 */ {__, KEY_F7, _},
/* F8            66 */ {__, KEY_F8, _},
/* F9            67 */ {__, KEY_F9, _},
/* F10           68 */ {__, KEY_F10, _},
/* NUMLOCK       69 */ {e_, KEY_NUMBER, KEY_NUMBER},
/* SCROLL        70 */ {e_, KEY_SCROLL, KEY_SCROLL},
/* NUMPAD7       71 */ {n_, KEY_HOME, '7'},
/* NUMPAD8       72 */ {n_, KEY_UP, '8'},
/* NUMPAD9       73 */ {n_, KEY_PAGEUP, '9'},
/* SUBTRACT      74 */ {n_, '-', '-'},
/* NUMPAD4       75 */ {n_, KEY_LEFT, '4'},
/* NUMPAD5       76 */ {n_, '5', '5'},
/* NUMPAD6       77 */ {n_, KEY_RIGHT, '6'},
/* ADD           78 */ {n_, '+', '+'},
/* NUMPAD1       79 */ {n_, KEY_END, '1'},
/* NUMPAD2       80 */ {n_, KEY_DOWN, '2'},
/* NUMPAD3       81 */ {n_, KEY_PAGEDOWN, '3'},
/* NUMPAD0       82 */ {n_, KEY_INSERT, '0'},
/* DECIMAL       83 */ {n_, KEY_DELETE, '.'},
/*               84 */ {__, _, _},
/*               85 */ {__, _, _},
/* OEM_102       86 */ {__, KEY_OEM_102, _},
/* F11           87 */ {__, KEY_F11, _},
/* F12           88 */ {__, KEY_F12, _},
/*               89 */ {__, _, _},
/*               90 */ {__, _, _},
/*               91 */ {__, _, _},
/*               92 */ {__, _, _},
/*               93 */ {__, _, _},
/*               94 */ {__, _, _},
/*               95 */ {__, _, _},
/*               96 */ {__, _, _},
/*               97 */ {__, _, _},
/*               98 */ {__, _, _},
/*               99 */ {__, _, _},
/* F13          100 */ {__, KEY_F13, _},
/* F14          101 */ {__, KEY_F14, _},
/* F15          102 */ {__, KEY_F15, _},
/*              103 */ {__, _, _},
/*              104 */ {__, _, _},
/*              105 */ {__, _, _},
/*              106 */ {__, _, _},
/*              107 */ {__, _, _},
/*              108 */ {__, _, _},
/*              109 */ {__, _, _},
/*              110 */ {__, _, _},
/*              111 */ {__, _, _},
/* KANA         112 */ {__, KEY_KANA, _},
/*              113 */ {__, _, _},
/*              114 */ {__, _, _},
/* ABNT_C1      115 */ {__, KEY_ABNT_C1, _},
/*              116 */ {__, _, _},
/*              117 */ {__, _, _},
/*              118 */ {__, _, _},
/*              119 */ {__, _, _},
/*              120 */ {__, _, _},
/* CONVERT      121 */ {__, KEY_CONVERT, _},
/*              122 */ {__, _, _},
/* NOCONVERT    123 */ {__, KEY_NOCONVERT, _},
/*              124 */ {__, _, _},
/* YEN          125 */ {__, KEY_YEN, _},
/* ABNT_C2      126 */ {__, KEY_ABNT_C2, _},
/*              127 */ {__, _, _},
/*              128 */ {__, _, _},
/*              129 */ {__, _, _},
/*              130 */ {__, _, _},
/*              131 */ {__, _, _},
/*              132 */ {__, _, _},
/*              133 */ {__, _, _},
/*              134 */ {__, _, _},
/*              135 */ {__, _, _},
/*              136 */ {__, _, _},
/*              137 */ {__, _, _},
/*              138 */ {__, _, _},
/*              139 */ {__, _, _},
/*              140 */ {__, _, _},
/* NUMPADEQUALS 141 */ {n_, KEY_NUMPADEQUALS, KEY_NUMPADEQUALS},
/*              142 */ {__, _, _},
/*              143 */ {__, _, _},
/* PREVTRACK    144 */ {__, KEY_PREVTRACK, _},
/* AT           145 */ {__, KEY_AT, _},
/* COLON        146 */ {__, KEY_COLON, _},
/* UNDERLINE    147 */ {__, KEY_UNDERLINE, _},
/* KANJI        148 */ {__, KEY_KANJI, _},
/* STOP         149 */ {__, KEY_STOP, _},
/* AX           150 */ {__, KEY_AX, _},
/* UNLABELED    151 */ {__, KEY_UNLABELED, _},
/*              152 */ {__, _, _},
/* NEXTTRACK    153 */ {__, KEY_NEXTTRACK, _},
/*              154 */ {__, _, _},
/*              155 */ {__, _, _},
/* NUMPADENTER  156 */ {n_, KEY_ENTER, KEY_ENTER},
/* RCONTROL     157 */ {e_, KEY_RCTRL, KEY_CTRL},
/*              158 */ {__, _, _},
/*              159 */ {__, _, _},
/* MUTE         160 */ {__, KEY_MUTE, _},
/* CALCULATOR   161 */ {__, KEY_CALCULATOR, _},
/* PLAYPAUSE    162 */ {__, KEY_PLAYPAUSE, _},
/*              163 */ {__, _, _},
/* MEDIASTOP    164 */ {__, KEY_MEDIASTOP, _},
/*              165 */ {__, _, _},
/*              166 */ {__, _, _},
/*              167 */ {__, _, _},
/*              168 */ {__, _, _},
/*              169 */ {__, _, _},
/*              170 */ {__, _, _},
/*              171 */ {__, _, _},
/*              172 */ {__, _, _},
/*              173 */ {__, _, _},
/* VOLUMEDOWN   174 */ {__, KEY_VOLUMEDOWN, _},
/*              175 */ {__, _, _},
/* VOLUMEUP     176 */ {__, KEY_VOLUMEUP, _},
/*              177 */ {__, _, _},
/* WEBHOME      178 */ {__, KEY_WEBHOME, _},
/* NUMPADCOMMA  179 */ {n_, KEY_NUMPADCOMMA, KEY_NUMPADCOMMA},
/*              180 */ {__, _, _},
/* DIVIDE       181 */ {n_, '/', '/'},
/*              182 */ {__, _, _},
/* SYSRQ        183 */ {__, KEY_SYSRQ, _},
/* RMENU        184 */ {e_, KEY_RALT, KEY_ALT},
/*              185 */ {__, _, _},
/*              186 */ {__, _, _},
/*              187 */ {__, _, _},
/*              188 */ {__, _, _},
/*              189 */ {__, _, _},
/*              190 */ {__, _, _},
/*              191 */ {__, _, _},
/*              192 */ {__, _, _},
/*              193 */ {__, _, _},
/*              194 */ {__, _, _},
/*              195 */ {__, _, _},
/*              196 */ {__, _, _},
/* PAUSE        197 */ {__, KEY_PAUSE, _},
/*              198 */ {__, _, _},
/* HOME         199 */ {__, KEY_HOME, _},
/* UP           200 */ {__, KEY_UP, _},
/* PRIOR        201 */ {__, KEY_PAGEUP, _},
/*              202 */ {__, _, _},
/* LEFT         203 */ {__, KEY_LEFT, _},
/*              204 */ {__, _, _},
/* RIGHT        205 */ {__, KEY_RIGHT, _},
/*              206 */ {__, _, _},
/* END          207 */ {__, KEY_END, _},
/* DOWN         208 */ {__, KEY_DOWN, _},
/* NEXT         209 */ {__, KEY_PAGEDOWN, _},
/* INSERT       210 */ {__, KEY_INSERT, _},
/* DELETE       211 */ {__, KEY_DELETE, _},
/*              212 */ {__, _, _},
/*              213 */ {__, _, _},
/*              214 */ {__, _, _},
/*              215 */ {__, _, _},
/*              216 */ {__, _, _},
/*              217 */ {__, _, _},
/*              218 */ {__, _, _},
/* LWIN         219 */ {e_, KEY_LWIN, KEY_WIN},
/* RWIN         220 */ {e_, KEY_RWIN, KEY_WIN},
/* APPS         221 */ {__, KEY_APPS, _},
/* POWER        222 */ {__, KEY_POWER, _},
/* SLEEP        223 */ {__, KEY_SLEEP, _},
/*              224 */ {__, _, _},
/*              225 */ {__, _, _},
/*              226 */ {__, _, _},
/* WAKE         227 */ {__, KEY_WAKE, _},
/*              228 */ {__, _, _},
/* WEBSEARCH    229 */ {__, KEY_WEBSEARCH, _},
/* WEBFAVORITES 230 */ {__, KEY_WEBFAVORITES, _},
/* WEBREFRESH   231 */ {__, KEY_WEBREFRESH, _},
/* WEBSTOP      232 */ {__, KEY_WEBSTOP, _},
/* WEBFORWARD   233 */ {__, KEY_WEBFORWARD, _},
/* WEBBACK      234 */ {__, KEY_WEBBACK, _},
/* MYCOMPUTER   235 */ {__, KEY_MYCOMPUTER, _},
/* MAIL         236 */ {__, KEY_MAIL, _},
/* MEDIASELECT  237 */ {__, KEY_MEDIASELECT, _},
/*              238 */ {__, _, _},
/*              239 */ {__, _, _},
/*              240 */ {__, _, _},
/*              241 */ {__, _, _},
/*              242 */ {__, _, _},
/*              243 */ {__, _, _},
/*              244 */ {__, _, _},
/*              245 */ {__, _, _},
/*              246 */ {__, _, _},
/*              247 */ {__, _, _},
/*              248 */ {__, _, _},
/*              249 */ {__, _, _},
/*              250 */ {__, _, _},
/*              251 */ {__, _, _},
/*              252 */ {__, _, _},
/*              253 */ {__, _, _},
/*              254 */ {__, _, _},
/*              255 */ {__, _, _}
};
#undef __
#undef s_
#undef l_
#undef n_
#undef e_
#undef _