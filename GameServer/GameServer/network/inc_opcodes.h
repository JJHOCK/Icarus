////////////////////////////////////////////////
// Authors: Tahoma
////////////////////////////////////////////////

#ifndef _INC_OPCODES_H_
#define _INC_OPCODES_H_

#define OPCODE(p1,p2)		{case p1: p2(pck); break;}

// Server to client
#include "./server/SM_UNK24.h"

#include "./server/SM_UNK_1a33.h"
#include "./server/SM_UNK_2213.h"
#include "./server/SM_UNK_2113.h"
#include "./server/SM_UNK_1506.h"
#include "./server/SM_UNK_023e.h"
#include "./server/SM_UNK_033e.h"
#include "./server/SM_UNK_033c.h"
#include "./server/SM_UNK_023c.h"
#include "./server/SM_UNK_0c2b.h"
#include "./server/SM_UNK_0b2b.h"
#include "./server/SM_UNK_9e13.h"
#include "./server/SM_UNK_9d13.h"
#include "./server/SM_UNK_9c13.h"
#include "./server/SM_UNK_420e.h"
#include "./server/SM_UNK_400e.h"
#include "./server/SM_UNK_4b0e.h"
#include "./server/SM_UNK_1933.h"
#include "./server/SM_UNK_2418.h"
#include "./server/SM_UNK_1606.h"
#include "./server/SM_UNK_9813.h"
#include "./server/SM_UNK_0335.h"
#include "./server/SM_UNK_4f0e.h"
#include "./server/SM_SKILL_BUF.h"
#include "./server/SM_UNK_2118.h"
#include "./server/SM_UNK_9713.h"
#include "./server/SM_UNK_3318.h"
#include "./server/SM_CHANGE_CHARACTER.h"
#include "./server/SM_PLAYER_INFO.h"
#include "./server/SM_ANIMATION.h"
#include "./server/SM_UNK_2218.h"
#include "./server/SM_QUEST_MESSAGE.h"
#include "./server/SM_UNK_630e.h"
#include "./server/SM_UNK_2a0f.h"
#include "./server/SM_UNK_5320.h"
#include "./server/SM_PONG.h"
#include "./server/SM_SETAREA.h"
#include "./server/SM_UNK5.h"
#include "./server/SM_UNK4.h"
#include "./server/SM_UNK3.h"
#include "./server/SM_CONNECT.h"
#include "./server/SM_UNK1.h"
#include "./server/SM_UNK5.h"
#include "./server/SM_UNK7.h"
#include "./server/SM_UNK8.h"
#include "./server/SM_UNK9.h"
#include "./server/SM_SECURITY_KEY.h"
#include "./server/SM_UNK11.h"
#include "./server/SM_INVENTORY_RESPONSE.h"
#include "./server/SM_UNK13.h"
#include "./server/SM_UNK14.h"
#include "./server/SM_UNK15.h"
#include "./server/SM_UNK16.h"
#include "./server/SM_QUEST_MAP_POINT.h"
#include "./server/SM_UNK18.h"
#include "./server/SM_CHARACTER_STATS.h"
#include "./server/SM_UNK20.h"
#include "./server/SM_UNK21.h"
#include "./server/SM_GAMEOBJECT_SPAWN.h"
#include "./server/SM_UNK23.h"
#include "./server/SM_UNK25.h"
#include "./server/SM_UNK26.h"
#include "./server/SM_UNK27.h"
#include "./server/SM_UNK28.h"
#include "./server/SM_UNK29.h"
#include "./server/SM_UNK30.h"
#include "./server/SM_UNK31.h"
#include "./server/SM_UNK32.h"
#include "./server/SM_UNK33.h"
#include "./server/SM_SHIPS.h"
#include "./server/SM_UNK35.h"
#include "./server/SM_ACHIEVEMENTS.h"
#include "./server/SM_OBJECT_MOVE.h"
#include "./server/SM_UNK38.h"
#include "./server/SM_SKILLS_PANEL.h"
#include "./server/SM_UNK40.h"
#include "./server/SM_UNK_610e.h"
#include "./server/SM_CHARACTER_STYLE.h"
#include "./server/SM_SKILL_LIST.h"
#include "./server/SM_EXIT.h"
#include "./server/SM_QUESTLIST.h"
#include "./server/SM_DISCONNECT.h"
#include "./server/SM_CHAT.h"
#include "./server/SM_UNK_5220.h"
#include "./server/SM_UNK_2810.h"
#include "./server/SM_UNK_2d18.h"
#include "./server/SM_USE_SKILL.h"
#include "./server/SM_EMOTION.h"
#include "./server/SM_UNK_1418.h"
#include "./server/SM_MOVE.h"
#include "./server/SM_MOVE_MOUSESET.h"
#include "./server/SM_FLY.h"
#include "./server/SM_REMOVE_ITEM_RESP.h"
#include "./server/SM_REMOVE_ITEM.h"
#include "./server/SM_USE0.h"
#include "./server/SM_USE.h"
#include "./server/SM_USE2.h"
#include "./server/SM_USE3.h"
#include "./server/SM_USE4.h"
#include "./server/SM_USE_0f12.h"
#include "./server/SM_UNK_2813.h"
#include "./server/SM_UNK_690f.h"
#include "./server/SM_QUESTSTATEMSG.h"
#include "./server/SM_UNK_0113.h"
#include "./server/SM_OBJECT_DELETE.h"


