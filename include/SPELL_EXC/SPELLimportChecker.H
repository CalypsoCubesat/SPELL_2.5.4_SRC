// ################################################################################
// FILE       : SPELLimportChecker.H
// DATE       : Mar 17, 2011
// PROJECT    : SPELL
// DESCRIPTION: Special check for import statements
// --------------------------------------------------------------------------------
//
//  Copyright (C) 2008, 2018 SES ENGINEERING, Luxembourg S.A.R.L.
//
//  This file is part of SPELL.
//
// SPELL is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SPELL is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SPELL. If not, see <http://www.gnu.org/licenses/>.
//
// ################################################################################

#ifndef __SPELL_IMPORT_CHECKER_H__
#define __SPELL_IMPORT_CHECKER_H__

// FILES TO INCLUDE ////////////////////////////////////////////////////////
// Local includes ----------------------------------------------------------
// Project includes --------------------------------------------------------
#include "SPELL_UTIL/SPELLbase.H"
// System includes ---------------------------------------------------------


/** \addtogroup SPELL_EXC */
/*@{*/

// FORWARD REFERENCES //////////////////////////////////////////////////////
// ENUMS ///////////////////////////////////////////////////////////////////
// TYPES ///////////////////////////////////////////////////////////////////
// DEFINES /////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/**
 ** \brief Analyzes if the Python interpreter is importing a module
 **
 ** \par Description and usage:
 **
 ** 	The import checker is used to determine if the
 **  	Python framework is importing a module or not, given the dispatch
 **  	information. Whenever import is done, dispatch calls shall be ignored.
 **
 **	 	Used by the executor to determine if a dispatch event shall
 **  	be processed.
 **
**////////////////////////////////////////////////////////////////////////////
class SPELLimportChecker
{
public: //--------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Constructor.
		**////////////////////////////////////////////////////////////////////
		SPELLimportChecker();

    // STATIC ////////////////////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Check if the Python interpreter is importing
		 *
		 * \param event IN: dispatch event type
		 * \param file IN: current file in dispatch
		 * \param line IN: current line
		 * \param name IN: current module name
		 *
		 * \return True if the interpreter is importing a module
		**////////////////////////////////////////////////////////////////////
		const bool isImporting( const int& event, const std::string& file, const int& line, const std::string& name );

		//////////////////////////////////////////////////////////////////////
		/** Reset the checker status
		**////////////////////////////////////////////////////////////////////
		void reset();

    // DATA MEMBERS //////////////////////////////////////////////////////////

protected: //-----------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////////////////////////////
    // DATA MEMBERS //////////////////////////////////////////////////////////

private: //-------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////////////////////////////
    // DATA MEMBERS //////////////////////////////////////////////////////////
		/** Import flag */
		bool m_importing;
		/** Current procedure */
		std::string m_currentProc;
		/** Main procedure */
		std::string  m_mainProc;
};

/*@}*/
#endif
