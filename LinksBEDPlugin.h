#ifndef LINKSBEDPLUGIN_H
#define LINKSBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class LinksBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "LinksBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
