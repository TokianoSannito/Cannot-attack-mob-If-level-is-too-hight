//in bool battle_is_attackable(LPCHARACTER ch, LPCHARACTER victim) search:

	if (victim->IsDead())
		return false;
    
//Add Under:

	if (!(victim->IsPC()))
	{
		if (ch->GetLevel() - victim->GetLevel() > 15)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