// Client to server
#include "./client/CM_UNK_1833.h"
#include "./client/CM_SECURITY_KEY.h"
#include "./client/CM_DISCONNECT.h"
#include "./client/CM_PING.h"
#include "./client/CM_CONNECT.h"
#include "./client/CM_UNK2.h"
#include "./client/CM_GETAREA.h"
#include "./client/CM_UNK4.h"
#include "./client/CM_UNK5.h"
#include "./client/CM_UNK6.h"
#include "./client/CM_GET_SECURITY_KEY.h"
#include "./client/CM_UNK8.h"
#include "./client/CM_UNK9.h"
#include "./client/CM_UNK10.h"
#include "./client/CM_UNK11.h"
#include "./client/CM_UNK12.h"
#include "./client/CM_UNK13.h"
#include "./client/CM_ACHIEVEMENTS.h"
#include "./client/CM_UNK15.h"
#include "./client/CM_INVENTORY.h"
#include "./client/CM_UNK17.h"
#include "./client/CM_SKILL_LIST.h"
#include "./client/CM_UNK19.h"
#include "./client/CM_UNK20.h"
#include "./client/CM_SKILL_PANEL.h"
#include "./client/CM_CHARACTER_STYLE.h"
#include "./client/CM_UNK23.h"
#include "./client/CM_UNK24.h"
#include "./client/CM_UNK25.h"
#include "./client/CM_UNK26.h"
#include "./client/CM_UNK27.h"
#include "./client/CM_UNK28.h"
#include "./client/CM_GAMEOBJECT_INFO.h"
#include "./client/CM_EXIT.h"
#include "./client/CM_UNK_5120.h"
#include "./client/CM_CHAT.h"
#include "./client/CM_QUESTLIST.h"
#include "./client/CM_MOVE.h"
#include "./client/CM_TARGET.h"
#include "./client/CM_EMOTION.h"
#include "./client/CM_EMOTION2.h"
#include "./client/CM_UNK_2c18.h"
#include "./client/CM_USE_SKILL.h"
#include "./client/CM_INVENTORY_MOVE.h"
#include "./client/CM_JUMP.h"
#include "./client/CM_UPDATE_POSITION.h"
#include "./client/CM_ACTION_STOP.h"
#include "./client/CM_MOVE_MOUSESET.h"
#include "./client/CM_FLY.h"
#include "./client/CM_REMOVE_ITEM.h"
#include "./client/CM_USE0.h"
#include "./client/CM_USE.h"
#include "./client/CM_USE2.h"
#include "./client/CM_UNK_8c18.h"
#include "./client/CM_UNK_2913.h"
#include "./client/CM_SKILLS_PANEL_MOVE.h"

#endif INC_OPCODES_H_


