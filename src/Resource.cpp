#include <stdint.h>
#include <string>

#include <SDL_rwops.h>
#include "WindowsWrapper.h"

#include "Resource/ORG/ACCESS.h"
#include "Resource/ORG/ANZEN.h"
#include "Resource/ORG/BALCONY.h"
#include "Resource/ORG/BALLOS.h"
#include "Resource/ORG/BDOWN.h"
#include "Resource/ORG/CEMETERY.h"
#include "Resource/ORG/CURLY.h"
#include "Resource/ORG/DR.h"
#include "Resource/ORG/ENDING.h"
#include "Resource/ORG/ESCAPE.h"
#include "Resource/ORG/FANFALE1.h"
#include "Resource/ORG/FANFALE2.h"
#include "Resource/ORG/FANFALE3.h"
#include "Resource/ORG/FIREEYE.h"
#include "Resource/ORG/GAMEOVER.h"
#include "Resource/ORG/GINSUKE.h"
#include "Resource/ORG/GRAND.h"
#include "Resource/ORG/GRAVITY.h"
#include "Resource/ORG/HELL.h"
#include "Resource/ORG/IRONH.h"
#include "Resource/ORG/JENKA.h"
#include "Resource/ORG/JENKA2.h"
#include "Resource/ORG/KODOU.h"
#include "Resource/ORG/LASTBT3.h"
#include "Resource/ORG/LASTBTL.h"
#include "Resource/ORG/LASTCAVE.h"
#include "Resource/ORG/MARINE.h"
#include "Resource/ORG/MAZE.h"
#include "Resource/ORG/MDOWN2.h"
#include "Resource/ORG/MURA.h"
#include "Resource/ORG/OSIDE.h"
#include "Resource/ORG/PLANT.h"
#include "Resource/ORG/QUIET.h"
#include "Resource/ORG/REQUIEM.h"
#include "Resource/ORG/TOROKO.h"
#include "Resource/ORG/VIVI.h"
#include "Resource/ORG/WANPAK2.h"
#include "Resource/ORG/WANPAKU.h"
#include "Resource/ORG/WEED.h"
#include "Resource/ORG/WHITE.h"
#include "Resource/ORG/XXXX.h"
#include "Resource/ORG/ZONBIE.h"
#include "Resource/WAVE/WAVE100.h"
#include "Resource/Bitmap/CREDIT01.h"
#include "Resource/Bitmap/CREDIT02.h"
#include "Resource/Bitmap/CREDIT03.h"
#include "Resource/Bitmap/CREDIT04.h"
#include "Resource/Bitmap/CREDIT05.h"
#include "Resource/Bitmap/CREDIT06.h"
#include "Resource/Bitmap/CREDIT07.h"
#include "Resource/Bitmap/CREDIT08.h"
#include "Resource/Bitmap/CREDIT09.h"
#include "Resource/Bitmap/CREDIT10.h"
#include "Resource/Bitmap/CREDIT11.h"
#include "Resource/Bitmap/CREDIT12.h"
#include "Resource/Bitmap/CREDIT14.h"
#include "Resource/Bitmap/CREDIT15.h"
#include "Resource/Bitmap/CREDIT16.h"
#include "Resource/Bitmap/CREDIT17.h"
#include "Resource/Bitmap/CREDIT18.h"
#include "Resource/Bitmap/PIXEL.h"
#include "Resource/Icon/ICON4.h"

