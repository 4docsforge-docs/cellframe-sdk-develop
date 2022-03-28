/*
The eXtended Keccak Code Package (XKCP)
https://github.com/XKCP/XKCP

KangarooTwelve, designed by Guido Bertoni, Joan Daemen, Michaël Peeters, Gilles Van Assche, Ronny Van Keer and Benoît Viguier.

Implementation by Gilles Van Assche and Ronny Van Keer, hereby denoted as "the implementer".

For more information, feedback or questions, please refer to the Keccak Team website:
https://keccak.team/

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#include "crypto_hash.h"
#ifndef crypto_hash_BYTES
    #define crypto_hash_BYTES 168
#endif
#include "KangarooTwelve.h"

int crypto_hash( unsigned char *out, const unsigned char *in, unsigned long long inlen )
{
    return KangarooTwelve(in, inlen, out, crypto_hash_BYTES, 0, 0 );
}
