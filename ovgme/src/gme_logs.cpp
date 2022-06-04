/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/
 */

#include "gme.h"
#include "gme_logs.h"
#include "gme_tools.h"

std::wstring g_LogFile;
std::string g_LogHistory;

/*
  get logs history string
*/
std::string GME_LogsHistory()
{
  return g_LogHistory;
}

/*
  function to write a log line in log txt
*/
void GME_Logs(int level, const char* scope, const char* msg, const char* item)
{
  char buffer[32768];

  switch(level) {
  case GME_LOG_FATAL:
    sprintf(buffer, "FATAL: %s:: %s : %s\r\n", scope, msg, item);
    break;
  case GME_LOG_ERROR:
    sprintf(buffer, "ERROR: %s:: %s : %s\r\n", scope, msg, item);
    break;
  case GME_LOG_WARNING:
    sprintf(buffer, "WARNING: %s:: %s : %s\r\n", scope, msg, item);
    break;
  default:
    sprintf(buffer, "NOTICE: %s:: %s : %s\r\n", scope, msg, item);
    break;
  }

  g_LogHistory += buffer;
}

