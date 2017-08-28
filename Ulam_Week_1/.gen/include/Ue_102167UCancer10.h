/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* UCancer.h - Element header for ULAM //gcnl:SymbolClass.cpp:760
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

#ifndef UE_102167UCANCER10_H
#define UE_102167UCANCER10_H

#include "UlamDefs.h"
#include "Ue_102167UCancer10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:595
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109211EventWindow10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10109210ColorUtils10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD

namespace MFM{

  template<class EC>
  class Ue_102167UCancer10 : public UlamElement<EC> /*, Uq_10106UrSelf10 */  {
    // Extract short names for parameter types
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<BPA> BV; //gcnl:NodeBlockClass.cpp:1621
    typedef BitField<BitVector<BPA>, VD::BITS, T::ATOM_FIRST_STATE_BIT, 0> BFTYP; //gcnl:NodeBlockClass.cpp:1624


  public:

    Ue_102167UCancer10(); //gcnl:NodeBlockClass.cpp:1441
    ~Ue_102167UCancer10(); //gcnl:NodeBlockClass.cpp:1446

    static Ue_102167UCancer10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1452

//! UCancer.ulam:2:   EventWindow ew;
    typedef Uq_10109211EventWindow10<EC> Ut_Um_2ew; //offset 0u //gcnl:NodeVarDeclDM.cpp:1077

//! UCancer.ulam:3:   Unsigned(8) blue = 0u;
    typedef UlamRefFixed<EC, 0u, 8u> Up_Um_4blue; //gcnl:NodeVarDeclDM.cpp:1107

//! UCancer.ulam:4:   Unsigned(8) red = 0u;
    typedef UlamRefFixed<EC, 8u, 8u> Up_Um_3red; //gcnl:NodeVarDeclDM.cpp:1107

    static void Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef void (* Uf_6behave10) (const UlamContext<EC>&, UlamRef<EC>& ); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_14181u<EC> Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_14181u<EC> (* Uf_8getColor11102321u) (const UlamContext<EC>&, UlamRef<EC>& , Ui_Ut_102321u<EC>&); //gcnl:SymbolFunction.cpp:540
    //BUILT-IN FUNCTIONS:

    const UlamClassDataMemberInfo & GetDataMemberInfo(u32 dataMemberNumber) const; //gcnl:NodeBlockClass.cpp:2663

    s32 GetDataMemberCount() const; //gcnl:NodeBlockClass.cpp:2727

    const char * GetMangledClassName() const; //gcnl:NodeBlockClass.cpp:2778

    virtual u32 GetClassLength() const; //gcnl:NodeBlockClass.cpp:1992

    virtual const unsigned char * GetString(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2508

    virtual u32 GetStringLength(u32 sidx) const; //gcnl:NodeBlockClass.cpp:2578

    virtual T BuildDefaultAtom() const; //gcnl:NodeBlockClass.cpp:2046

    enum VTABLE_IDX {
      VTABLE_IDX_Uf_6behave10 = 0,
      VTABLE_IDX_Uf_8getColor11102321u,
      VTABLE_IDX_MAX
    }; //gcnl:NodeBlockClass.cpp:2278

    static VfuncPtr m_vtable[2]; //gcnl:NodeBlockClass.cpp:2285
    virtual VfuncPtr getVTableEntry(u32 idx) const; //gcnl:NodeBlockClass.cpp:2289

    //helper method not called directly
    bool internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const; //gcnl:NodeBlockClass.cpp:1933

    //helper method not called directly
    bool internalCMethodImplementingIs(const T& targ) const; //gcnl:NodeBlockClass.cpp:2382

    const u32 ReadTypeField(const BV bv); //gcnl:NodeBlockClass.cpp:2415

    void WriteTypeField(BV& bv, const u32 v); //gcnl:NodeBlockClass.cpp:2418

  };

  template<class EC>
  Ue_102167UCancer10<EC> Ue_102167UCancer10<EC>::THE_INSTANCE;



} //MFM

#include "Ue_102167UCancer10.tcc"
#endif //UE_102167UCANCER10_H
