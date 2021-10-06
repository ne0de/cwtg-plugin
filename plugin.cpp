#include <stdio.h>
#include <string.h>

#define SAMPGDK_AMALGAMATION
#include "sampgdk.h"

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerCommandText(int playerid,
                                                   const char *cmdtext) {
  if (strcmp(cmdtext, "/cwtgcreditos") == 0 || strcmp(cmdtext, "/cwtgcredits") == 0) {
	  SendClientMessage(playerid, 0x00FF6AFF, "> Sistema CW/TG desarrollado por Andrew_Manu y leo1q.");
	  SendClientMessage(playerid, 0x00FF6AFF, "> Desarrollador del plugin: Andrew_Manu.");
    return true;
  }
  return false;
}

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() {
  return sampgdk::Supports() | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData) {
  return sampgdk::Load(ppData);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload() {
  sampgdk::Unload();
}
