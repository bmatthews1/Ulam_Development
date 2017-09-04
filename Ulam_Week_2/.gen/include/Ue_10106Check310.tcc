/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_10106Check310<EC>::Ue_10106Check310() : UlamElement<EC>(MFM_UUID_FOR("Ue10106Check310", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("Check3"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_10106Check310<EC>::~Ue_10106Check310(){} //gcnl:NodeBlockClass.cpp:1743


//! Check3.ulam:9:   Void behave(){
  template<class EC>
  void Ue_10106Check310<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Check3.ulam:10:     Bool left = (ew[1] is Check3);
    UlamRef<EC> Uh_3tur211(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg212 = 1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg213 = _Int32ToUnsigned32(Uh_5tlreg212, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval214(Uh_5tlreg213); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval216 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur211, Uh_5tlval214); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg217 = Ue_10106Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval216.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_4left(Uh_5tlreg217); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:11:     Bool right = (ew[4] is Check3);
    UlamRef<EC> Uh_3tur219(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg220 = 4; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg221 = _Int32ToUnsigned32(Uh_5tlreg220, 4, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval222(Uh_5tlreg221); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval224 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur219, Uh_5tlval222); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg225 = Ue_10106Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval224.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_5right(Uh_5tlreg225); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:12:     Bool up = (ew[2] is Check3);
    UlamRef<EC> Uh_3tur227(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg228 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg229 = _Int32ToUnsigned32(Uh_5tlreg228, 3, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval230(Uh_5tlreg229); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval232 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur227, Uh_5tlval230); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg233 = Ue_10106Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval232.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_2up(Uh_5tlreg233); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:13:     Bool down = (ew[3] is Check3);
    UlamRef<EC> Uh_3tur235(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg236 = 3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg237 = _Int32ToUnsigned32(Uh_5tlreg236, 3, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval238(Uh_5tlreg237); //gcnl:Node.cpp:1142
    Ui_Ut_r102961a<EC> Uh_5tuval240 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur235, Uh_5tlval238); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg241 = Ue_10106Check310<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval240.read()); //gcnl:NodeConditionalIs.cpp:285
    Ui_Ut_10111b<EC> Uv_4down(Uh_5tlreg241); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:16:     if (!left && !right && !up && !down){
    {

//! Check3.ulam:16:     if (!left && !right && !up && !down){
      u32 Uh_5tlreg242 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg243 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      u32 Uh_5tlreg244 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
      const u32 Uh_5tlreg246 = Uv_4left.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg247 = _LogicalBangBool32(Uh_5tlreg246, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg247, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg249 = Uv_5right.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg250 = _LogicalBangBool32(Uh_5tlreg249, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg244 = Uh_5tlreg250; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg244, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg252 = Uv_2up.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg253 = _LogicalBangBool32(Uh_5tlreg252, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg243 = Uh_5tlreg253; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg243, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
      {
        const u32 Uh_5tlreg255 = Uv_4down.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg256 = _LogicalBangBool32(Uh_5tlreg255, 1); //gcnl:NodeUnaryOp.cpp:507
        Uh_5tlreg242 = Uh_5tlreg256; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
      }
      if(_Bool32ToCbool(Uh_5tlreg242, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
          {

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
            const u32 Uh_5tlreg257 = 1; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg258 = _Int32ToUnsigned32(Uh_5tlreg257, 2, 6); //gcnl:NodeCast.cpp:748
            Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg258); //gcnl:NodeVarDecl.cpp:1081

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
            while(true)
            {
              const u32 Uh_5tlreg259 = 9; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg260 = _Int32ToInt32(Uh_5tlreg259, 5, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg262 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg263 = _Unsigned32ToInt32(Uh_5tlreg262, 6, 7); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg264 = _BinOpCompareLessThanInt32(Uh_5tlreg263, Uh_5tlreg260, 7); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg264, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
              {

//! Check3.ulam:18:         ew[i] = ew[0];
                UlamRef<EC> Uh_3tur266(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg267 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg268 = _Int32ToUnsigned32(Uh_5tlreg267, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval269(Uh_5tlreg268); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval271 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur266, Uh_5tlval269); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur273(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg275 = Uv_1i.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval276(Uh_5tlreg275); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval278 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur273, Uh_5tlval276); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval278.WriteAtom(Uh_5tuval271.read()); //write into atomof ref //gcnl:Node.cpp:992
              }

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
Ul_214endcontrolloop11:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Check3.ulam:17:       for (SiteNumber i = 1; i < 9; i++){
              const u32 Uh_5tlreg279 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg280 = _Int32ToUnsigned32(Uh_5tlreg279, 32, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg282 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg283 = _BinOpAddUnsigned32(Uh_5tlreg282, Uh_5tlreg280, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg283); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }
        }
      } // end if
      else
      {

//! Check3.ulam:23:     else if (left && up && !down && !right){
          {

//! Check3.ulam:23:     else if (left && up && !down && !right){
            u32 Uh_5tlreg284 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            u32 Uh_5tlreg285 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            u32 Uh_5tlreg286 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg288 = Uv_4left.read(); //gcnl:Node.cpp:698
            if(_Bool32ToCbool(Uh_5tlreg288, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg290 = Uv_2up.read(); //gcnl:Node.cpp:698
              Uh_5tlreg286 = Uh_5tlreg290; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg286, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg292 = Uv_4down.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg293 = _LogicalBangBool32(Uh_5tlreg292, 1); //gcnl:NodeUnaryOp.cpp:507
              Uh_5tlreg285 = Uh_5tlreg293; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg285, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg295 = Uv_5right.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg296 = _LogicalBangBool32(Uh_5tlreg295, 1); //gcnl:NodeUnaryOp.cpp:507
              Uh_5tlreg284 = Uh_5tlreg296; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg284, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Check3.ulam:24:       ew[8] = ew[0];
                UlamRef<EC> Uh_3tur298(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg299 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3100 = _Int32ToUnsigned32(Uh_5tlreg299, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3101(Uh_5tlreg3100); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3103 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur298, Uh_5tlval3101); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3105(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3106 = 8; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3107 = _Int32ToUnsigned32(Uh_5tlreg3106, 5, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3108(Uh_5tlreg3107); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3110 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3105, Uh_5tlval3108); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3110.WriteAtom(Uh_5tuval3103.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:25:       ew[18] = ew[0];
                UlamRef<EC> Uh_3tur3112(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3113 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3114 = _Int32ToUnsigned32(Uh_5tlreg3113, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3115(Uh_5tlreg3114); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3117 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3112, Uh_5tlval3115); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3119(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3120 = 18; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3121 = _Int32ToUnsigned32(Uh_5tlreg3120, 6, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3122(Uh_5tlreg3121); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3124 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3119, Uh_5tlval3122); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3124.WriteAtom(Uh_5tuval3117.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:26:       ew[20] = ew[0];
                UlamRef<EC> Uh_3tur3126(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3127 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3128 = _Int32ToUnsigned32(Uh_5tlreg3127, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3129(Uh_5tlreg3128); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3131 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3126, Uh_5tlval3129); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3133(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3134 = 20; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3135 = _Int32ToUnsigned32(Uh_5tlreg3134, 6, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3136(Uh_5tlreg3135); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3138 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3133, Uh_5tlval3136); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3138.WriteAtom(Uh_5tuval3131.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:28:       ew[34] = ew[0];
                UlamRef<EC> Uh_3tur3140(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3141 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3142 = _Int32ToUnsigned32(Uh_5tlreg3141, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3143(Uh_5tlreg3142); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3145 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3140, Uh_5tlval3143); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3147(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3148 = 34; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3149 = _Int32ToUnsigned32(Uh_5tlreg3148, 7, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3150(Uh_5tlreg3149); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3152 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3147, Uh_5tlval3150); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3152.WriteAtom(Uh_5tuval3145.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:29:       ew[36] = ew[0];
                UlamRef<EC> Uh_3tur3154(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3155 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3156 = _Int32ToUnsigned32(Uh_5tlreg3155, 2, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3157(Uh_5tlreg3156); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3159 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3154, Uh_5tlval3157); //gcnl:NodeFunctionCall.cpp:1043
                UlamRef<EC> Uh_3tur3161(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3162 = 36; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3163 = _Int32ToUnsigned32(Uh_5tlreg3162, 7, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3164(Uh_5tlreg3163); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3166 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3161, Uh_5tlval3164); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3166.WriteAtom(Uh_5tuval3159.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
            else
            {

//! Check3.ulam:33:     else if (right && up && !down && !left){
                {

//! Check3.ulam:33:     else if (right && up && !down && !left){
                  u32 Uh_5tlreg3167 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg3168 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  u32 Uh_5tlreg3169 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                  const u32 Uh_5tlreg3171 = Uv_5right.read(); //gcnl:Node.cpp:698
                  if(_Bool32ToCbool(Uh_5tlreg3171, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg3173 = Uv_2up.read(); //gcnl:Node.cpp:698
                    Uh_5tlreg3169 = Uh_5tlreg3173; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg3169, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg3175 = Uv_4down.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg3176 = _LogicalBangBool32(Uh_5tlreg3175, 1); //gcnl:NodeUnaryOp.cpp:507
                    Uh_5tlreg3168 = Uh_5tlreg3176; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg3168, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                  {
                    const u32 Uh_5tlreg3178 = Uv_4left.read(); //gcnl:Node.cpp:698
                    const u32 Uh_5tlreg3179 = _LogicalBangBool32(Uh_5tlreg3178, 1); //gcnl:NodeUnaryOp.cpp:507
                    Uh_5tlreg3167 = Uh_5tlreg3179; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                  }
                  if(_Bool32ToCbool(Uh_5tlreg3167, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Check3.ulam:34:       ew[6] = ew[0];
                      UlamRef<EC> Uh_3tur3181(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3182 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3183 = _Int32ToUnsigned32(Uh_5tlreg3182, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3184(Uh_5tlreg3183); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3186 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3181, Uh_5tlval3184); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3188(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3189 = 6; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3190 = _Int32ToUnsigned32(Uh_5tlreg3189, 4, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3191(Uh_5tlreg3190); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3193 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3188, Uh_5tlval3191); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3193.WriteAtom(Uh_5tuval3186.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:35:       ew[14] = ew[0];
                      UlamRef<EC> Uh_3tur3195(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3196 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3197 = _Int32ToUnsigned32(Uh_5tlreg3196, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3198(Uh_5tlreg3197); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3200 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3195, Uh_5tlval3198); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3202(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3203 = 14; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3204 = _Int32ToUnsigned32(Uh_5tlreg3203, 5, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3205(Uh_5tlreg3204); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3207 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3202, Uh_5tlval3205); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3207.WriteAtom(Uh_5tuval3200.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:36:       ew[16] = ew[0];
                      UlamRef<EC> Uh_3tur3209(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3210 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3211 = _Int32ToUnsigned32(Uh_5tlreg3210, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3212(Uh_5tlreg3211); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3214 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3209, Uh_5tlval3212); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3216(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3217 = 16; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3218 = _Int32ToUnsigned32(Uh_5tlreg3217, 6, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3219(Uh_5tlreg3218); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3221 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3216, Uh_5tlval3219); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3221.WriteAtom(Uh_5tuval3214.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:38:       ew[30] = ew[0];
                      UlamRef<EC> Uh_3tur3223(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3224 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3225 = _Int32ToUnsigned32(Uh_5tlreg3224, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3226(Uh_5tlreg3225); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3228 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3223, Uh_5tlval3226); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3230(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3231 = 30; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3232 = _Int32ToUnsigned32(Uh_5tlreg3231, 6, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3233(Uh_5tlreg3232); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3235 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3230, Uh_5tlval3233); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3235.WriteAtom(Uh_5tuval3228.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:39:       ew[32] = ew[0];
                      UlamRef<EC> Uh_3tur3237(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3238 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3239 = _Int32ToUnsigned32(Uh_5tlreg3238, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3240(Uh_5tlreg3239); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3242 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3237, Uh_5tlval3240); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3244(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3245 = 32; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3246 = _Int32ToUnsigned32(Uh_5tlreg3245, 7, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3247(Uh_5tlreg3246); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3249 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3244, Uh_5tlval3247); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3249.WriteAtom(Uh_5tuval3242.read()); //write into atomof ref //gcnl:Node.cpp:992
                    }
                  } // end if
                  else
                  {

//! Check3.ulam:43:     else if (left && down && !up && !right){
                      {

//! Check3.ulam:43:     else if (left && down && !up && !right){
                        u32 Uh_5tlreg3250 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                        u32 Uh_5tlreg3251 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                        u32 Uh_5tlreg3252 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                        const u32 Uh_5tlreg3254 = Uv_4left.read(); //gcnl:Node.cpp:698
                        if(_Bool32ToCbool(Uh_5tlreg3254, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                        {
                          const u32 Uh_5tlreg3256 = Uv_4down.read(); //gcnl:Node.cpp:698
                          Uh_5tlreg3252 = Uh_5tlreg3256; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                        }
                        if(_Bool32ToCbool(Uh_5tlreg3252, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                        {
                          const u32 Uh_5tlreg3258 = Uv_2up.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg3259 = _LogicalBangBool32(Uh_5tlreg3258, 1); //gcnl:NodeUnaryOp.cpp:507
                          Uh_5tlreg3251 = Uh_5tlreg3259; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                        }
                        if(_Bool32ToCbool(Uh_5tlreg3251, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                        {
                          const u32 Uh_5tlreg3261 = Uv_5right.read(); //gcnl:Node.cpp:698
                          const u32 Uh_5tlreg3262 = _LogicalBangBool32(Uh_5tlreg3261, 1); //gcnl:NodeUnaryOp.cpp:507
                          Uh_5tlreg3250 = Uh_5tlreg3262; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                        }
                        if(_Bool32ToCbool(Uh_5tlreg3250, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Check3.ulam:44:       ew[7] = ew[0];
                            UlamRef<EC> Uh_3tur3264(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3265 = 0; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3266 = _Int32ToUnsigned32(Uh_5tlreg3265, 2, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3267(Uh_5tlreg3266); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3269 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3264, Uh_5tlval3267); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3271(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3272 = 7; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3273 = _Int32ToUnsigned32(Uh_5tlreg3272, 4, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3274(Uh_5tlreg3273); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3276 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3271, Uh_5tlval3274); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3276.WriteAtom(Uh_5tuval3269.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:45:       ew[17] = ew[0];
                            UlamRef<EC> Uh_3tur3278(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3279 = 0; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3280 = _Int32ToUnsigned32(Uh_5tlreg3279, 2, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3281(Uh_5tlreg3280); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3283 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3278, Uh_5tlval3281); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3285(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3286 = 17; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3287 = _Int32ToUnsigned32(Uh_5tlreg3286, 6, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3288(Uh_5tlreg3287); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3290 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3285, Uh_5tlval3288); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3290.WriteAtom(Uh_5tuval3283.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:46:       ew[19] = ew[0];
                            UlamRef<EC> Uh_3tur3292(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3293 = 0; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3294 = _Int32ToUnsigned32(Uh_5tlreg3293, 2, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3295(Uh_5tlreg3294); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3297 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3292, Uh_5tlval3295); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3299(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3300 = 19; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3301 = _Int32ToUnsigned32(Uh_5tlreg3300, 6, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3302(Uh_5tlreg3301); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3304 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3299, Uh_5tlval3302); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3304.WriteAtom(Uh_5tuval3297.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:48:       ew[33] = ew[0];
                            UlamRef<EC> Uh_3tur3306(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3307 = 0; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3308 = _Int32ToUnsigned32(Uh_5tlreg3307, 2, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3309(Uh_5tlreg3308); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3311 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3306, Uh_5tlval3309); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3313(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3314 = 33; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3315 = _Int32ToUnsigned32(Uh_5tlreg3314, 7, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3316(Uh_5tlreg3315); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3318 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3313, Uh_5tlval3316); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3318.WriteAtom(Uh_5tuval3311.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:49:       ew[35] = ew[0];
                            UlamRef<EC> Uh_3tur3320(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3321 = 0; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3322 = _Int32ToUnsigned32(Uh_5tlreg3321, 2, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3323(Uh_5tlreg3322); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3325 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3320, Uh_5tlval3323); //gcnl:NodeFunctionCall.cpp:1043
                            UlamRef<EC> Uh_3tur3327(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3328 = 35; //gcnl:NodeTerminal.cpp:690
                            const u32 Uh_5tlreg3329 = _Int32ToUnsigned32(Uh_5tlreg3328, 7, 6); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10161u<EC> Uh_5tlval3330(Uh_5tlreg3329); //gcnl:Node.cpp:1142
                            Ui_Ut_r102961a<EC> Uh_5tuval3332 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3327, Uh_5tlval3330); //gcnl:NodeFunctionCall.cpp:1043
                            Uh_5tuval3332.WriteAtom(Uh_5tuval3325.read()); //write into atomof ref //gcnl:Node.cpp:992
                          }
                        } // end if
                        else
                        {

//! Check3.ulam:53:     else if (right && down && !up && !left){
                            {

//! Check3.ulam:53:     else if (right && down && !up && !left){
                              u32 Uh_5tlreg3333 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              u32 Uh_5tlreg3334 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              u32 Uh_5tlreg3335 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
                              const u32 Uh_5tlreg3337 = Uv_5right.read(); //gcnl:Node.cpp:698
                              if(_Bool32ToCbool(Uh_5tlreg3337, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg3339 = Uv_4down.read(); //gcnl:Node.cpp:698
                                Uh_5tlreg3335 = Uh_5tlreg3339; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg3335, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg3341 = Uv_2up.read(); //gcnl:Node.cpp:698
                                const u32 Uh_5tlreg3342 = _LogicalBangBool32(Uh_5tlreg3341, 1); //gcnl:NodeUnaryOp.cpp:507
                                Uh_5tlreg3334 = Uh_5tlreg3342; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg3334, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
                              {
                                const u32 Uh_5tlreg3344 = Uv_4left.read(); //gcnl:Node.cpp:698
                                const u32 Uh_5tlreg3345 = _LogicalBangBool32(Uh_5tlreg3344, 1); //gcnl:NodeUnaryOp.cpp:507
                                Uh_5tlreg3333 = Uh_5tlreg3345; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
                              }
                              if(_Bool32ToCbool(Uh_5tlreg3333, 1)) //gcnl:NodeControl.cpp:213
                              {
                                {

//! Check3.ulam:54:       ew[5] = ew[0];
                                  UlamRef<EC> Uh_3tur3347(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3348 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3349 = _Int32ToUnsigned32(Uh_5tlreg3348, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3350(Uh_5tlreg3349); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3352 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3347, Uh_5tlval3350); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur3354(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3355 = 5; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3356 = _Int32ToUnsigned32(Uh_5tlreg3355, 4, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3357(Uh_5tlreg3356); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3359 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3354, Uh_5tlval3357); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval3359.WriteAtom(Uh_5tuval3352.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:55:       ew[13] = ew[0];
                                  UlamRef<EC> Uh_3tur3361(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3362 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3363 = _Int32ToUnsigned32(Uh_5tlreg3362, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3364(Uh_5tlreg3363); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3366 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3361, Uh_5tlval3364); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur3368(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3369 = 13; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3370 = _Int32ToUnsigned32(Uh_5tlreg3369, 5, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3371(Uh_5tlreg3370); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3373 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3368, Uh_5tlval3371); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval3373.WriteAtom(Uh_5tuval3366.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:56:       ew[15] = ew[0];
                                  UlamRef<EC> Uh_3tur3375(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3376 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3377 = _Int32ToUnsigned32(Uh_5tlreg3376, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3378(Uh_5tlreg3377); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3380 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3375, Uh_5tlval3378); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur3382(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3383 = 15; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3384 = _Int32ToUnsigned32(Uh_5tlreg3383, 5, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3385(Uh_5tlreg3384); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3387 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3382, Uh_5tlval3385); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval3387.WriteAtom(Uh_5tuval3380.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:58:       ew[29] = ew[0];
                                  UlamRef<EC> Uh_3tur3389(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3390 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3391 = _Int32ToUnsigned32(Uh_5tlreg3390, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3392(Uh_5tlreg3391); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3394 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3389, Uh_5tlval3392); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur3396(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3397 = 29; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3398 = _Int32ToUnsigned32(Uh_5tlreg3397, 6, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3399(Uh_5tlreg3398); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3401 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3396, Uh_5tlval3399); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval3401.WriteAtom(Uh_5tuval3394.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Check3.ulam:59:       ew[31] = ew[0];
                                  UlamRef<EC> Uh_3tur3403(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3404 = 0; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3405 = _Int32ToUnsigned32(Uh_5tlreg3404, 2, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3406(Uh_5tlreg3405); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3408 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3403, Uh_5tlval3406); //gcnl:NodeFunctionCall.cpp:1043
                                  UlamRef<EC> Uh_3tur3410(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                                  const u32 Uh_5tlreg3411 = 31; //gcnl:NodeTerminal.cpp:690
                                  const u32 Uh_5tlreg3412 = _Int32ToUnsigned32(Uh_5tlreg3411, 6, 6); //gcnl:NodeCast.cpp:748
                                  Ui_Ut_10161u<EC> Uh_5tlval3413(Uh_5tlreg3412); //gcnl:Node.cpp:1142
                                  Ui_Ut_r102961a<EC> Uh_5tuval3415 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3410, Uh_5tlval3413); //gcnl:NodeFunctionCall.cpp:1043
                                  Uh_5tuval3415.WriteAtom(Uh_5tuval3408.read()); //write into atomof ref //gcnl:Node.cpp:992
                                }
                              } // end if
                            }
                        } //end else
                      }
                  } //end else
                }
            } //end else
          }
      } //end else
    }

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_10106Check310<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_10106Check310<EC>::GetDataMemberCount() const
  {
    return 1; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_10106Check310<EC>::GetMangledClassName() const
  {
    return "Ue_10106Check310"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_10106Check310<EC>::GetClassLength( ) const
  {
    return 0; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_10106Check310<EC>::GetString(u32 sidx)  const
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
  u32 Ue_10106Check310<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_10106Check310<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_10106Check310<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_10106Check310<EC>::Uf_6behave10) &Ue_10106Check310<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_10106Check310<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_10106Check310<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_10106Check310<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_10106Check310<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_10106Check310<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_10106Check310<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

