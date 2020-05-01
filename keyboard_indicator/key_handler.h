#ifndef KEY_HANDLER_H
#define KEY_HANDLER_H
// key_hander.h
// get the status of each keys

#define VK_Q 'Q'
#define VK_W 'W'
#define VK_E 'E'
#define VK_R 'R'
#define VK_T 'T'
#define VK_Y 'Y'
#define VK_U 'U'
#define VK_I 'I'
#define VK_O 'O'
#define VK_P 'P'

#define VK_A 'A'
#define VK_S 'S'
#define VK_D 'D'
#define VK_F 'F'
#define VK_G 'G'
#define VK_H 'H'
#define VK_J 'J'
#define VK_K 'K'
#define VK_L 'L'

#define VK_Z 'Z'
#define VK_X 'X'
#define VK_C 'C'
#define VK_V 'V'
#define VK_B 'B'
#define VK_N 'N'
#define VK_M 'M'

typedef enum {
    PRESS,
    HOLD,
    RELEASE,
    IDLE
} key_status;
static key_status key_set[255];

void handle_key();
key_status get_key_status(int key_code);

#endif
