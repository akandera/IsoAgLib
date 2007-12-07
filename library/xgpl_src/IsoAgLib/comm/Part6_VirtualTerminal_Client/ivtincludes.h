/***************************************************************************
                          ivtincludes.h  -  includes all neccessary headers
                             -------------------
    begin                : Don Sep 4 2003
    copyright            : (C) 2003 by Achim Spangler
    email                : a.spangler@osb-ag:de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 * This file is part of the "IsoAgLib", an object oriented program library *
 * to serve as a software layer between application specific program and   *
 * communication protocol details. By providing simple function calls for  *
 * jobs like starting a measuring program for a process data value on a    *
 * remote ECU, the main program has not to deal with single CAN telegram   *
 * formatting. This way communication problems between ECU's which use     *
 * this library should be prevented.                                       *
 * Everybody and every company is invited to use this library to make a    *
 * working plug and play standard out of the printed protocol standard.    *
 *                                                                         *
 * Copyright (C) 2000 - 2004 Dipl.-Inform. Achim Spangler                  *
 *                                                                         *
 * The IsoAgLib is free software; you can redistribute it and/or modify it *
 * under the terms of the GNU General Public License as published          *
 * by the Free Software Foundation; either version 2 of the License, or    *
 * (at your option) any later version.                                     *
 *                                                                         *
 * This library is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU       *
 * General Public License for more details.                                *
 *                                                                         *
 * You should have received a copy of the GNU General Public License       *
 * along with IsoAgLib; if not, write to the Free Software Foundation,     *
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA           *
 *                                                                         *
 * As a special exception, if other files instantiate templates or use     *
 * macros or inline functions from this file, or you compile this file and *
 * link it with other works to produce a work based on this file, this file*
 * does not by itself cause the resulting work to be covered by the GNU    *
 * General Public License. However the source code for this file must still*
 * be made available in accordance with section (3) of the                 *
 * GNU General Public License.                                             *
 *                                                                         *
 * This exception does not invalidate any other reasons why a work based on*
 * this file might be covered by the GNU General Public License.           *
 *                                                                         *
 * Alternative licenses for IsoAgLib may be arranged by contacting         *
 * the main author Achim Spangler by a.spangler@osb-ag:de                  *
 ***************************************************************************/

#include "ivttypes.h"

#include "ivtobjectdatamask_c.h"
#include "ivtobjectworkingset_c.h"

// #ifdef USE_VTOBJECT_alarmmask
  #include "ivtobjectalarmmask_c.h"
// #endif
// #ifdef USE_VTOBJECT_
  #include "ivtobjectarchedbargraph_c.h"
// #endif
// #ifdef USE_VTOBJECT_auxiliaryfunction
  #include "ivtobjectauxiliaryfunction_c.h"
// #endif
// #ifdef USE_VTOBJECT_auxiliaryinput
  #include "ivtobjectauxiliaryinput_c.h"
// #endif
// #ifdef USE_VTOBJECT_button
  #include "ivtobjectbutton_c.h"
// #endif
// #ifdef USE_VTOBJECT_container
  #include "ivtobjectcontainer_c.h"
// #endif
// #ifdef USE_VTOBJECT_ellipse
  #include "ivtobjectellipse_c.h"
// #endif
// #ifdef USE_VTOBJECT_fillattributes
  #include "ivtobjectfillattributes_c.h"
// #endif
// #ifdef USE_VTOBJECT_fontattributes
  #include "ivtobjectfontattributes_c.h"
// #endif
// #ifdef USE_VTOBJECT_inputattributes
  #include "ivtobjectinputattributes_c.h"
// #endif
// #ifdef USE_VTOBJECT_inputboolean
  #include "ivtobjectinputboolean_c.h"
// #endif
// #ifdef USE_VTOBJECT_inputlist
  #include "ivtobjectinputlist_c.h"
// #endif
// #ifdef USE_VTOBJECT_inputnumber
  #include "ivtobjectinputnumber_c.h"
// #endif
// #ifdef USE_VTOBJECT_inputstring
  #include "ivtobjectinputstring_c.h"
// #endif
// #ifdef USE_VTOBJECT_graphicscontext
  #include "ivtobjectgraphicscontext_c.h"
// #endif
// #ifdef USE_VTOBJECT_key
  #include "ivtobjectkey_c.h"
// #endif
// #ifdef USE_VTOBJECT_line
  #include "ivtobjectline_c.h"
// #endif
// #ifdef USE_VTOBJECT_linearbargraph
  #include "ivtobjectlinearbargraph_c.h"
// #endif
// #ifdef USE_VTOBJECT_lineattributes
  #include "ivtobjectlineattributes_c.h"
// #endif
// #ifdef USE_VTOBJECT_macro
  #include "ivtobjectmacro_c.h"
// #endif
// #ifdef USE_VTOBJECT_meter
  #include "ivtobjectmeter_c.h"
// #endif
// #ifdef USE_VTOBJECT_numbervariable
  #include "ivtobjectnumbervariable_c.h"
// #endif
// #ifdef USE_VTOBJECT_objectpointer
  #include "ivtobjectobjectpointer_c.h"
// #endif
// #ifdef USE_VTOBJECT_outputnumber
  #include "ivtobjectoutputnumber_c.h"
// #endif
// #ifdef USE_VTOBJECT_outputstring
  #include "ivtobjectoutputstring_c.h"
// #endif
// #ifdef USE_VTOBJECT_outputlist
  #include "ivtobjectoutputlist_c.h"
// #endif
// #ifdef USE_VTOBJECT_picturegraphic
  #include "ivtobjectpicturegraphic_c.h"
// #endif
// #ifdef USE_VTOBJECT_polygon
  #include "ivtobjectpolygon_c.h"
// #endif
// #ifdef USE_VTOBJECT_rectangle
  #include "ivtobjectrectangle_c.h"
// #endif
// #ifdef USE_VTOBJECT_softkeymask
  #include "ivtobjectsoftkeymask_c.h"
// #endif
// #ifdef USE_VTOBJECT_stringvariable
  #include "ivtobjectstringvariable_c.h"
// #endif


#include "iisoterminalobjectpool_c.h"
#include "iisoterminal_c.h"
