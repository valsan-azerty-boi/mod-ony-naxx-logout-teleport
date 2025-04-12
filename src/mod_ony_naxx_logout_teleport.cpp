#include "ScriptMgr.h"
#include "Player.h"
#include "Map.h"
#include "WorldSession.h"

class OnyNaxxLogoutTeleport : public PlayerScript
{
public:
	OnyNaxxLogoutTeleport() : PlayerScript("OnyNaxxLogoutTeleport") {}

	void OnPlayerLogin(Player *player) override
	{
		TeleportIfNeeded(player);
	}

	void OnPlayerLogout(Player *player) override
	{
		TeleportIfNeeded(player);
	}

	void OnPlayerBeforeLogout(Player *player) override
	{
		TeleportIfNeeded(player);
	}

private:
	void TeleportIfNeeded(Player *player)
	{
		int mapId = player->GetMapId();
		if (player->GetRaidDifficulty() != 2)
			return;

		switch (mapId)
		{
			case 533:
				player->TeleportTo(0, 3082.641602f, -3725.781250f, 132.418884f, 0.002488f);
				break;
			case 249:
				player->TeleportTo(1, -4737.995f, -3745.33f, 53.68f, 0.002488f);
				break;
			default:
				break;
		}
	}
};

void AddSC_mod_ony_naxx_logout_teleport()
{
	new OnyNaxxLogoutTeleport();
}
