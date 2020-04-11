#include <assert.h>
#include <stdlib.h>
#include <login/dto/session_key.h>

void login_session_key_init(struct LoginDtoSessionKey* session)
{
        assert(session);
        session->playOK1 = rand();
        session->playOK2 = rand();
        session->loginOK1 = rand();
        session->loginOK2 = rand();
}
