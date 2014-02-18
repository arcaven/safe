/*
  Safe: Encrypted File System
  Copyright (C) 2014 Rian Hunter <rian@alum.mit.edu>

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef _safe_system_changes_dialog_win_hpp
#define _safe_system_changes_dialog_win_hpp

#include <safe/lean_windows.h>

namespace safe { namespace win {

enum class SystemChangesChoice {
  NOTHING=1,
  QUIT,
  OK,
};

SystemChangesChoice
system_changes_dialog(HWND hwnd);

}}

#endif