#pragma once

#include "minigamebase.h"

class CMiniGameTyping :	public CMiniGameBase
{
public:
	CMiniGameTyping(void);
	CMiniGameTyping( CMiniGameBase* pMiniGame );
	virtual ~CMiniGameTyping(void);

	virtual BOOL Excute( CUser* pUser, __MINIGAME_PACKET* pMiniGamePacket );

private:
	void	MakeQuestion();	// 문제를 만든다.

	std::vector<std::string>	m_vecTyping;	// 만들어진 문제를 가질 멤버
};

