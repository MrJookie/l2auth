#ifndef L2AUTH_LOGIN_GAME_PACKET_CHAR_CREATE_OK_C
#define L2AUTH_LOGIN_GAME_PACKET_CHAR_CREATE_OK_C

#include <core/l2_packet.h>
#include <core/l2_client.h>
#include <game/packet/char_create_ok.h>

l2_packet* game_packet_char_create_ok(struct L2Client* client)
{
        l2_packet_type type = 0x19;
        unsigned int content = 0x01;

        return l2_client_create_packet(
                client,
                type,
                (unsigned char *) &content,
                (unsigned short) sizeof(content)
        );
}

#endif
