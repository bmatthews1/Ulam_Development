/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Uq_10106Random10.h"
#include "Uq_10114Once10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102108Majority10<EC>::Ue_102108Majority10() : UlamElement<EC>(MFM_UUID_FOR("Ue102108Majority10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("M");  // figure this out later
    Element<EC>::SetName("Majority"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102108Majority10<EC>::~Ue_102108Majority10(){} //gcnl:NodeBlockClass.cpp:1743


//! Majority.ulam:51:   Void behave() {
  template<class EC>
  void Ue_102108Majority10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Majority.ulam:52:     if (mOnce.new()) {
    {

//! Majority.ulam:52:     if (mOnce.new()) {
      UlamRef<EC> Uh_3tur41121(ur, 0u, 1u, &Uq_10114Once10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const Ui_Ut_10111b<EC> Uh_5tlval41123 = Uq_10115OnceT11102151y10<EC>::THE_INSTANCE.Uf_3new(uc, Uh_3tur41121); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg41124 = Uh_5tlval41123.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg41124, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Majority.ulam:53:       mUp = random.oneIn(2);
          UlamRef<EC> Uh_3tur41126(ur, 10u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41127 = 2; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41128 = _Int32ToUnsigned32(Uh_5tlreg41127, 3, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321u<EC> Uh_5tlval41129(Uh_5tlreg41128); //gcnl:Node.cpp:1142
          const Ui_Ut_10111b<EC> Uh_5tlval41131 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur41126, Uh_5tlval41129); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41132 = Uh_5tlval41131.read(); //gcnl:Node.cpp:1170
          UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41132); //gcnl:Node.cpp:892
        }
      } // end if
      else
      {

//! Majority.ulam:54:     } else if (cd == 0){
          {

//! Majority.ulam:54:     } else if (cd == 0){
            const u32 Uh_5tlreg41134 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg41135 = _Int32ToInt32(Uh_5tlreg41134, 2, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41137 = UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg41138 = _Unsigned32ToInt32(Uh_5tlreg41137, 8, 9); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg41139 = _BinOpCompareEqEqInt32(Uh_5tlreg41138, Uh_5tlreg41135, 9); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg41139, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Majority.ulam:55: 	  SiteCount up = 0;
                const u32 Uh_5tlreg41140 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41141 = _Int32ToUnsigned32(Uh_5tlreg41140, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uv_2up(Uh_5tlreg41141); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:56:       SiteCount down = 0;
                const u32 Uh_5tlreg41142 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41143 = _Int32ToUnsigned32(Uh_5tlreg41142, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uv_4down(Uh_5tlreg41143); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                {

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                  const u32 Uh_5tlreg41144 = 1; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg41145 = _Int32ToUnsigned32(Uh_5tlreg41144, 2, 6); //gcnl:NodeCast.cpp:748
                  Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg41145); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                  while(true)
                  {
                    const u32 Uh_5tlreg41146 = 41; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg41148 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg41149 = _Unsigned32ToInt32(Uh_5tlreg41148, 6, 7); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg41150 = _BinOpCompareLessThanInt32(Uh_5tlreg41149, Uh_5tlreg41146, 7); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg41150, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                    {

//! Majority.ulam:58:         if (ew[i] is Majority){
                      {

//! Majority.ulam:58:         if (ew[i] is Majority){
                        UlamRef<EC> Uh_3tur41152(ur, 10u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                        const u32 Uh_5tlreg41154 = Uv_1i.read(); //gcnl:Node.cpp:698
                        Ui_Ut_10161u<EC> Uh_5tlval41155(Uh_5tlreg41154); //gcnl:Node.cpp:1142
                        Ui_Ut_r102961a<EC> Uh_5tuval41157 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41152, Uh_5tlval41155); //gcnl:NodeFunctionCall.cpp:1043
                        const u32 Uh_5tlreg41158 = Ue_102108Majority10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval41157.read()); //gcnl:NodeConditionalIs.cpp:285
                        if(_Bool32ToCbool(Uh_5tlreg41158, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Majority.ulam:59:           Majority m = (Majority)ew[i];
                            UlamRef<EC> Uh_3tur41160(ur, 10u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg41162 = Uv_1i.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval41163(Uh_5tlreg41162); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval41165 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur41160, Uh_5tlval41163); //gcnl:NodeFunctionCall.cpp:1043
                            if(!Ue_102108Majority10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval41165.ReadAtom())) //gcnl:NodeCast.cpp:872
                              FAIL(BAD_CAST); //gcnl:NodeCast.cpp:876
                            Ui_Ue_102108Majority10<EC> Uv_1m(Uh_5tuval41165.read()); //gcnl:NodeVarDecl.cpp:1081

//! Majority.ulam:60:           if (m.mUp) up++;
                            {

//! Majority.ulam:60:           if (m.mUp) up++;
                              const u32 Uh_5tlreg41168 = UlamRef<EC>(26u, 1u, Uv_1m, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                              if(_Bool32ToCbool(Uh_5tlreg41168, 1)) //gcnl:NodeControl.cpp:213
                              {

//! Majority.ulam:60:           if (m.mUp) up++;
                                  const u32 Uh_5tlreg41169 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg41170 = _Int32ToUnsigned32(Uh_5tlreg41169, 32, 6); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg41172 = Uv_2up.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg41173 = _BinOpAddUnsigned32(Uh_5tlreg41172, Uh_5tlreg41170, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_2up.write(Uh_5tlreg41173); //gcnl:Node.cpp:892
                              } // end if
                              else
                              {

//! Majority.ulam:61:           else down++;
                                  const u32 Uh_5tlreg41174 = 1; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg41175 = _Int32ToUnsigned32(Uh_5tlreg41174, 32, 6); //gcnl:NodeCast.cpp:748
                                  const u32 Uh_5tlreg41177 = Uv_4down.read(); //gcnl:Node.cpp:698
                                  const u32 Uh_5tlreg41178 = _BinOpAddUnsigned32(Uh_5tlreg41177, Uh_5tlreg41175, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                                  Uv_4down.write(Uh_5tlreg41178); //gcnl:Node.cpp:892
                              } //end else
                            }
                          }
                        } // end if
                      }
                    }

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
Ul_214endcontrolloop15:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Majority.ulam:57:       for (SiteNumber i = 1; i < 41; i++){
                    const u32 Uh_5tlreg41179 = 1; //gcnl:NodeTerminal.cpp:690
                    const u32 Uh_5tlreg41180 = _Int32ToUnsigned32(Uh_5tlreg41179, 32, 6); //gcnl:NodeCast.cpp:748
                    const u32 Uh_5tlreg41182 = Uv_1i.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg41183 = _BinOpAddUnsigned32(Uh_5tlreg41182, Uh_5tlreg41180, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                    Uv_1i.write(Uh_5tlreg41183); //gcnl:Node.cpp:892
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }

//! Majority.ulam:64:       if (up == down){
                {

//! Majority.ulam:64:       if (up == down){
                  const u32 Uh_5tlreg41185 = Uv_4down.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg41187 = Uv_2up.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg41188 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg41187, Uh_5tlreg41185, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg41188, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Majority.ulam:65:         mUp = random.oneIn(2);
                      UlamRef<EC> Uh_3tur41190(ur, 10u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg41191 = 2; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg41192 = _Int32ToUnsigned32(Uh_5tlreg41191, 3, 32); //gcnl:NodeCast.cpp:748
                      Ui_Ut_102321u<EC> Uh_5tlval41193(Uh_5tlreg41192); //gcnl:Node.cpp:1142
                      const Ui_Ut_10111b<EC> Uh_5tlval41195 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur41190, Uh_5tlval41193); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg41196 = Uh_5tlval41195.read(); //gcnl:Node.cpp:1170
                      UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41196); //gcnl:Node.cpp:892
                    }
                  } // end if
                  else
                  {

//! Majority.ulam:67:       else mUp = (up >= down);
                      const u32 Uh_5tlreg41199 = Uv_4down.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg41201 = Uv_2up.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg41202 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg41201, Uh_5tlreg41199, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                      UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41202); //gcnl:Node.cpp:892
                  } //end else
                }
              }
            } // end if
            else
            {
              {

//! Majority.ulam:69:       cd--;
                const u32 Uh_5tlreg41204 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg41205 = _Int32ToUnsigned32(Uh_5tlreg41204, 32, 8); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg41207 = UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg41208 = _BinOpSubtractUnsigned32(Uh_5tlreg41207, Uh_5tlreg41205, 8); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                UlamRef<EC>(ur, 2u, 8u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg41208); //gcnl:Node.cpp:892
              }
            } //end else
          }
      } //end else
    }

  } // Uf_6behave



