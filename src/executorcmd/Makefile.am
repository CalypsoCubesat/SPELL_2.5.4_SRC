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

bin_PROGRAMS = SPELL-ExecutorCmd

SPELL_ExecutorCmd_SOURCES = src/SPELLexecutorMain.C

SPELL_ExecutorCmd_LDFLAGS = ${AM_LDFLAGS} -lmenu

SPELL_ExecutorCmd_LDADD = ${top_builddir}/lib/SPELL_EXC/libSPELL_EXC.la   \
                          ${top_builddir}/lib/SPELL_CIFS/libSPELL_CIFS.la \
                          ${top_builddir}/lib/SPELL_CIFC/libSPELL_CIFC.la \
                          ${top_builddir}/lib/SPELL_SDB/libSPELL_SDB.la   \
                          ${top_builddir}/lib/SPELL_DTA/libSPELL_DTA.la  \
                          ${top_builddir}/lib/SPELL_WS/libSPELL_WS.la     \
                          ${top_builddir}/lib/SPELL_WRP/libSPELL_WRP.la   \
                          ${top_builddir}/lib/SPELL_CIF/libSPELL_CIF.la   \
                          ${top_builddir}/lib/SPELL_IPC/libSPELL_IPC.la   \
                          ${top_builddir}/lib/SPELL_PRD/libSPELL_PRD.la   \
                          ${top_builddir}/lib/SPELL_SYN/libSPELL_SYN.la   \
                          ${top_builddir}/lib/SPELL_CFG/libSPELL_CFG.la   \
                          ${top_builddir}/lib/SPELL_UTIL/libSPELL_UTIL.la
