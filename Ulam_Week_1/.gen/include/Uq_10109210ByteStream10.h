/**                                      -*- mode:C++ -*- */

/***********************         DO NOT EDIT        ******************************
*
* ByteStream.h - Quark header for ULAM //gcnl:SymbolClass.cpp:760
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

#ifndef UQ_10109210BYTESTREAM10_H
#define UQ_10109210BYTESTREAM10_H

#include "UlamDefs.h"
#include "Uq_10109210ByteStream10_Types.h"
//Forward Defs of other classes: //gcnl:SymbolTableOfClasses.cpp:595
namespace MFM { template <class EC> struct Uq_10106UrSelf10; }  //FORWARD
namespace MFM { template <class EC> struct Ue_10105Empty10; }  //FORWARD
namespace MFM { template <class EC> struct Uq_10104Fail10; }  //FORWARD

namespace MFM{

  template <class EC> //gcnl:NodeBlockClass.cpp:1338
  struct Uq_10109210ByteStream10 : public UlamQuark<EC> /*, Uq_10106UrSelf10 */
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

    Uq_10109210ByteStream10(); //gcnl:NodeBlockClass.cpp:1377
    ~Uq_10109210ByteStream10(); //gcnl:NodeBlockClass.cpp:1382

    static Uq_10109210ByteStream10 THE_INSTANCE; //gcnl:NodeBlockClass.cpp:1388
    Ui_Uq_r10109210ByteStream10<EC> Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const; //gcnl:SymbolFunction.cpp:485

    Ui_Uq_r10109210ByteStream10<EC> Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321i<EC>& Uv_1n) const; //gcnl:SymbolFunction.cpp:485

    Ui_Uq_r10109210ByteStream10<EC> Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_1n, Ui_Ut_102321u<EC>& Uv_4base) const; //gcnl:SymbolFunction.cpp:485

    Ui_Uq_r10109210ByteStream10<EC> Uf_5print(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_1b) const; //gcnl:SymbolFunction.cpp:485

    static Ui_Ut_10111b<EC> Uf_7canRead(const UlamContext<EC>& uc, UlamRef<EC>& ur); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_10111b<EC> (* Uf_7canRead10) (const UlamContext<EC>&, UlamRef<EC>& ); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_10111b<EC> Uf_8canWrite(const UlamContext<EC>& uc, UlamRef<EC>& ur); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_10111b<EC> (* Uf_8canWrite10) (const UlamContext<EC>&, UlamRef<EC>& ); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_102321i<EC> Uf_8readByte(const UlamContext<EC>& uc, UlamRef<EC>& ur); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_102321i<EC> (* Uf_8readByte10) (const UlamContext<EC>&, UlamRef<EC>& ); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_102321i<EC> Uf_919writeByte(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10181u<EC>& Uv_1x); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_102321i<EC> (* Uf_919writeByte1110181u) (const UlamContext<EC>&, UlamRef<EC>& , Ui_Ut_10181u<EC>&); //gcnl:SymbolFunction.cpp:540
    static Ui_Uq_r10109210ByteStream10<EC> Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Uq_r10109210ByteStream10<EC> (* Uf_9210writeBytes11102321s) (const UlamContext<EC>&, UlamRef<EC>& , Ui_Ut_102321s<EC>&); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_102321u<EC> Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_102321u<EC> (* Uf_9210writeBytes11r10109210ByteStream10) (const UlamContext<EC>&, UlamRef<EC>& , Ui_Uq_r10109210ByteStream10<EC>&); //gcnl:SymbolFunction.cpp:540
    static Ui_Ut_102321u<EC> Uf_9210writeBytes(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Uq_r10109210ByteStream10<EC>& Ur_1r, Ui_Ut_102321u<EC>& Uv_3max); //virtual //gcnl:SymbolFunction.cpp:473

    //and its contextual type info for virtual table entries:
    typedef Ui_Ut_102321u<EC> (* Uf_9210writeBytes12r10109210ByteStream10102321u) (const UlamContext<EC>&, UlamRef<EC>& , Ui_Uq_r10109210ByteStream10<EC>&, Ui_Ut_102321u<EC>&); //gcnl:SymbolFunction.cpp:540
    Ui_Uq_r10109210ByteStream10<EC> Uf_6printf(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_6format, ...) const; //native //gcnl:SymbolFunction.cpp:481

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
      VTABLE_IDX_Uf_7canRead10,
      VTABLE_IDX_Uf_8canWrite10,
      VTABLE_IDX_Uf_8readByte10,
      VTABLE_IDX_Uf_919writeByte1110181u,
      VTABLE_IDX_Uf_9210writeBytes11102321s,
      VTABLE_IDX_Uf_9210writeBytes11r10109210ByteStream10,
      VTABLE_IDX_Uf_9210writeBytes12r10109210ByteStream10102321u,
      VTABLE_IDX_MAX
    }; //gcnl:NodeBlockClass.cpp:2278

    static VfuncPtr m_vtable[9]; //gcnl:NodeBlockClass.cpp:2285
    virtual VfuncPtr getVTableEntry(u32 idx) const; //gcnl:NodeBlockClass.cpp:2289

    //helper method not called directly
    bool internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const; //gcnl:NodeBlockClass.cpp:1933

    __inline__ const u32 GetPos() const { return 0u; }
  };

  template<class EC>
  Uq_10109210ByteStream10<EC> Uq_10109210ByteStream10<EC>::THE_INSTANCE;



} //MFM

#include "Uq_10109210ByteStream10.tcc"
#include "Uq_10109210ByteStream10_native.tcc"
#endif //UQ_10109210BYTESTREAM10_H