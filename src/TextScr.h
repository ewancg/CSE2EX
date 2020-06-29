#pragma once

#include "WindowsWrapper.h"
#include <string>

typedef struct TEXT_SCRIPT
{
	// Path (reload when exit teleporter menu/inventory)
	std::string path;

	// Script buffer
	long size;
	char *data;

	// Mode (ex. NOD, WAI)
	signed char mode;

	// Flags
	signed char flags;

	// Current positions (read position in buffer, x position in line)
	int p_read;
	int p_write;

	// Current line to write to
	int line;

	// Line y positions
	int ypos_line[4];

	// Event stuff
	int wait;
	int wait_next;
	int next_event;

	// Yes/no selected
	signed char select;

	// Current face
	int face;
	int face_x;

	// Current item
	int item;
	int item_y;

	// Text rect
	RECT rcText;

	// ..?
	int offsetY;

	// NOD cursor blink
	unsigned char wait_beam;
} TEXT_SCRIPT;

extern TEXT_SCRIPT gTS;

extern const RECT gRect_line;

BOOL InitTextScript2(void);
void EndTextScript(void);
void EncryptionBinaryData2(unsigned char *pData, long size);
BOOL LoadTextScript2(const char *name);
BOOL LoadTextScript_Stage(const char *name);
std::string GetTextScriptPath();
BOOL StartTextScript(int no);
void StopTextScript(void);
void PutTextScript(void);
int TextScriptProc(void);
void RestoreTextScript(void);
