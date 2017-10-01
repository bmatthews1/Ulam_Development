/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10105Empty10.h"
#include "Uq_10109210ByteStream10.h"

namespace MFM{

  template<class EC>
  Un_102649216ByteStreamString10<EC>::Un_102649216ByteStreamString10() : UlamTransient<EC>(MFM_UUID_FOR("Un102649216ByteStreamString10", 0))
  { }

  template<class EC>
  Un_102649216ByteStreamString10<EC>::~Un_102649216ByteStreamString10(){} //gcnl:NodeBlockClass.cpp:1826


//! ByteStreamString.ulam:7:   Self(String s) {
  template<class EC>
  void Un_102649216ByteStreamString10<EC>::Uf_4Self(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStreamString.ulam:8:     readFrom(s);
    const u32 Uh_5tlreg43336 = Uv_1s.read(); //gcnl:Node.cpp:704
    Ui_Ut_102321s<EC> Uh_5tlval43337(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43336), Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43336)); //gcnl:Node.cpp:1148
    THE_INSTANCE.Uf_8readFrom(uc, ur, Uh_5tlval43337); //gcnl:NodeFunctionCall.cpp:1043

  } // Uf_4Self



//! ByteStreamString.ulam:11:   Void readFrom(String s)
  template<class EC>
  void Un_102649216ByteStreamString10<EC>::Uf_8readFrom(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321s<EC>& Uv_1s) const
  {

//! ByteStreamString.ulam:13:     m_string = s;
    const u32 Uh_5tlreg43340 = Uv_1s.read(); //gcnl:Node.cpp:704
    UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43340); //gcnl:Node.cpp:898

//! ByteStreamString.ulam:14:     m_index = 0;
    const u32 Uh_5tlreg43342 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43343 = _Int32ToUnsigned32(Uh_5tlreg43342, 2, 32); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 32u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43343); //gcnl:Node.cpp:898

  } // Uf_8readFrom



//! ByteStreamString.ulam:17:   Void reset() 
  template<class EC>
  void Un_102649216ByteStreamString10<EC>::Uf_5reset(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! ByteStreamString.ulam:19:     m_index = 0;
    const u32 Uh_5tlreg43345 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43346 = _Int32ToUnsigned32(Uh_5tlreg43345, 2, 32); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 32u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43346); //gcnl:Node.cpp:898

  } // Uf_5reset