//! Majority.ulam:74:   ARGB getColor(Unsigned selector) {
  template<class EC>
  Ui_Ut_14181u<EC> Ue_102108Majority10<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! Majority.ulam:75:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
    {

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
      const u32 Uh_5tlreg41210 = UlamRef<EC>(ur, 1u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      if(_Bool32ToCbool(Uh_5tlreg41210, 1)) //gcnl:NodeControl.cpp:213
      {

//! Majority.ulam:76:     if (mUp) return cu.color(0x0,0xff,0x0);
          UlamRef<EC> Uh_3tur41212(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41213 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41214 = _Unsigned32ToBits32(Uh_5tlreg41213, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41215(Uh_5tlreg41214); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41216 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41217 = _Unsigned32ToBits32(Uh_5tlreg41216, 8, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41218(Uh_5tlreg41217); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41219 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41220 = _Unsigned32ToBits32(Uh_5tlreg41219, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41221(Uh_5tlreg41220); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval41223 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur41212, Uh_5tlval41215, Uh_5tlval41218, Uh_5tlval41221); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41224 = Uh_5tlval41223.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval41225(Uh_5tlreg41224); //gcnl:Node.cpp:1142
          return (Uh_5tlval41225); //gcnl:NodeReturnStatement.cpp:343
      } // end if
      else
      {

//! Majority.ulam:77:     else  return cu.color(0xff,0x0,0x0);
          UlamRef<EC> Uh_3tur41227(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg41228 = 255u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41229 = _Unsigned32ToBits32(Uh_5tlreg41228, 8, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41230(Uh_5tlreg41229); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41231 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41232 = _Unsigned32ToBits32(Uh_5tlreg41231, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41233(Uh_5tlreg41232); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg41234 = 0u; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg41235 = _Unsigned32ToBits32(Uh_5tlreg41234, 1, 8); //gcnl:NodeCast.cpp:748
          Ui_Ut_10181t<EC> Uh_5tlval41236(Uh_5tlreg41235); //gcnl:Node.cpp:1142
          const Ui_Ut_14181u<EC> Uh_5tlval41238 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur41227, Uh_5tlval41230, Uh_5tlval41233, Uh_5tlval41236); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg41239 = Uh_5tlval41238.read(); //gcnl:Node.cpp:1170
          Ui_Ut_14181u<EC> Uh_5tlval41240(Uh_5tlreg41239); //gcnl:Node.cpp:1142
          return (Uh_5tlval41240); //gcnl:NodeReturnStatement.cpp:343
      } //end else
    }

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102108Majority10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10114Once10", "mOnce", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "mUp", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10181u", "cd", 2u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Uq_10106Random10", "random", 10u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102108Majority10<EC>::GetDataMemberCount() const
  {
    return 5; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102108Majority10<EC>::GetMangledClassName() const
  {
    return "Ue_102108Majority10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102108Majority10<EC>::GetClassLength( ) const
  {
    return 10; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102108Majority10<EC>::GetString(u32 sidx)  const
  {
    const u32 USERSTRINGPOOLSIZE = 1; //gcnl:NodeBlockClass.cpp:2537
    static unsigned char UserStringPool[USERSTRINGPOOLSIZE + 1] = 
      "\000"
    ; //gcnl:StringPoolUser.cpp:127

    if(sidx == 0)
      FAIL(UNINITIALIZED_VALUE); //gcnl:NodeBlockClass.cpp:2546
    if(sidx >= USERSTRINGPOOLSIZE)
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2555
    return UserStringPool + sidx + 1; //gcnl:NodeBlockClass.cpp:2561
  } //GetString

  template<class EC>
  u32 Ue_102108Majority10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102108Majority10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    static const u32 vales[(96 + 31)/32] = { 0x4, 0x0, 0x0 }; //gcnl:CompilerState.cpp:1395
    static BitVector<96> initBV; //gcnl:CompilerState.cpp:1401
    static bool initdone;
    if(!initdone)
    {
      initdone = true;
      initBV.FromArray(vales); //gcnl:CompilerState.cpp:1417
      //correct runtime regnum for strings
      const Ui_Uq_10114Once10<EC> Uh_5tlreg41241; //gcnl:NodeVarDeclDM.cpp:801
      const u32 Uh_5tlreg41242(Uh_5tlreg41241.read()); //gcnl:NodeVarDeclDM.cpp:811
      initBV.Write(25u, 1, Uh_5tlreg41242); //Um_5mOnce //gcnl:NodeVarDeclDM.cpp:832
    } //gcnl:CompilerState.cpp:1439
    initBV.Write(0u, T::ATOM_FIRST_STATE_BIT, da.Read(0u, T::ATOM_FIRST_STATE_BIT)); //gcnl:NodeBlockClass.cpp:2087
    da.WriteBV(0u, initBV); //gcnl:NodeBlockClass.cpp:2089
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102108Majority10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102108Majority10<EC>::Uf_6behave10) &Ue_102108Majority10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_102108Majority10<EC>::Uf_8getColor11102321u) &Ue_102108Majority10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102108Majority10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102108Majority10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102108Majority10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102108Majority10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102108Majority10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102108Majority10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

