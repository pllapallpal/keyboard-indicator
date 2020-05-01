#include "key_handler.h"
#include <Windows.h>

void handle_key()
{
    for (int i = 0; i < 255; ++i) {
        if (GetAsyncKeyState(i) & 0x8000) {
            if (key_set[i] == IDLE) {
                key_set[i] = PRESS;
            }
            else if (key_set[i] == PRESS) {
                key_set[i] = HOLD;
            }
        }
        else if (!GetAsyncKeyState(i)) {
            if (key_set[i] == PRESS || key_set[i] == HOLD) {
                key_set[i] = RELEASE;
            }
            else if (key_set[i] == RELEASE) {
                key_set[i] = IDLE;
            }
        }
    }
}

key_status get_key_status(int key_code) {
    return key_set[key_code];
}