//! ByteStreamString.ulam:23:   Bool canRead() { return true; }
  template<class EC>
  Ui_Ut_10111b<EC> Un_102649216ByteStreamString10<EC>::Uf_7canRead(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! ByteStreamString.ulam:23:   Bool canRead() { return true; }
    const u32 Uh_5tlreg43348 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval43349(Uh_5tlreg43348); //gcnl:Node.cpp:1148
    return (Uh_5tlval43349); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7canRead



//! ByteStreamString.ulam:26:   Bool canWrite() { return false; }
  template<class EC>
  Ui_Ut_10111b<EC> Un_102649216ByteStreamString10<EC>::Uf_8canWrite(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! ByteStreamString.ulam:26:   Bool canWrite() { return false; }
    const u32 Uh_5tlreg43350 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval43351(Uh_5tlreg43350); //gcnl:Node.cpp:1148
    return (Uh_5tlval43351); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8canWrite



//! ByteStreamString.ulam:29:   Int readByte() {
  template<class EC>
  Ui_Ut_102321i<EC> Un_102649216ByteStreamString10<EC>::Uf_8readByte(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! ByteStreamString.ulam:30:     if (m_index >= m_string.lengthof) return -1;
    {

//! ByteStreamString.ulam:30:     if (m_index >= m_string.lengthof) return -1;
      const u32 Uh_5tlreg43353 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg43354 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43353))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43353)); //gcnl:NodeTerminalProxy.cpp:455
      const u32 Uh_5tlreg43356 = UlamRef<EC>(ur, 32u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
      const u32 Uh_5tlreg43357 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg43356, Uh_5tlreg43354, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg43357, 1)) //gcnl:NodeControl.cpp:213
      {

//! ByteStreamString.ulam:30:     if (m_index >= m_string.lengthof) return -1;
          const u32 Uh_5tlreg43358 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg43359 = _Int32ToInt32(Uh_5tlreg43358, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval43360(Uh_5tlreg43359); //gcnl:Node.cpp:1148
          return (Uh_5tlval43360); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! ByteStreamString.ulam:31:     return m_string[m_index++];
    const u32 Uh_5tlreg43361 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg43362 = _Int32ToUnsigned32(Uh_5tlreg43361, 32, 32); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg43364 = UlamRef<EC>(ur, 32u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43365 = _BinOpAddUnsigned32(Uh_5tlreg43364, Uh_5tlreg43362, 32); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
    UlamRef<EC>(ur, 32u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg43365); //gcnl:Node.cpp:898
    const u32 Uh_5tlreg43367 = UlamRef<EC>(ur, 0u, 32u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
    const u32 Uh_5tlreg43368 = uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43367))->GetStringLength(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43367)); //gcnl:NodeSquareBracket.cpp:983
    if(Uh_5tlreg43364 >= Uh_5tlreg43368) //gcnl:NodeSquareBracket.cpp:1014
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:1018
    const unsigned char Uh_5tlreg43369 = *(uc.GetUlamClassRegistry().GetUlamClassByIndex(Ui_Ut_102321s<EC>::getRegNum(Uh_5tlreg43367))->GetString(Ui_Ut_102321s<EC>::getStrIdx(Uh_5tlreg43367)) + Uh_5tlreg43364); //gcnl:NodeSquareBracket.cpp:1058
    const u32 Uh_5tlreg43370 = _Unsigned32ToInt32(Uh_5tlreg43369, 8, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval43371(Uh_5tlreg43370); //gcnl:Node.cpp:1148
    return (Uh_5tlval43371); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8readByte


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Un_102649216ByteStreamString10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Ut_102321s", "m_string", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Ut_102321u", "m_index", 32u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Un_102649216ByteStreamString10<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Un_102649216ByteStreamString10<EC>::GetMangledClassName() const
  {
    return "Un_102649216ByteStreamString10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Un_102649216ByteStreamString10<EC>::GetClassLength( ) const
  {
    return 64; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Un_102649216ByteStreamString10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 3; //gcnl:NodeBlockClass.cpp:2537
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
      "\000\000"
    ; //gcnl:StringPoolUser.cpp:127

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2546
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2555
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2561
  } //GetString

  template<class EC>
  u32 Un_102649216ByteStreamString10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  void Un_102649216ByteStreamString10<EC>::getDefaultTransient(u32 pos, BitStorage<EC>& bvsref) const
  {
    MFM_API_ASSERT_ARG((pos + bvsref.GetBitSize()) >= 64u); //gcnl:NodeBlockClass.cpp:2219

    // Initialize any data members:
    static const u32 vales[(64 + 31)/32] = { 0x16e0001, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<64> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      static u32 myRegNum = Un_102649216ByteStreamString10<EC>::THE_INSTANCE.GetRegistrationNumber(); //gcnl:CompilerState.cpp:1427
      //correct runtime regnum for strings
      initBV.Write(0u + 0u, 16u, myRegNum); //Um_8m_string //gcnl:NodeVarDeclDM.cpp:782
    } //gcnl:CompilerState.cpp:1439
    bvsref.WriteBV(pos, initBV); //gcnl:NodeBlockClass.cpp:2233
  } //getDefaultTransient

  template<class EC>
  VfuncPtr Un_102649216ByteStreamString10<EC>::m_vtable[9] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor),
    (VfuncPtr) ((typename Un_102649216ByteStreamString10<EC>::Uf_7canRead10) &Un_102649216ByteStreamString10<EC>::Uf_7canRead),
    (VfuncPtr) ((typename Un_102649216ByteStreamString10<EC>::Uf_8canWrite10) &Un_102649216ByteStreamString10<EC>::Uf_8canWrite),
    (VfuncPtr) ((typename Un_102649216ByteStreamString10<EC>::Uf_8readByte10) &Un_102649216ByteStreamString10<EC>::Uf_8readByte),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_919writeByte1110181u) &Uq_10109210ByteStream10<EC>::Uf_919writeByte),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes11102321s) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes11r10109210ByteStream10) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes),
    (VfuncPtr) ((typename Uq_10109210ByteStream10<EC>::Uf_9210writeBytes12r10109210ByteStream10102321u) &Uq_10109210ByteStream10<EC>::Uf_9210writeBytes)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Un_102649216ByteStreamString10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 9) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Un_102649216ByteStreamString10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_10109210ByteStream10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Un_102649216ByteStreamString10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

