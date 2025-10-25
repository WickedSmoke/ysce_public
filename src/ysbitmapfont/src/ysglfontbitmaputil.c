/* ////////////////////////////////////////////////////////////

File Name: ysglfontbitmaputil.c
Copyright (c) 2017 Soji Yamakawa.  All rights reserved.
http://www.ysflight.com

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, 
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
   this list of conditions and the following disclaimer in the documentation 
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS 
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//////////////////////////////////////////////////////////// */

#include <stdio.h>
#include "ysglfontdata.h"

#define CUPP    const unsigned char* const*

const unsigned char * const *YsGlSelectFontBitmapPointerByHeight(int *selectedWidth,int *selectedHeight,int fontHeight)
{
	if(7>=fontHeight)
	{
		*selectedWidth=6;
		*selectedHeight=7;
		return (CUPP) YsFont6x7;
	}
	else if(8>=fontHeight)
	{
		*selectedWidth=6;
		*selectedHeight=8;
		return (CUPP) YsFont6x8;
	}
	else if(10>=fontHeight)
	{
		*selectedWidth=7;
		*selectedHeight=10;
		return (CUPP) YsFont7x10;
	}
	else if(12>=fontHeight)
	{
		*selectedWidth=8;
		*selectedHeight=12;
		return (CUPP) YsFont8x12;
	}
	else if(14>=fontHeight)
	{
		*selectedWidth=10;
		*selectedHeight=14;
		return (CUPP) YsFont10x14;
	}
	else if(16>=fontHeight)
	{
		*selectedWidth=12;
		*selectedHeight=16;
		return (CUPP) YsFont12x16;
	}
	else if(20>=fontHeight)
	{
		*selectedWidth=16;
		*selectedHeight=20;
		return (CUPP) YsFont16x20;
	}
	else if(24>=fontHeight)
	{
		*selectedWidth=16;
		*selectedHeight=24;
		return (CUPP) YsFont16x24;
	}
	else if(28>=fontHeight)
	{
		*selectedWidth=20;
		*selectedHeight=28;
		return (CUPP) YsFont20x28;
	}
	else if(32>=fontHeight)
	{
		*selectedWidth=20;
		*selectedHeight=32;
		return (CUPP) YsFont20x32;
	}
	else if(40>=fontHeight)
	{
		*selectedWidth=24;
		*selectedHeight=40;
		return (CUPP) YsFont24x40;
	}
	else if(44>=fontHeight)
	{
		*selectedWidth=28;
		*selectedHeight=44;
		return (CUPP) YsFont28x44;
	}
	else
	{
		*selectedWidth=32;
		*selectedHeight=48;
		return (CUPP) YsFont32x48;
	}
	// *selectedWidth=0;
	// *selectedHeight=0;
	// return NULL;
}

