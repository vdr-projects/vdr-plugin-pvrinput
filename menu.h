/**
 *  pvrinput plugin for the Video Disk Recorder
 *
 *  menu.h  -  setup menu class
 *
 *  (c) 2005 Andreas Regel <andreas.regel AT powarman.de>
 **/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program;                                              *
 *   if not, write to the Free Software Foundation, Inc.,                  *
 *   59 Temple Place, Suite 330, Boston, MA  02111-1307  USA               *
 *                                                                         *
 ***************************************************************************/

#ifndef _PVRINPUT_MENU_H_
#define _PVRINPUT_MENU_H_

#include "common.h"

typedef enum {
  ePicPropBrightness = 0,
  ePicPropContrast,
  ePicPropSaturation,
  ePicPropHue,
  ePicPropTotalNumber
} EPicPropety;

class cPvrMenuSetup : public cMenuSetupPage {
private:
  cPvrSetup newPvrSetup;
protected:
  virtual void Store();
public:
  cPvrMenuSetup();
  virtual eOSState ProcessKey(eKeys Key);
};

class cPvrMenuMain : public cOsdObject {
private:
  cOsd *osd;
  const cFont *font;
  int border;
  int margin;
  int width;
  int height;
  int mode;

  void Draw(void);
public:
  cPvrMenuMain(void);
  virtual ~cPvrMenuMain();
  virtual void Show(void);
  virtual eOSState ProcessKey(eKeys Key);
};

#endif
