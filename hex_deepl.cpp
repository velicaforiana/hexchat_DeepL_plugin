/* Hexchat DeepL Plugin
* Copyright (C) 2024 Velica Foriana
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include "hexchat-plugin.h"
#include <string>

#define PNAME "DeepL"
#define PDESC "Provide DeepL assisted translation support"
#define PVERSION "1.0"

static hexchat_plugin *ph;

extern "C" __declspec(dllexport) void hexchat_plugin_get_info(char** name, char** desc, char** version, void** reserved)
{
    *name = (char*)PNAME;
    *desc = (char*)PDESC;
    *version = (char*)PVERSION;
}

extern "C" __declspec(dllexport) int hexchat_plugin_init(hexchat_plugin *plugin_handle, char **plugin_name, char **plugin_desc, char **plugin_version, char *arg)
{
    ph = plugin_handle;
    *plugin_name = (char*)PNAME;
    *plugin_desc = (char*)PDESC;
    *plugin_version = (char*)PVERSION;

    ph->hexchat_printf(ph, PNAME " " PVERSION " loaded\n");
    return 1;
}

extern "C" __declspec(dllexport) int hexchat_plugin_deinit()
{
    ph->hexchat_print(ph, PNAME " unloaded.\n");
    return 1;
}
