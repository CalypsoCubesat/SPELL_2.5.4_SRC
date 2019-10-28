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

include ${top_srcdir}/common.mk

lib_LTLIBRARIES = libSPELL_CIFS.la

libSPELL_CIFS_la_LDFLAGS = ${RELEASE_LDFLAG}

libSPELL_CIFS_la_SOURCES = src/SPELLrequestProcessor.C \
                           src/SPELLdisplayBuffer.C \
                           src/SPELLvariableBuffer.C \
                           src/SPELLcifPromptHelper.C \
                           src/SPELLserverCif.C
