#pragma once

#include "NppWrapper.h"

class NppData;
class SCNotification;

class AutoCompletion
{
public:
	AutoCompletion(NppWrapper);
	~AutoCompletion();

	bool process_notification(SCNotification &n);

protected:
	bool on_char_added(int c);

private:
	bool invoke_gocode();
	static tstring search_cmd();

	NppWrapper _npp;
	tstring _cmd;
};

