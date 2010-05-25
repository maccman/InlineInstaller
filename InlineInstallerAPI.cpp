/**********************************************************\

  Auto-generated InlineInstallerAPI.cpp

\**********************************************************/

#include "BrowserObjectAPI.h"
#include "variant_list.h"
#include "DOM/JSAPI_DOMDocument.h"

#include "InlineInstallerAPI.h"

InlineInstallerAPI::InlineInstallerAPI(FB::BrowserHostWrapper *host) : m_host(host)
{
    registerMethod("echo",      make_method(this, &InlineInstallerAPI::echo));
    registerMethod("testEvent", make_method(this, &InlineInstallerAPI::testEvent));

    // Read-write property
    registerProperty("testString",
                     make_property(this,
                        &InlineInstallerAPI::get_testString,
                        &InlineInstallerAPI::set_testString));

    // Read-only property
    registerProperty("version",
                     make_property(this,
                        &InlineInstallerAPI::get_version));
    
    
    registerEvent("onfired");    
}

InlineInstallerAPI::~InlineInstallerAPI()
{
}

// Read/Write property testString
std::string InlineInstallerAPI::get_testString()
{
    return m_testString;
}
void InlineInstallerAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string InlineInstallerAPI::get_version()
{
    return "CURRENT_VERSION";
}

// Method echo
FB::variant InlineInstallerAPI::echo(const FB::variant& msg)
{
    return msg;
}

void InlineInstallerAPI::testEvent(const FB::variant& var)
{
    FireEvent("onfired", FB::variant_list_of(var));
}

