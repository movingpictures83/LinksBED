#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "LinksBEDPlugin.h"

void LinksBEDPlugin::input(std::string file) {
 inputfile = file;
}

void LinksBEDPlugin::run() {}

void LinksBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "linksBed -i";
myCommand += " ";
myCommand += inputfile + " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<LinksBEDPlugin> LinksBEDPluginProxy = PluginProxy<LinksBEDPlugin>("LinksBED", PluginManager::getInstance());
