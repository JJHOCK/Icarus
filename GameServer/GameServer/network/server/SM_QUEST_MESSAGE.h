////////////////////////////////////////////////
// Authors: Tahoma
////////////////////////////////////////////////

#ifndef _SM_UNK_3311_H_
#define _SM_UNK_3311_H_

inline void SM_QUEST_MESSAGE(PACKET* pck)
{
	pck->CreateBufForSend();
	pck->writeA("0F0034BB15C880AC1DAC000000000000000000000000000000000000000000000000000000000000655F35305F305F303634385F30303033000000000067645F6C655F30305F303030350000000000000000005F");
	pck->PackSend(OPCODE_SM_QUEST_MESSAGE);
}

/*
11 00 00 00 0F 00 34 BB 15 C8 80 AC 1D AC 00 00   .3....4.........
00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00   ................
00 00 00 00 00 00 00 00 00 00 00 00 65 5F 35 30   ............e_50
5F 30 5F 30 36 34 38 5F 30 30 30 33 00 00 00 00   _0_0648_0003....
00 67 64 5F 6C 65 5F 30 30 5F 30 30 30 35 00 00   .gd_le_00_0005..
00 00 00 00 00 00 00 5F                           ......._
*/

#endif
