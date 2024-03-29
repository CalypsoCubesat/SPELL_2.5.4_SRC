// ################################################################################
// FILE       : SPELLxmlConfigReaderXC.H
// DATE       : Mar 17, 2011
// PROJECT    : SPELL
// DESCRIPTION: Xerces-C based implementation of the XML config. reader
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

#ifndef __SPELL_XMLCONFIG_READER_XC_H__
#define __SPELL_XMLCONFIG_READER_XC_H__

// FILES TO INCLUDE ////////////////////////////////////////////////////////
// System includes ---------------------------------------------------------
#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMNode.hpp>
// Local includes ----------------------------------------------------------
// Project includes --------------------------------------------------------
#include "SPELL_UTIL/SPELLbase.H"

/** \addtogroup SPELL_CFG */
/*@{*/


// FORWARD REFERENCES //////////////////////////////////////////////////////
// TYPES ///////////////////////////////////////////////////////////////////
// DEFINES /////////////////////////////////////////////////////////////////
/** Namespace of the Xerces-C library (xerces.apache.org) */
using namespace xercesc;

//////////////////////////////////////////////////////////////////////////////
/**
 * \brief Xerces implementation of an XML config reader.
 *
 * \see SPELLxmlConfigReader
 */
//////////////////////////////////////////////////////////////////////////////
class SPELLxmlConfigReaderXC : public SPELLxmlConfigReader
{
public: //--------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Constructor.
		 *
		 * \throws SPELLcoreException if the DOM parser initialization fails
		 *
		**////////////////////////////////////////////////////////////////////
		SPELLxmlConfigReaderXC();

		//////////////////////////////////////////////////////////////////////
		/** Destructor.
		 *
		 * \throws SPELLcoreException if the DOM parser cleanup fails
		 *
		**////////////////////////////////////////////////////////////////////
		virtual ~SPELLxmlConfigReaderXC();

		// STATIC ////////////////////////////////////////////////////////////////
		// METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Get the document root.
		 *
		 * \throws SPELLcoreException if there is no document root yet.
		 *
		**////////////////////////////////////////////////////////////////////
		SPELLxmlNode* getRoot();

		//////////////////////////////////////////////////////////////////////
		/** Parse the given configuration file.
		 *
		 * \throws SPELLcoreException in case of parser failure.
		 *
		**////////////////////////////////////////////////////////////////////
		bool parseFile( std::string xmlFile );

		//////////////////////////////////////////////////////////////////////
		/** Find elements of the given tag name.
		 *
		 * \throws SPELLcoreException if there is no document root yet or
		 *  the document is empty.
		 *
		**////////////////////////////////////////////////////////////////////
		SPELLxmlNodeList findElementsByName( std::string tagName );

    // DATA MEMBERS //////////////////////////////////////////////////////////

protected: //-----------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////
		/** Convert the Xerces-C node to a generic SPELL XML node.
		**////////////////////////////////////////////////////////////////////
		SPELLxmlNode* convertToNode( DOMElement* element );

    // DATA MEMBERS //////////////////////////////////////////////////////////

private: //-------------------------------------------------------------------

    // EXCEPTIONS ////////////////////////////////////////////////////////////
    // ENUMS /////////////////////////////////////////////////////////////////
    // TYPES /////////////////////////////////////////////////////////////////
    // LIFECYCLE /////////////////////////////////////////////////////////////
    // METHODS ///////////////////////////////////////////////////////////////
    // DATA MEMBERS //////////////////////////////////////////////////////////
		/** Holds the Xerces DOM parser */
		XercesDOMParser*        m_parser;
		/** Holds the Xerces DOM document */
		DOMDocument*            m_document;
};

/*@}*/
#endif
