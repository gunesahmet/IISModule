#include "precomp.h"


//  Global server instance
IHttpServer * g_pHttpServer = NULL;
//  Global module context id
PVOID g_pModuleContext = NULL;
// Object Helpers IIS
IISHelpers g_IISHelper;

CLog *p_log;
std::atomic<unsigned long> g_requests = 0;
std::string gAppPath;