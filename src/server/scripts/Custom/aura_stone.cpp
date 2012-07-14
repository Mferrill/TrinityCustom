// -=/PryDevCore\=-
//      
// Development For The Community 2011
// 
// Main Site- http://prydevserver.com/ - http://PDS-Uc.org
// Community Forum- http://prydevserver.com/forums/
// Main Repository- http://sf.net/projects/prydevserver/
//
// Original Script created by 2dgreengiant  2011
// Recreated into an item by Pryd
//


enum Spells
{
    MIGHT_OF_MOGRAINE        =    53642, // Put your own spell name + id here
    //VENGEANCE        =    39444,
};

class ItemUse_item_custom_stone2 : public ItemScript
{
    public:

        ItemUse_item_custom_stone2()
            : ItemScript("item_custom_stone2")
        {
        }

	bool OnUse(Player* pPlayer, Item* pItem, const SpellCastTargets &pTargets)
  	{
    	if ((pPlayer->isInCombat()) || (pPlayer->isInFlight()) || (pPlayer->isDead()))
    	{
      	pPlayer->SendEquipError(EQUIP_ERR_NOT_IN_COMBAT, pItem, NULL);
        return false;
    	}
    	if (pPlayer->IsMounted())
    	{
      	pPlayer->SendEquipError(EQUIP_ERR_CANT_DO_RIGHT_NOW, pItem, NULL);
        return true;
    	}
    	{
      //pPlayer->SetFreeTalentPoints(1);
      //pPlayer->SendTalentsInfoData(false);
      pPlayer->AddAura(MIGHT_OF_MOGRAINE, pPlayer);
      pPlayer->DestroyItemCount(pItem->GetEntry(),1,true);
      return true;
  		}

	}
};



void AddSC_item_custom_stone2()
{
    new ItemUse_item_custom_stone2();
}