#!/bin/bash
################################################################################
#
#  Copyright (C) 2008, 2018 SES ENGINEERING, Luxembourg S.A.R.L.
#
#  This file is part of SPELL.
#
#  SPELL is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  SPELL is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with SPELL. If not, see <http://www.gnu.org/licenses/>.
#
################################################################################

echo "\
$(cat $1 2> /dev/null)

================================================================================
Generation date   : $(date +%Y-%m-%d)
Revision          : $(git describe --tags --always --long 2> /dev/null)
Version           : $2
Build host        : $(hostname)
Build user        : $(whoami)
Platform          : $(lsb_release -a | grep Description | cut -d: -f2 | tr -d '\t')
Installation path : $3
GCC               : $(gcc --version | head -1)
Configure log     :

$(head -8 config.log)
================================================================================\
"
