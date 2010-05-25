/**********************************************************\

  Auto-generated FactoryMain.cpp

  This file contains the auto-generated factory methods
  for the InlineInstaller project

\**********************************************************/

#include "FactoryDefinitions.h"
#include "InlineInstaller.h"

FB::PluginCore *_getMainPlugin()
{
    return new InlineInstaller();
}

void GlobalPluginInitialize()
{
    InlineInstaller::StaticInitialize();
}

void GlobalPluginDeinitialize()
{
    InlineInstaller::StaticDeinitialize();
}
