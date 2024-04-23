
****** Alphas

#+NAME: qwerty
| Q    | W    | E    | R    | T    | Y    | U    | I    | O    | P    |
| A    | S    | D    | F    | G    | H    | J    | K    | L    | '    |
| Z    | X    | C    | V    | B    | N    | M    | ,    | DOT  | /    |


****** Thumbs

#+NAME: thumbs
| U_NP  | U_NP  | ESC   | TAB   | BSPC  | SPC   | ENT   | DEL   | U_NP  | U_NP  |


***** Hold

#+NAME: hold
| RESET  |        |        |        |        |        |        |        |        | RESET  |
| LGUI   | LALT   | LCTL   | LSFT   |        |        | LSFT   | LCTL   | LALT   | LGUI   |
| BUTTON | ALGR   |        |        |        |        |        |        | ALGR   | BUTTON |
| U_NP   | U_NP   | MEDIA  | NAV    | MOUSE  | SYM    | NUM    | FUN    | U_NP   | U_NP   |

**** Num

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-num.png]]

Primary left-hand layer (right home thumb) is numerals and symbols.  Numerals
are in the standard numpad locations with symbols in the remaining positions.
Dot is duplicated from the base layer.

#+NAME: num-l
| [    | 7    | 8    | 9    | ]    |
| ;    | 4    | 5    | 6    | =    |
| `    | 1    | 2    | 3    | \    |
| U_NP | U_NP | DOT  | 0    | MINS |


**** Sym

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-sym.png]]

Secondary left-hand layer has shifted symbols in the same locations to reduce
chording when using mods with shifted symbols.  Open parenthesis is duplicated
next to close parenthesis.

#+NAME: sym-l
| {    | &    | *    | (    | }    |
| :    | $    | %    | ^    | +    |
| ~    | !    | @    | #    | PIPE |
| U_NP | U_NP | (    | )    | _    |



**** Nav

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-nav.png]]

Primary right-hand layer (left home thumb) is navigation and editing.  Cursor
keys are on the home position, line and page movement below, clipboard above,
caps lock and insert on the inner column.  Thumb keys are duplicated from the
base layer to avoid having to layer change mid edit and to enable auto-repeat.

Alternative clipboard key mappings and navigation key arrangements are
available.

#+NAME: nav-r
| U_RDO | U_PST | U_CPY | U_CUT | U_UND |
| CAPS  | LEFT  | DOWN  | UP    | RGHT  |
| INS   | HOME  | PGDN  | PGUP  | END   |
| ENT   | BSPC  | DEL   | U_NP  | U_NP  |


**** Mouse

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-mouse.png]]

Secondary right-hand layer is mouse emulation.  Mouse movement mirrors cursor
navigation on home and wheel mirrors line / page movement below.  Buttons are on
the thumbs (L, M, R).  Mouse movement, click, and drag, with modifiers, can be
performed from the home position.  Clipboard keys are duplicated from the Nav
layer.

#+NAME: mouse-r
| U_RDO | U_PST | U_CPY | U_CUT | U_UND |
|       | MS_L  | MS_D  | MS_U  | MS_R  |
|       | WH_L  | WH_D  | WH_U  | WH_R  |
| BTN1  | BTN3  | BTN2  | U_NP  | U_NP  |


**** Button

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-button.png]]

Provides mouse buttons, mods, and clipboard keys for use with integrated or
external pointing devices, used with either hand.  The layer is available for
automatic activation depending on hardware and configuration.  It can also be
activated manually by holding a bottom row pinkie key (however GUI and Undo will
be unavailable).

#+NAME: button
| U_UND | U_CUT | U_CPY | U_PST | U_RDO | U_RDO | U_PST | U_CPY | U_CUT | U_UND |
| LGUI  | LALT  | LCTL  | LSFT  |       |       | LSFT  | LCTL  | LALT  | LGUI  |
| U_UND | U_CUT | U_CPY | U_PST | U_RDO | U_RDO | U_PST | U_CPY | U_CUT | U_UND |
| U_NP  | U_NP  | BTN2  | BTN3  | BTN1  | BTN1  | BTN3  | BTN2  | U_NP  | U_NP  |


**** Media

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-media.png]]

Tertiary right-hand layer is media control, with volume up / down and next /
prev mirroring the navigation keys.  Pause, stop and mute are on thumbs.  RGB
control is on the top row (combine with shift to invert).  Unused keys are
available for other related functions.

#+NAME: media-r
| RGB_TOG | RGB_MOD | RGB_HUI | RGB_SAI | RGB_VAI |
|         | MPRV    | VOLD    | VOLU    | MNXT    |
|         |         |         |         |         |
| MSTP    | MPLY    | MUTE    | U_NP    | U_NP    |


**** Fun

[[https://raw.githubusercontent.com/manna-harbour/miryoku/master/data/layers/miryoku-kle-fun.png]]

Tertiary left-hand layer has function keys mirroring the numerals on the primary
layer with extras on the pinkie column, plus system keys on the inner column.
App (menu) is on the tertiary thumb key and other thumb keys are duplicated from
the base layer to enable auto-repeat.


#+NAME: fun-l
| F12  | F7   | F8   | F9   | PSCR |
| F11  | F4   | F5   | F6   | SLCK |
| F10  | F1   | F2   | F3   | PAUS |
| U_NP | U_NP | APP  | SPC  | TAB  |


