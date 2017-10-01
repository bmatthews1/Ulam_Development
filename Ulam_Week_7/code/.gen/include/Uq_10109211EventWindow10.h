/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* EventWindow.h - Quark header for ULAM //gcnl:SymbolClass.cpp:760
*
**********************************************************************************
* This code is generated by the ULAM programming language compilation system.
*
* The ULAM programming language compilation system is free software:
* you can redistribute it and/or modify it under the terms of the GNU
* General Public License as published by the Free Software
* Foundation, either version 3 of the License, or (at your option)
* any later version.
*
* The ULAM programming language compilation system is distributed in
* the hope that it will be useful, but WITHOUT ANY WARRANTY; without
* even the implied warranty of MERCHANTABILITY or FITNESS FOR A
* PARTICULAR PURPOSE.  See the GNU General Public License for more
* details.
*
* You should have received a copy of the GNU General Public License
* along with the ULAM programming language compilation system
* software.  If not, see <http://www.gnu.org/licenses/>.
*
* @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
*/

#ifndef UQ_10109211EVENTWINDOW10_H
#define UQ_10109211EVENTWINDOW10_H

#include "UlamDefs.h"
#include "Uq_10109211EventWindow10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:595
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10105MDist10; }  //FORWARD

namespace MFM{

  template <class EC> //gcnl:NodeBlockClass.cpp:1338
  struct Uq_10109211EventWindow10 : public UlamQuark<EC> /*, Uq_10106UrSelf10 */
  {

    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<BPA> BV; //gcnl:NodeBlockClass.cpp:1621
    typedef BitField<BitVector<BPA>, VD::BITS, T::ATOM_FIRST_STATE_BIT, 0> BFTYP; //gcnl:NodeBlockClass.cpp:1624

    enum { 
      QUARK_SIZE = 0 /* Requiring quarks to advertise their size in a std way.) */
    }; //gcnl:NodeBlockClass.cpp:1367

    typedef UlamRefFixed<EC, 0u, QUARK_SIZE> Up_Us; //entire quark //gcnl:NodeBlockClass.cpp:1371

    Uq_10109211EventWindow10(); //gcnl:NodeBlockClass.cpp:1377
    ~Uq_10109211EventWindow10(); //gcnl:NodeBlockClass.cpp:1382

    static Uq_10109211EventWindow10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1388

//! EventWindow.ulam:19:   AtomUtils au;
    typedef Uq_1010919AtomUtils10<EC> Ut_Um_2au; //offset 0u //gcnl:NodeVarDeclDM.cpp:1077

//! EventWindow.ulam:21:   typedef Unsigned(6) SiteNum;

//! EventWindow.ulam:22:   typedef Unsigned(3) Symmetry;

//! EventWindow.ulam:24:   constant Symmetry cSYMMETRY_000L = 0u;

//! EventWindow.ulam:25:   constant Symmetry cSYMMETRY_090L = 1u;

//! EventWindow.ulam:26:   constant Symmetry cSYMMETRY_180L = 2u;

//! EventWindow.ulam:27:   constant Symmetry cSYMMETRY_270L = 3u;

//! EventWindow.ulam:28:   constant Symmetry cSYMMETRY_000R = 4u;

//! EventWindow.ulam:29:   constant Symmetry cSYMMETRY_090R = 5u;

//! EventWindow.ulam:30:   constant Symmetry cSYMMETRY_180R = 6u;

//! EventWindow.ulam:31:   constant Symmetry cSYMMETRY_270R = 7u;

//! EventWindow.ulam:33:   typedef Unsigned(3) Dir;

//! EventWindow.ulam:34:   constant Dir cDIR_NORTH =     0u;

//! EventWindow.ulam:35:   constant Dir cDIR_NORTHEAST = 1u;

//! EventWindow.ulam:36:   constant Dir cDIR_EAST =      2u;

//! EventWindow.ulam:37:   constant Dir cDIR_SOUTHEAST = 3u;

//! EventWindow.ulam:38:   constant Dir cDIR_SOUTH =     4u;

//! EventWindow.ulam:39:   constant Dir cDIR_SOUTHWEST = 5u;

//! EventWindow.ulam:40:   constant Dir cDIR_WEST =      6u;

//! EventWindow.ulam:41:   constant Dir cDIR_NORTHWEST = 7u;

    Ui_Ut_r102961a<EC> Uf_4aref(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_r102961a<EC> Uf_4aref(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //gcnl:SymbolFunction.cpp:485

    Ui_Uq_102323C2D10<EC> Uf_8getCoord(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10161u<EC> Uf_9213getSiteNumber(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10111b<EC> Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_7isEmpty(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10161u<EC> Uf_4size(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_102321u<EC> Uf_919getRadius(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10161u<EC> Uf_9217getAccessibleSize(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10161u<EC> Uf_9216getSiteNumberRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10111b<EC> Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_7isLegal(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_9212isAccessible(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10111b<EC> Uf_6isLive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_5coord) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_6index1, Ui_Ut_10161u<EC>& Uv_6index2) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10111b<EC> Uf_4swap(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_6coord1, Ui_Uq_102323C2D10<EC>& Uv_6coord2) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10161u<EC> Uf_9228getSiteNumberFromRasterIndex(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_5index) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10161u<EC> Uf_9228getRasterIndexFromSiteNumber(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7sitenum) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Uq_102323C2D10<EC> Uf_9211getCoordRaw(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_7siteNum) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10131u<EC> Uf_9214changeSymmetry(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10131u<EC>& Uv_6newSym) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Uq_102323C2D10<EC> Uf_6mapSym(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_102323C2D10<EC>& Uv_9211directCoord) const; //native //gcnl:SymbolFunction.cpp:481

    Ui_Ut_10131u<EC> Uf_9211getSymmetry(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //native //gcnl:SymbolFunction.cpp:481

    void Uf_7diffuse(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //native //gcnl:SymbolFunction.cpp:481

    //BUILT-IN FUNCTIONS:

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const; //gcnl:NodeBlockClass.cpp:2663

    s32 GetDataMemberCount() const; //gcnl:NodeBlockClass.cpp:2727

    const char * GetMangledClassName() const; //gcnl:NodeBlockClass.cpp:2778

    virtual u32 GetClassLength() const; //gcnl:NodeBlockClass.cpp:1992

    virtual const unsigned char * GetString(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2508

    virtual u32 GetStringLength(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2578

    virtual u32 getDefaultQuark( ) const; //gcnl:NodeBlockClass.cpp:2134

    enum VTABLE_IDX {
      VTABLE_IDX_Uf_6behave10 = 0,
      VTABLE_IDX_Uf_8getColor11102321u,
      VTABLE_IDX_MAX
    }; //gcnl:NodeBlockClass.cpp:2278

    static VfuncPtr m_vtable[2]; //gcnl:NodeBlockClass.cpp:2285
    virtual VfuncPtr getVTableEntry(u32 idx) const; //gcnl:NodeBlockClass.cpp:2289

    //helper method not called directly
    bool internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const; //gcnl:NodeBlockClass.cpp:1933

    __inline__ const u32 GetPos() const { return 0u; }
  };

  template<class EC>
  Uq_10109211EventWindow10<EC> Uq_10109211EventWindow10<EC>::THE_INSTANCE;



} //MFM

#include "Uq_10109211EventWindow10.tcc"
#include "Uq_10109211EventWindow10_native.tcc"
#endif //UQ_10109211EVENTWINDOW10_H
