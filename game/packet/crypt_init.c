#include <core/l2_packet.h>
#include <core/l2_client.h>
#include <game/packet/crypt_init.h>

l2_packet* game_packet_crypt_init(struct L2Client* client)
{
        l2_packet_type type = 0x00;
        unsigned char content[] = {
                0x01,
                // crypt key
                0x94,
                0x35,
                0x00,
                0x00,
                0xa1,
                0x6c,
                0x54,
                0x87,
        };

        return l2_client_create_packet(
                client,
                type,
                content,
                (unsigned short) sizeof(content)
        );
}
