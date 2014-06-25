#ifndef _CHARPROTOCOL_H
#define _CHARPROTOCOL_H

#include "Protocol.h"

#pragma once

enum eOpcode
{
	UC_LOGIN_REQ = 2000,
	UC_CHARACTER_SERVERLIST_REQ,
	UC_CHARACTER_SERVERLIST_ONE_REQ,
	UC_CHARACTER_ADD_REQ,
	UC_CHARACTER_DEL_REQ,
	UC_CHARACTER_SELECT_REQ,
	UC_CHARACTER_EXIT_REQ,
	UC_CHARACTER_LOAD_REQ,
	UC_CHARACTER_DEL_CANCEL_REQ,
	UC_CONNECT_WAIT_CHECK_REQ,
	UC_CONNECT_WAIT_CANCEL_REQ,
	UC_CHARACTER_RENAME_REQ,

	CU_HEARTBEAT = 3000,
	CU_SERVER_FARM_INFO,
	CU_SERVER_CHANNEL_INFO,
	CU_LOGIN_RES,
	CU_CHARACTER_SERVERLIST_RES,
	CU_CHARACTER_SERVERLIST_ONE_RES,
	CU_CHARACTER_ADD_RES,
	CU_CHARACTER_DEL_RES,
	CU_CHARACTER_SELECT_RES,
	CU_CHARACTER_INFO,
	CU_CHARACTER_LOAD_RES,
	CU_CHARACTER_EXIT_RES,
	CU_CHARACTER_DEL_CANCEL_RES,
	CU_DISCONNECTED_NFY,
	CU_SERVER_FARM_INFO_REFRESHED_NFY,
	CU_SERVER_CHANNEL_INFO_REFRESHED_NFY,
	CU_CONNECT_WAIT_CHECK_RES,
	CU_CONNECT_WAIT_COUNT_NFY,
	CU_CONNECT_WAIT_CANCEL_RES,
	CU_CONNECT_WAIT_CANCEL_NFY,
	CU_CHARACTER_DEL_NFY,
	CU_CHARACTER_RENAME_RES,
};

#pragma pack(1)

BEGIN_PACKET(UC_LOGIN_REQ)
int accountId;
BYTE AuthKey[MAX_AUTHKEY_SIZE];
BYTE serverID;
END_PACKET()

BEGIN_PACKET(CU_LOGIN_RES)
WORD ResultCode;
BYTE lastServerId;
DWORD RaceAllowedFlag;
END_PACKET()

#pragma pack()

#endif