#include <iostream>
#include "key_handler.h"

int main()
{
    key_status keys[255];

    while (true) {
        handle_key();
        // action excuted when a key is pressed
    }

    return 0;
}
