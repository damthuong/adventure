#include "GameStateBase.h"

//#include "GSPlay.h"


//#include "GSHighScore.h"


GameStateBase* GameStateBase::CreateState(StateTypes st) {
	GameStateBase* gs = nullptr;
	switch (st)
	{
	case INVALID:
		break;
	case PLAY:
		//gs = new GSPlay();
		break;

	default:
		break;
	}
	return gs;
}