#ifndef P_CLIENT_H
#define P_CLIENT_H

#include "g_local.h"

// Function declarations
void SP_misc_teleporter_dest(edict_t *ent);
void SP_info_player_start(edict_t *self);
void SP_info_player_deathmatch(edict_t *self);
void SP_info_player_coop(edict_t *self);
void player_pain(edict_t *self, edict_t *other, float kick, int damage);
qboolean IsFemale(edict_t *ent);
void ClientObituary(edict_t *self, edict_t *inflictor, edict_t *attacker);
void TossClientWeapon(edict_t *self);
void LookAtKiller(edict_t *self, edict_t *inflictor, edict_t *attacker);
void player_die(edict_t *self, edict_t *inflictor, edict_t *attacker,
                int damage, vec3_t point);
void InitClientPersistant(gclient_t *client);
void InitClientResp(gclient_t *client);
void SaveClientData(void);
void FetchClientEntData(edict_t *ent);
edict_t *SelectRandomDeathmatchSpawnPoint(void);
edict_t *SelectFarthestDeathmatchSpawnPoint(void);
edict_t *SelectDeathmatchSpawnPoint(void);
edict_t *SelectCoopSpawnPoint(edict_t *ent);
void SelectSpawnPoint(edict_t *ent, vec3_t origin, vec3_t angles);
void body_die(edict_t *self, edict_t *inflictor, edict_t *attacker, int damage,
              vec3_t point);
void respawn(edict_t *self);
void give_item(edict_t *ent, char *name);
void PutClientInServer(edict_t *ent);
void AutoPutClientInServer(edict_t *ent);
void ClientBeginDeathmatch(edict_t *ent);
void ClientBegin(edict_t *ent);
void ClientUserinfoChanged(edict_t *ent, char *userinfo);
qboolean ClientConnect(edict_t *ent, char *userinfo);
void ClientDisconnect(edict_t *ent);
void ClientThink(edict_t *ent, usercmd_t *ucmd);
void Generate_Race_Data(int race_frame, int race_this);

#endif  // P_CLIENT_H
