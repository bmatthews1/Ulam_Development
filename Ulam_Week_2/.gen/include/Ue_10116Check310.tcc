/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10109210ColorUtils10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10116Check310<EC>::Ue_10116Check310() : UlamElement<EC>(MFM_UUID_FOR("Ue10116Check310", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("Check3"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10116Check310<EC>::~Ue_10116Check310(){} //gcnl:NodeBlockClass.cpp:1743


//! Check3.ulam:30:   Void behave(){
  template<class EC>
  void Ue_10116Check310<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Check3.ulam:31:     Bool left = (ew[1] is Check3);
    UlamRef<EC> Uh_3tur214(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg215 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg216 = _Int32ToUnsigned32(Uh_5tlreg215, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval217(Uh_5tlreg216); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval219 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur214, Uh_5tlval217); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg220 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval219.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_4left(Uh_5tlreg220); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:32:     Bool right = (ew[4] is Check3);
    UlamRef<EC> Uh_3tur222(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg223 = 4; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg224 = _Int32ToUnsigned32(Uh_5tlreg223, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval225(Uh_5tlreg224); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval227 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur222, Uh_5tlval225); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg228 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval227.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_5right(Uh_5tlreg228); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:33:     Bool up = (ew[2] is Check3);
    UlamRef<EC> Uh_3tur230(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg231 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg232 = _Int32ToUnsigned32(Uh_5tlreg231, 3, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval233(Uh_5tlreg232); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval235 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur230, Uh_5tlval233); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg236 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval235.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2up(Uh_5tlreg236); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:34:     Bool down = (ew[3] is Check3);
    UlamRef<EC> Uh_3tur238(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg239 = 3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg240 = _Int32ToUnsigned32(Uh_5tlreg239, 3, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval241(Uh_5tlreg240); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval243 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur238, Uh_5tlval241); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg244 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval243.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_4down(Uh_5tlreg244); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:35: 	Bool nw = (ew[5] is Check3);
    UlamRef<EC> Uh_3tur246(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg247 = 5; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg248 = _Int32ToUnsigned32(Uh_5tlreg247, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval249(Uh_5tlreg248); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval251 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur246, Uh_5tlval249); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg252 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval251.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2nw(Uh_5tlreg252); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:36:     Bool ne = (ew[7] is Check3);
    UlamRef<EC> Uh_3tur254(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg255 = 7; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg256 = _Int32ToUnsigned32(Uh_5tlreg255, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval257(Uh_5tlreg256); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval259 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur254, Uh_5tlval257); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg260 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval259.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2ne(Uh_5tlreg260); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:37:     Bool sw = (ew[6] is Check3);
    UlamRef<EC> Uh_3tur262(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg263 = 6; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg264 = _Int32ToUnsigned32(Uh_5tlreg263, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval265(Uh_5tlreg264); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval267 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur262, Uh_5tlval265); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg268 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval267.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2sw(Uh_5tlreg268); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:38:     Bool se = (ew[8] is Check3);
    UlamRef<EC> Uh_3tur270(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg271 = 8; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg272 = _Int32ToUnsigned32(Uh_5tlreg271, 5, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval273(Uh_5tlreg272); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval275 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur270, Uh_5tlval273); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg276 = Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval275.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2se(Uh_5tlreg276); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:41:     if (!left && !right && !up && !down &&
    {

//! Check3.ulam:41:     if (!left && !right && !up && !down &&
      u32 Uh_5tlreg277 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg278 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg279 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg280 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg281 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg282 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg283 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg285 = Uv_4left.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg286 = _LogicalBangBool32(Uh_5tlreg285, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg286, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg288 = Uv_5right.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg289 = _LogicalBangBool32(Uh_5tlreg288, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg283 = Uh_5tlreg289; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg283, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg291 = Uv_2up.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg292 = _LogicalBangBool32(Uh_5tlreg291, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg282 = Uh_5tlreg292; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg282, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg294 = Uv_4down.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg295 = _LogicalBangBool32(Uh_5tlreg294, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg281 = Uh_5tlreg295; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg281, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg297 = Uv_2nw.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg298 = _LogicalBangBool32(Uh_5tlreg297, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg280 = Uh_5tlreg298; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg280, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3100 = Uv_2ne.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3101 = _LogicalBangBool32(Uh_5tlreg3100, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg279 = Uh_5tlreg3101; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg279, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3103 = Uv_2sw.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3104 = _LogicalBangBool32(Uh_5tlreg3103, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg278 = Uh_5tlreg3104; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg278, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3106 = Uv_2se.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3107 = _LogicalBangBool32(Uh_5tlreg3106, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg277 = Uh_5tlreg3107; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg277, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
          {

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
            const u32 Uh_5tlreg3108 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3109 = _Int32ToUnsigned32(Uh_5tlreg3108, 2, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3109); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
            while(true)
            {
              const u32 Uh_5tlreg3110 = 9; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3111 = _Int32ToInt32(Uh_5tlreg3110, 5, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3113 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3114 = _Unsigned32ToInt32(Uh_5tlreg3113, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3115 = _BinOpCompareLessThanInt32(Uh_5tlreg3114, Uh_5tlreg3111, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg3115, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
              {

//! Check3.ulam:44:         ew[i] = ew[0];
                UlamRef<EC> Uh_3tur3117(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3118 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3119 = _Int32ToUnsigned32(Uh_5tlreg3118, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3120(Uh_5tlreg3119); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3122 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3117, Uh_5tlval3120); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3124(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3126 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3127(Uh_5tlreg3126); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3129 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3124, Uh_5tlval3127); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3129.WriteAtom(Uh_5tuval3122.read()); //write into atomof ref //gcnl:Node.cpp:992
              }

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
Ul_214endcontrolloop11:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Check3.ulam:43:       for (SiteNumber i = 1; i < 9; i++){
              const u32 Uh_5tlreg3130 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3131 = _Int32ToUnsigned32(Uh_5tlreg3130, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3133 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3134 = _BinOpAddUnsigned32(Uh_5tlreg3133, Uh_5tlreg3131, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3134); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }

//! Check3.ulam:46:       return;
          return; //gcnl:NodeReturnStatement.cpp:348
        }
      } // end if
    }

//! Check3.ulam:50:     if (left && up && !right && !down){
    {

//! Check3.ulam:50:     if (left && up && !right && !down){
      u32 Uh_5tlreg3135 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3136 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3137 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3139 = Uv_4left.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg3139, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3141 = Uv_2up.read(); //gcnl:Node.cpp:698
        Uh_5tlreg3137 = Uh_5tlreg3141; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3137, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3143 = Uv_5right.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3144 = _LogicalBangBool32(Uh_5tlreg3143, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg3136 = Uh_5tlreg3144; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3136, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3146 = Uv_4down.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3147 = _LogicalBangBool32(Uh_5tlreg3146, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg3135 = Uh_5tlreg3147; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3135, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:51:       ew[8] = ew[0];
          UlamRef<EC> Uh_3tur3149(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3150 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3151 = _Int32ToUnsigned32(Uh_5tlreg3150, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3152(Uh_5tlreg3151); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3154 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3149, Uh_5tlval3152); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3156(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3157 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3158 = _Int32ToUnsigned32(Uh_5tlreg3157, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3159(Uh_5tlreg3158); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3161 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3156, Uh_5tlval3159); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3161.WriteAtom(Uh_5tuval3154.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:52:       Check3 ch = (Check3)ew[8];
          UlamRef<EC> Uh_3tur3163(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3164 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3165 = _Int32ToUnsigned32(Uh_5tlreg3164, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3166(Uh_5tlreg3165); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3168 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3163, Uh_5tlval3166); //gcnl:NodeFunctionCall.cpp:1043
          if(!Ue_10116Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3168.ReadAtom())) //gcnl:NodeCast.cpp:872
            FAIL(BAD_CAST); //gcnl:NodeCast.cpp:876
          Ui_Ue_10116Check310<EC> Uv_2ch(Uh_5tuval3168.read()); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:53:       ch.isRed = !isRed;
          const u32 Uh_5tlreg3170 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3171 = _LogicalBangBool32(Uh_5tlreg3170, 1); //gcnl:NodeUnaryOp.cpp:507
          UlamRef<EC>(25u, 1u, Uv_2ch, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3171); //gcnl:Node.cpp:892

//! Check3.ulam:54:       ew[8] = ch;
          const T Uh_3tut3175 = Uv_2ch.read(); //gcnl:Node.cpp:698
          UlamRef<EC> Uh_3tur3177(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3178 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3179 = _Int32ToUnsigned32(Uh_5tlreg3178, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3180(Uh_5tlreg3179); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3182 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3177, Uh_5tlval3180); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3182.WriteAtom(Uh_3tut3175); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:55:       return;
          return; //gcnl:NodeReturnStatement.cpp:348
        }
      } // end if
    }

//! Check3.ulam:59:     if (nw && !ne && !sw && !se){
    {

//! Check3.ulam:59:     if (nw && !ne && !sw && !se){
      u32 Uh_5tlreg3183 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3184 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3185 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3187 = Uv_2nw.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg3187, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3189 = Uv_2ne.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3190 = _LogicalBangBool32(Uh_5tlreg3189, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg3185 = Uh_5tlreg3190; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3185, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3192 = Uv_2sw.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3193 = _LogicalBangBool32(Uh_5tlreg3192, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg3184 = Uh_5tlreg3193; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3184, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3195 = Uv_2se.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3196 = _LogicalBangBool32(Uh_5tlreg3195, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg3183 = Uh_5tlreg3196; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3183, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:60:       ew[3] = ew[0];
          UlamRef<EC> Uh_3tur3198(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3199 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3200 = _Int32ToUnsigned32(Uh_5tlreg3199, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3201(Uh_5tlreg3200); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3203 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3198, Uh_5tlval3201); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3205(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3206 = 3; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3207 = _Int32ToUnsigned32(Uh_5tlreg3206, 3, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3208(Uh_5tlreg3207); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3210 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3205, Uh_5tlval3208); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3210.WriteAtom(Uh_5tuval3203.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:61:       ew[4] = ew[0];
          UlamRef<EC> Uh_3tur3212(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3213 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3214 = _Int32ToUnsigned32(Uh_5tlreg3213, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3215(Uh_5tlreg3214); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3217 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3212, Uh_5tlval3215); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3219(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3220 = 4; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3221 = _Int32ToUnsigned32(Uh_5tlreg3220, 4, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3222(Uh_5tlreg3221); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3224 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3219, Uh_5tlval3222); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3224.WriteAtom(Uh_5tuval3217.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:62:       ew[8] = ew[0];
          UlamRef<EC> Uh_3tur3226(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3227 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3228 = _Int32ToUnsigned32(Uh_5tlreg3227, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3229(Uh_5tlreg3228); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3231 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3226, Uh_5tlval3229); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3233(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3234 = 8; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3235 = _Int32ToUnsigned32(Uh_5tlreg3234, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3236(Uh_5tlreg3235); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3238 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3233, Uh_5tlval3236); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3238.WriteAtom(Uh_5tuval3231.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:63:       ew[11] = ew[0];
          UlamRef<EC> Uh_3tur3240(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3241 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3242 = _Int32ToUnsigned32(Uh_5tlreg3241, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3243(Uh_5tlreg3242); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3245 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3240, Uh_5tlval3243); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3247(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3248 = 11; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3249 = _Int32ToUnsigned32(Uh_5tlreg3248, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3250(Uh_5tlreg3249); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3252 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3247, Uh_5tlval3250); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3252.WriteAtom(Uh_5tuval3245.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:64:       ew[12] = ew[0];
          UlamRef<EC> Uh_3tur3254(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3255 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3256 = _Int32ToUnsigned32(Uh_5tlreg3255, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3257(Uh_5tlreg3256); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3259 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3254, Uh_5tlval3257); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3261(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3262 = 12; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3263 = _Int32ToUnsigned32(Uh_5tlreg3262, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3264(Uh_5tlreg3263); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3266 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3261, Uh_5tlval3264); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3266.WriteAtom(Uh_5tuval3259.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:65:       ew[18] = ew[0];
          UlamRef<EC> Uh_3tur3268(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3269 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3270 = _Int32ToUnsigned32(Uh_5tlreg3269, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3271(Uh_5tlreg3270); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3273 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3268, Uh_5tlval3271); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3275(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3276 = 18; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3277 = _Int32ToUnsigned32(Uh_5tlreg3276, 6, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3278(Uh_5tlreg3277); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3280 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3275, Uh_5tlval3278); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3280.WriteAtom(Uh_5tuval3273.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:66:       ew[20] = ew[0];
          UlamRef<EC> Uh_3tur3282(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3283 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3284 = _Int32ToUnsigned32(Uh_5tlreg3283, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3285(Uh_5tlreg3284); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3287 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3282, Uh_5tlval3285); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3289(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3290 = 20; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3291 = _Int32ToUnsigned32(Uh_5tlreg3290, 6, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3292(Uh_5tlreg3291); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3294 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3289, Uh_5tlval3292); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3294.WriteAtom(Uh_5tuval3287.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:67:       ew[28] = ew[0];
          UlamRef<EC> Uh_3tur3296(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3297 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3298 = _Int32ToUnsigned32(Uh_5tlreg3297, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3299(Uh_5tlreg3298); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3301 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3296, Uh_5tlval3299); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3303(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3304 = 28; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3305 = _Int32ToUnsigned32(Uh_5tlreg3304, 6, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3306(Uh_5tlreg3305); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3308 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3303, Uh_5tlval3306); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3308.WriteAtom(Uh_5tuval3301.read()); //write into atomof ref //gcnl:Node.cpp:992
        }
      } // end if
    }

//! Check3.ulam:71:     if (left && right && up && down){
    {

//! Check3.ulam:71:     if (left && right && up && down){
      u32 Uh_5tlreg3309 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3310 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg3311 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg3313 = Uv_4left.read(); //gcnl:Node.cpp:698
      if(_Bool32ToCbool(Uh_5tlreg3313, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3315 = Uv_5right.read(); //gcnl:Node.cpp:698
        Uh_5tlreg3311 = Uh_5tlreg3315; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3311, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3317 = Uv_2up.read(); //gcnl:Node.cpp:698
        Uh_5tlreg3310 = Uh_5tlreg3317; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3310, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg3319 = Uv_4down.read(); //gcnl:Node.cpp:698
        Uh_5tlreg3309 = Uh_5tlreg3319; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg3309, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
          {

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
            const u32 Uh_5tlreg3320 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3321 = _Int32ToUnsigned32(Uh_5tlreg3320, 2, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg3321); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
            while(true)
            {
              const u32 Uh_5tlreg3322 = 9; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3323 = _Int32ToInt32(Uh_5tlreg3322, 5, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3325 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3326 = _Unsigned32ToInt32(Uh_5tlreg3325, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3327 = _BinOpCompareLessThanInt32(Uh_5tlreg3326, Uh_5tlreg3323, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg3327, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
              {

//! Check3.ulam:73:         ew[i] = ew[0];
                UlamRef<EC> Uh_3tur3329(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3330 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3331 = _Int32ToUnsigned32(Uh_5tlreg3330, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3332(Uh_5tlreg3331); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3334 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3329, Uh_5tlval3332); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3336(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3338 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3339(Uh_5tlreg3338); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3341 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3336, Uh_5tlval3339); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3341.WriteAtom(Uh_5tuval3334.read()); //write into atomof ref //gcnl:Node.cpp:992
              }

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
Ul_214endcontrolloop12:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Check3.ulam:72:       for (SiteNumber i = 1; i < 9; i++){
              const u32 Uh_5tlreg3342 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3343 = _Int32ToUnsigned32(Uh_5tlreg3342, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3345 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3346 = _BinOpAddUnsigned32(Uh_5tlreg3345, Uh_5tlreg3343, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3346); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
    }

  } // Uf_6behave



//! Check3.ulam:16:   ARGB getColor(Unsigned selector){
  template<class EC>
  Ui_Ut_14181u<EC> Ue_10116Check310<EC>::Uf_8getColor(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102321u<EC>& Uv_8selector)
  {

//! Check3.ulam:17:     ColorUtils cu;
    Ui_Uq_10109210ColorUtils10<EC> Uv_2cu; //gcnl:NodeVarDecl.cpp:1118

//! Check3.ulam:18:     ARGB ret=cu.color(0xff00ff00u);
    UlamRef<EC> Uh_3tur3348(0u, 0u, Uv_2cu, &Uq_10109210ColorUtils10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3349 = 4278255360u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_102321u<EC> Uh_5tlval3350(Uh_5tlreg3349); //gcnl:Node.cpp:1142
    const Ui_Ut_14181u<EC> Uh_5tlval3352 = Uq_10109210ColorUtils10<EC>::THE_INSTANCE.Uf_5color(uc, Uh_3tur3348, Uh_5tlval3350); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3353 = Uh_5tlval3352.read(); //gcnl:Node.cpp:1170
    Ui_Ut_14181u<EC> Uv_3ret(Uh_5tlreg3353); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:19:     ret[1]=255;
    const u32 Uh_5tlreg3354 = 255; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3355 = _Int32ToUnsigned32(Uh_5tlreg3354, 9, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3356 = 1; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3356 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3358(Uv_3ret, Uh_5tlreg3356 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3358.write(Uh_5tlreg3355);

//! Check3.ulam:20:     ret[2]=0;
    const u32 Uh_5tlreg3359 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3360 = _Int32ToUnsigned32(Uh_5tlreg3359, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3361 = 2; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3361 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3363(Uv_3ret, Uh_5tlreg3361 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3363.write(Uh_5tlreg3360);

//! Check3.ulam:21:     ret[3]=0;
    const u32 Uh_5tlreg3364 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3365 = _Int32ToUnsigned32(Uh_5tlreg3364, 2, 8); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3366 = 3; //gcnl:NodeTerminal.cpp:690
    if(Uh_5tlreg3366 >= 4) //gcnl:NodeSquareBracket.cpp:874
      FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
    Ui_Ut_r10181u<EC> Uh_6tlref3368(Uv_3ret, Uh_5tlreg3366 * 8u + 0u, uc); //gcnl:Node.cpp:1317
    Uh_6tlref3368.write(Uh_5tlreg3365);

//! Check3.ulam:23:     if (!isRed){
    {

//! Check3.ulam:23:     if (!isRed){
      const u32 Uh_5tlreg3370 = UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3371 = _LogicalBangBool32(Uh_5tlreg3370, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg3371, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:24:       ret[1] = 0;
          const u32 Uh_5tlreg3372 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3373 = _Int32ToUnsigned32(Uh_5tlreg3372, 2, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3374 = 1; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3374 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3376(Uv_3ret, Uh_5tlreg3374 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3376.write(Uh_5tlreg3373);

//! Check3.ulam:25:       ret[2] = 255;
          const u32 Uh_5tlreg3377 = 255; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3378 = _Int32ToUnsigned32(Uh_5tlreg3377, 9, 8); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3379 = 2; //gcnl:NodeTerminal.cpp:690
          if(Uh_5tlreg3379 >= 4) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10181u<EC> Uh_6tlref3381(Uv_3ret, Uh_5tlreg3379 * 8u + 0u, uc); //gcnl:Node.cpp:1317
          Uh_6tlref3381.write(Uh_5tlreg3378);
        }
      } // end if
    }

//! Check3.ulam:27:     return ret;
    const u32 Uh_5tlreg3383 = Uv_3ret.read(); //gcnl:Node.cpp:698
    Ui_Ut_14181u<EC> Uh_5tlval3384(Uh_5tlreg3383); //gcnl:Node.cpp:1142
    return (Uh_5tlval3384); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_8getColor


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10116Check310<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Ut_10111b", "isRed", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10116Check310<EC>::GetDataMemberCount() const
  {
    return 2; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10116Check310<EC>::GetMangledClassName() const
  {
    return "Ue_10116Check310"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10116Check310<EC>::GetClassLength( ) const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10116Check310<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10116Check310<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10116Check310<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10116Check310<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10116Check310<EC>::Uf_6behave10) &Ue_10116Check310<EC>::Uf_6behave),
    (VfuncPtr) ((typename Ue_10116Check310<EC>::Uf_8getColor11102321u) &Ue_10116Check310<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10116Check310<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10116Check310<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10116Check310<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10116Check310<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10116Check310<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10116Check310<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

