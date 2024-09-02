#include "ScriptMgr.h"
#include "Player.h"
#include "Map.h"
#include "WorldSession.h"

class OnyNaxxLogoutTeleport : public PlayerScript
{
public:
	OnyNaxxLogoutTeleport() : PlayerScript("OnyNaxxLogoutTeleport") {}

	void OnLogin(Player *player) override
	{
		if (player->GetMapId() == 533)
		{
			player->TeleportTo(0, 3082.641602f, -3725.781250f, 132.418884f, 0.002488f);
		}
		else if (player->GetMapId() == 249)
		{
			player->TeleportTo(1, -4737.995f, -3745.33f, 53.68f, 0.002488f);
		}
	}
};

void AddSC_mod_ony_naxx_logout_teleport()
{
	new OnyNaxxLogoutTeleport();
}
