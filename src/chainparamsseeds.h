#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */

static SeedSpec6 pnSeed6_main[] = {                                                            
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x09,0xfd,0xc3}, 57777},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x45,0x1e,0xdb,0xf2}, 57777} 
};                                                                                             

static SeedSpec6 pnSeed6_test[] = {
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x99,0xcb,0x26,0x31,0xba,0x48,0x51,0x31,0x39,0x0d}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x44,0xf4,0xf4,0xf0,0xbf,0xf7,0x7e,0x6d,0xc4,0xe8}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x6a,0x8b,0xd2,0x78,0x3f,0x7a,0xf8,0x92,0x8f,0x80}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xe6,0x4e,0xa4,0x47,0x4e,0x2a,0xfe,0xe8,0x95,0xcc}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x9f,0xae,0x9f,0x59,0x0b,0x3f,0x31,0x3a,0x8a,0x5f}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x47,0xb1,0xe4,0x55,0xd1,0xb0,0x14,0x3f,0xb6,0xdb}, 18333},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xa0,0x60,0x9e,0x46,0x54,0xdb,0x61,0x3b,0xb2,0x6f}, 18333}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
