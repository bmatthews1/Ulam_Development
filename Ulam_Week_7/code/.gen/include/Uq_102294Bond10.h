/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* Bond.h - Quark header for ULAM //gcnl:SymbolClass.cpp:760
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

#ifndef UQ_102294BOND10_H
#define UQ_102294BOND10_H

#include "UlamDefs.h"
#include "Uq_102294Bond10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:595
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10109214BondParameters10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_1010919AtomUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10106Random10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_102323C2D10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10104Wall10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10168CellWall10; }  //FORWARD

namespace MFM{

  template <class EC> //gcnl:NodeBlockClass.cpp:1338
  struct Uq_102294Bond10 : public UlamQuark<EC> /*, Uq_10106UrSelf10 */
  {

    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<BPA> BV; //gcnl:NodeBlockClass.cpp:1621
    typedef BitField<BitVector<BPA>, VD::BITS, T::ATOM_FIRST_STATE_BIT, 0> BFTYP; //gcnl:NodeBlockClass.cpp:1624

    enum { 
      QUARK_SIZE = 29 /* Requiring quarks to advertise their size in a std way.) */
    }; //gcnl:NodeBlockClass.cpp:1367

    typedef UlamRefFixed<EC, 0u, QUARK_SIZE> Up_Us; //entire quark //gcnl:NodeBlockClass.cpp:1371

    Uq_102294Bond10(); //gcnl:NodeBlockClass.cpp:1377
    ~Uq_102294Bond10(); //gcnl:NodeBlockClass.cpp:1382

    static Uq_102294Bond10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1388

//! Bond.ulam:40: 	typedef Unsigned(5) Coord; 

//! Bond.ulam:41: 	typedef Unsigned(6) SiteNum;

//! Bond.ulam:42: 	typedef Int(16)     Short;

//! Bond.ulam:43: 	typedef Int(32)     Long;

//! Bond.ulam:44: 	typedef Unsigned(3) Index;

//! Bond.ulam:46: 	EventWindow ew;
    typedef Uq_10109211EventWindow10<EC> Ut_Um_2ew; //offset 0u //gcnl:NodeVarDeclDM.cpp:1077

//! Bond.ulam:47: 	AtomUtils au;
    typedef Uq_1010919AtomUtils10<EC> Ut_Um_2au; //offset 0u //gcnl:NodeVarDeclDM.cpp:1077

//! Bond.ulam:50: 	Bool active = true;
    typedef UlamRefFixed<EC, 0u, 1u> Up_Um_6active; //gcnl:NodeVarDeclDM.cpp:1107

//! Bond.ulam:51: 	Index bondCount = 0;
    typedef UlamRefFixed<EC, 1u, 3u> Up_Um_919bondCount; //gcnl:NodeVarDeclDM.cpp:1107

//! Bond.ulam:52: 	Coord bonds[5] = {0, 0, 0, 0, 0};
    typedef UlamRefFixed<EC, 4u, 25u> Up_Um_5bonds; //gcnl:NodeVarDeclDM.cpp:1107

    void Uf_919setActive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_5state) const; //gcnl:SymbolFunction.cpp:485

    void Uf_7addBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9210removeBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10161u<EC> Uf_7reverse(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9210updateBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_4prev, Ui_Ut_10151u<EC>& Uv_3new) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9210checkBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9210clearBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    void Uf_919findBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_7hasBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10161u<EC> Uf_7getDist(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2s1, Ui_Ut_10161u<EC>& Uv_2s2) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_6moveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const; //gcnl:SymbolFunction.cpp:485

    Ui_Ut_10111b<EC> Uf_919canMoveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9216clearSurrounding(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    void Uf_9212fillCellWall(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    void Uf_919drawBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const; //gcnl:SymbolFunction.cpp:485

    void Uf_4line(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2x0, Ui_Ut_102161i<EC>& Uv_2y0, Ui_Ut_102161i<EC>& Uv_2x1, Ui_Ut_102161i<EC>& Uv_2y1) const; //gcnl:SymbolFunction.cpp:485

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
  Uq_102294Bond10<EC> Uq_102294Bond10<EC>::THE_INSTANCE;



} //MFM

#include "Uq_102294Bond10.tcc"
#endif //UQ_102294BOND10_H