const unsigned char* GetResource(const char *name, size_t *size)
{
	//ORG
	if (!strcmp(name, "ACCESS"))
	{
		*size = sizeof(rACCESS);
		return rACCESS;
	}
	if (!strcmp(name, "ANZEN"))
	{
		*size = sizeof(rANZEN);
		return rANZEN;
	}
	if (!strcmp(name, "BALCONY"))
	{
		*size = sizeof(rBALCONY);
		return rBALCONY;
	}
	if (!strcmp(name, "BALLOS"))
	{
		*size = sizeof(rBALLOS);
		return rBALLOS;
	}
	if (!strcmp(name, "BDOWN"))
	{
		*size = sizeof(rBDOWN);
		return rACCESS;
	}
	if (!strcmp(name, "CEMETERY"))
	{
		*size = sizeof(rCEMETERY);
		return rCEMETERY;
	}
	if (!strcmp(name, "CURLY"))
	{
		*size = sizeof(rCURLY);
		return rCURLY;
	}
	if (!strcmp(name, "DR"))
	{
		*size = sizeof(rDR);
		return rDR;
	}
	if (!strcmp(name, "ENDING"))
	{
		*size = sizeof(rENDING);
		return rENDING;
	}
	if (!strcmp(name, "ESCAPE"))
	{
		*size = sizeof(rESCAPE);
		return rESCAPE;
	}
	if (!strcmp(name, "FANFALE1"))
	{
		*size = sizeof(rFANFALE1);
		return rFANFALE1;
	}
	if (!strcmp(name, "FANFALE2"))
	{
		*size = sizeof(rFANFALE2);
		return rFANFALE2;
	}
	if (!strcmp(name, "FANFALE3"))
	{
		*size = sizeof(rFANFALE3);
		return rFANFALE3;
	}
	if (!strcmp(name, "FIREEYE"))
	{
		*size = sizeof(rFIREEYE);
		return rFIREEYE;
	}
	if (!strcmp(name, "GAMEOVER"))
	{
		*size = sizeof(rGAMEOVER);
		return rGAMEOVER;
	}
	if (!strcmp(name, "GINSUKE"))
	{
		*size = sizeof(rGINSUKE);
		return rGINSUKE;
	}
	if (!strcmp(name, "GRAND"))
	{
		*size = sizeof(rGRAND);
		return rGRAND;
	}
	if (!strcmp(name, "GRAVITY"))
	{
		*size = sizeof(rGRAVITY);
		return rGRAVITY;
	}
	if (!strcmp(name, "HELL"))
	{
		*size = sizeof(rHELL);
		return rHELL;
	}
	if (!strcmp(name, "IRONH"))
	{
		*size = sizeof(rIRONH);
		return rIRONH;
	}
	if (!strcmp(name, "JENKA"))
	{
		*size = sizeof(rJENKA);
		return rJENKA;
	}
	if (!strcmp(name, "JENKA2"))
	{
		*size = sizeof(rJENKA2);
		return rJENKA2;
	}
	if (!strcmp(name, "KODOU"))
	{
		*size = sizeof(rKODOU);
		return rKODOU;
	}
	if (!strcmp(name, "LASTBT3"))
	{
		*size = sizeof(rLASTBT3);
		return rLASTBT3;
	}
	if (!strcmp(name, "LASTBTL"))
	{
		*size = sizeof(rLASTBTL);
		return rLASTBTL;
	}
	if (!strcmp(name, "LASTCAVE"))
	{
		*size = sizeof(rLASTCAVE);
		return rLASTCAVE;
	}
	if (!strcmp(name, "MARINE"))
	{
		*size = sizeof(rMARINE);
		return rMARINE;
	}
	if (!strcmp(name, "MAZE"))
	{
		*size = sizeof(rMAZE);
		return rMAZE;
	}
	if (!strcmp(name, "MDOWN2"))
	{
		*size = sizeof(rMDOWN2);
		return rMDOWN2;
	}
	if (!strcmp(name, "MURA"))
	{
		*size = sizeof(rMURA);
		return rMURA;
	}
	if (!strcmp(name, "OSIDE"))
	{
		*size = sizeof(rOSIDE);
		return rOSIDE;
	}
	if (!strcmp(name, "PLANT"))
	{
		*size = sizeof(rPLANT);
		return rPLANT;
	}
	if (!strcmp(name, "QUIET"))
	{
		*size = sizeof(rQUIET);
		return rQUIET;
	}
	if (!strcmp(name, "REQUIEM"))
	{
		*size = sizeof(rREQUIEM);
		return rREQUIEM;
	}
	if (!strcmp(name, "TOROKO"))
	{
		*size = sizeof(rTOROKO);
		return rTOROKO;
	}
	if (!strcmp(name, "VIVI"))
	{
		*size = sizeof(rVIVI);
		return rVIVI;
	}
	if (!strcmp(name, "WANPAK2"))
	{
		*size = sizeof(rWANPAK2);
		return rWANPAK2;
	}
	if (!strcmp(name, "WANPAKU"))
	{
		*size = sizeof(rWANPAKU);
		return rWANPAKU;
	}
	if (!strcmp(name, "WEED"))
	{
		*size = sizeof(rWEED);
		return rWEED;
	}
	if (!strcmp(name, "WHITE"))
	{
		*size = sizeof(rWHITE);
		return rWHITE;
	}
	if (!strcmp(name, "XXXX"))
	{
		*size = sizeof(rXXXX);
		return rXXXX;
	}
	if (!strcmp(name, "ZONBIE"))
	{
		*size = sizeof(rZONBIE);
		return rZONBIE;
	}
	
	//WAVE
	if (!strcmp(name, "WAVE100"))
	{
		*size = sizeof(rWAVE100);
		return rWAVE100;
	}
	
	//Bitmap
	if (!strcmp(name, "CREDIT01"))
	{
		*size = sizeof(rCREDIT01);
		return rCREDIT01;
	}
	if (!strcmp(name, "CREDIT02"))
	{
		*size = sizeof(rCREDIT02);
		return rCREDIT02;
	}
	if (!strcmp(name, "CREDIT03"))
	{
		*size = sizeof(rCREDIT03);
		return rCREDIT03;
	}
	if (!strcmp(name, "CREDIT04"))
	{
		*size = sizeof(rCREDIT04);
		return rCREDIT04;
	}
	if (!strcmp(name, "CREDIT05"))
	{
		*size = sizeof(rCREDIT05);
		return rCREDIT05;
	}
	if (!strcmp(name, "CREDIT06"))
	{
		*size = sizeof(rCREDIT06);
		return rCREDIT06;
	}
	if (!strcmp(name, "CREDIT07"))
	{
		*size = sizeof(rCREDIT07);
		return rCREDIT07;
	}
	if (!strcmp(name, "CREDIT08"))
	{
		*size = sizeof(rCREDIT08);
		return rCREDIT08;
	}
	if (!strcmp(name, "CREDIT09"))
	{
		*size = sizeof(rCREDIT09);
		return rCREDIT09;
	}
	if (!strcmp(name, "CREDIT10"))
	{
		*size = sizeof(rCREDIT10);
		return rCREDIT10;
	}
	if (!strcmp(name, "CREDIT11"))
	{
		*size = sizeof(rCREDIT11);
		return rCREDIT11;
	}
	if (!strcmp(name, "CREDIT12"))
	{
		*size = sizeof(rCREDIT12);
		return rCREDIT12;
	}
	if (!strcmp(name, "CREDIT14"))
	{
		*size = sizeof(rCREDIT14);
		return rCREDIT14;
	}
	if (!strcmp(name, "CREDIT15"))
	{
		*size = sizeof(rCREDIT15);
		return rCREDIT15;
	}
	if (!strcmp(name, "CREDIT16"))
	{
		*size = sizeof(rCREDIT16);
		return rCREDIT16;
	}
	if (!strcmp(name, "CREDIT17"))
	{
		*size = sizeof(rCREDIT17);
		return rCREDIT17;
	}
	if (!strcmp(name, "CREDIT18"))
	{
		*size = sizeof(rCREDIT18);
		return rCREDIT18;
	}
	if (!strcmp(name, "PIXEL"))
	{
		*size = sizeof(rPIXEL);
		return rPIXEL;
	}
	
	//ICON
	if (!strcmp(name, "ICON4"))
	{
		*size = sizeof(rICON4);
		return rICON4;
	}
	return NULL;
}

SDL_RWops* FindResource(const char *name)
{
	size_t resSize;
	const unsigned char* resource = GetResource(name, &resSize);
	
	if (!resource)
		return NULL;
	
	SDL_RWops *fp = SDL_RWFromConstMem(resource, resSize);
	
	if (!fp)
	{
		printf("Couldn't open resource %s\nSDL Error: %s\n", name, SDL_GetError());
		return NULL;
	}
	
	return fp;
}