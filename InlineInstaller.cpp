/**********************************************************\

  Auto-generated InlineInstaller.cpp

  This file contains the auto-generated main plugin object
  implementation for the InlineInstaller project

\**********************************************************/

#include "NpapiTypes.h"
#include "InlineInstallerAPI.h"

#include "InlineInstaller.h"

void InlineInstaller::StaticInitialize()
{
    // Place one-time initialization stuff here; note that there isn't an absolute guarantee that
    // this will only execute once per process, just a guarantee that it won't execute again until
    // after StaticDeinitialize is called
}

void InlineInstaller::StaticDeinitialize()
{
    // Place one-time deinitialization stuff here
}


InlineInstaller::InlineInstaller()
{
}

InlineInstaller::~InlineInstaller()
{
}

FB::JSAPI* InlineInstaller::createJSAPI()
{
    // m_host is the BrowserHostWrapper
    return new InlineInstallerAPI(m_host);
}

bool InlineInstaller::onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse down at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool InlineInstaller::onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse up at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}

bool InlineInstaller::onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *)
{
    //printf("Mouse move at: %d, %d\n", evt->m_x, evt->m_y);
    return false;
}
bool InlineInstaller::onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow *)
{
    // The window is attached; act appropriately
    return false;
}

bool InlineInstaller::onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *)
{
    // The window is about to be detached; act appropriately
    return false;
}
