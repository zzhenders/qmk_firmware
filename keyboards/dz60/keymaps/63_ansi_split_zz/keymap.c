#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	//Layer 0: qwerty
	LAYOUT_60_ansi_split(
		// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||------2.0-------|
            KC_GRV,   KC_1,    KC_2,    KC_3,   KC_4,   KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_MINS, KC_EQL,      KC_BSPC,
       // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------||----------------|
       //
       // |----1.5-----||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|----1.5-----|
             KC_TAB,      KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC, KC_RBRC,   KC_BSLS,
       // |------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------|
       //
       // |----1.75------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------2.25--------||
             KC_ESC,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,     KC_ENT,
       // |--------------||--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------||
       //
       // |------2.25--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|----2.75----------------||
               KC_LSHIFT,      KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,     KC_RSFT,
       // |------------------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|------------------------||
       //
       // |---1.25---|---1.25---||---1.25---||-------2.25-------||---1.25---|--------2.75----------||----1.25---|---1.25---|---1.25---|---1.25---|
             KC_LCTL,   KC_LALT,    KC_LGUI,         KC_SPC,         MO(1),          MO(3),            KC_RGUI,    KC_RCTL,   KC_RALT,    MO(2)
       // |----------|----------||----------||------------------||----------|----------------------||-----------|----------|----------|----------|
	),

	//Layer 1: arrows / nav / special keys
	LAYOUT_60_ansi_split(
		KC_NO, KC_BRID, KC_BRIU,KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_DEL, 
		KC_NO, KC_NO, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, 
		KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TG(3), KC_NO, KC_NO, KC_NO, KC_NO
	), 
	
	//Layer 2: FN
	LAYOUT_60_ansi_split(
		KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, 
		KC_NO, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, BL_TOGG, BL_STEP, BL_ON, BL_OFF, BL_INC, BL_DEC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS
	), 
	//Layer 3: Mouse
	LAYOUT_60_ansi_split(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_BTN4, KC_MS_U, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_BTN3, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_WH_D, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_ACL0, KC_NO, TG(3), KC_NO, KC_NO, KC_NO, KC_NO
	),
};
