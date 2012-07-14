# Copyright (C) 2008-2011 TrinityCore <http://www.trinitycore.org/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

set(scripts_STAT_SRCS
  ${scripts_STAT_SRCS}
  Custom/allpurpose.cpp
  Custom/npc_mount.cpp 
  Custom/argent_tournament.cpp
  Custom/aura_stone.cpp
  Custom/item_custom_stone.cpp
  Custom/item_custom_summon.cpp
  Custom/gurubashi_theme.cpp
  Custom/guildmaster.cpp
  Custom/pvpkillstreak.cpp
  Custom/hunterpet_vendor.cpp
)

message("  -> Prepared: Custom")
