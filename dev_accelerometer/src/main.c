// =============================================================================
//  Header
// =============================================================================

#include <czmq.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

volatile int gIsOk;


// =============================================================================
//  Event
// =============================================================================

void my_handler(int s) {
    printf("fim\n");
    gIsOk = 0;
}


// =============================================================================
//  Main
// =============================================================================

int main (void)
{
    gIsOk = 1;
    zsock_t *push = zsock_new_push ("tcp://127.0.0.1:5555");
    signal (SIGQUIT,my_handler);
    signal (SIGINT,my_handler);
    while ( gIsOk == 1 ) {
        printf("enviando...\n");
        const char* msg = "{'x': 1.0, 'y': 2.0, 'z': 3.0}";
        zstr_send (push, msg);
        sleep(1);
    }
    zsock_destroy (&push);
    return 0;
}
