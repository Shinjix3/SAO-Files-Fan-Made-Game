/*
Event	500
{
	Title
	{
		LANG_KOR	발렌타인 2007
		LANG_ENG
		LANG_JAP
		LANG_CHI
		LANG_THA
		LANG_TWN
		LANG_GER
	}
	Time
	{
		2007	2	13	10
		2007	2	27	10
	}
	Item
	{
		II_SYS_SYS_SCR_VALENTINE	10000	1
	}
}
*/

Event	531	// 출첵 이벤트
{
	Title
	{
		LANG_KOR	출석 이벤트
		LANG_ENG	
		LANG_JAP
		LANG_CHI
		LANG_THA
		LANG_TWN
		LANG_GER	Spielzeit = Belohnungszeit
		LANG_FRE	Votre fidélité est récompensée en Août !
	}
	EventLimitLevel
	{
		1
	}
	CallTheRollItem
	{
		0	II_SYS_SYS_EVE_FUN01		1	0	// 지급 일자(0 일 경우 매일 지급), 아이템 인덱스, 개수, 귀속 여부(0:일반, 2:귀속)
		5	II_CHR_FOO_COO_REMANTIS		3	0
		10	II_SYS_SYS_EVE_FUN01		1	0
		10	II_CHR_FOO_COO_REMANTIS		3	0
		10	II_SYS_SYS_SCR_BX_PET_LEYENA07	1	2
		19	II_CHR_FOO_COO_REMANTIS		3	0
		19	II_SYS_TICKET_KEBARAS001	1	2
		24	II_CHR_FOO_COO_REMANTIS		3	0
		24	II_SYS_SYS_SCR_BX_PET_LEYENA07	1	2
		24	II_GEN_TOO_COL_SILVERBATTERY	1	2
		29	II_CHR_FOO_COO_REMANTIS		3	0
		29	II_SYS_SYS_SCR_AWAKECANCEL	1	0
		29	II_SYS_SYS_SCR_BAGBAG15		1	2
		34	II_CHR_FOO_COO_REMANTIS		3	0
		34	II_SYS_SYS_SCR_AWAKESAFE	1	0
		34	II_SYS_SYS_SCR_BXVISMAGIC01	2	0
		34	II_SYS_SYS_SCR_BXVISMELEE01	2	0
		35	II_CHR_FOO_COO_REMANTIS		5	0
		35	II_SYS_SYS_SCR_PET_MAGIC	1	0
	}
	Time
	{
		2010	07	26	23
		2010	08	31	23
	}
}


Event	501
{
	Title
	{
		LANG_KOR	찾아라!! 보물지도!!
		LANG_ENG
		LANG_JAP
		LANG_CHI
		LANG_THA
		LANG_TWN
		LANG_GER
	}
	Time
	{
		2009	4	3	10
		2009	4	28	00
	}
	Spawn
	{
		OT_ITEM	II_SYS_SYS_EVE_WORLDMAP01	2300	1.5
	}
}

Event	502
{
	Title
	{
		LANG_KOR	
		LANG_ENG
		LANG_JAP
		LANG_CHI
		LANG_THA
		LANG_TWN
		LANG_GER
	}
	Time
	{
		2009	4	3	10
		2009	4	28	00
	}
	Spawn
	{
		OT_ITEM	II_SYS_SYS_EVE_WORLDMAP02	2400	1.5
	}
}