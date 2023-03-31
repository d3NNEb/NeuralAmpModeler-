/*
 ==============================================================================

 This file is part of the iPlug 2 library. Copyright (C) the iPlug 2 developers.

 See LICENSE.txt for  more info.

 ==============================================================================
*/

#pragma once

#include <windows.h>
#include <windowsx.h>
#include <winuser.h>
#include <IControls.h>
#include <filesystem>
#include <set>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

#include "IGraphics_select.h"

#define BEGIN_IFOLDERBROWSER_NAMESPACE namespace igraphics {

//BEGIN_IFOLDERBROWSER_NAMESPACE

/** IGraphics platform class for Windows
 * @ingroup PlatformClasses */
  class IFolderBrowserWin {
public
    IFolderBrowserWin::FolderBrowserWin(IGraphics *pGraphics);
  //FolderBrowser(){};
  //}
 // FolderBrowser::FolderBrowser(IGraphics *pGraphics);


//public:
    void IFolderBrowserWin::CarlTest(WDL_String &fileName) override; // carlo
    //  

protected:
  

private:
  //inline static IGraphics *lGraphics;
  inline static int l_iCurrentNAMIndex = 0;
  inline static int l_iCurrentIRIndex = 0;
  inline static std::vector<std::string> _oNAMs;
  inline static std::string _oCurrentNAM;
  inline static std::vector<std::string> _oIRs;
  inline static std::string _oCurrentIR;
  

//END_IGFOLDERBROWSER_NAMESPACE
