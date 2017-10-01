/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_10106Random10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"

namespace MFM{

  template<class EC>
  Ue_102324Cool10<EC>::Ue_102324Cool10() : UlamElement<EC>(MFM_UUID_FOR("Ue102324Cool10", 0))
  {
    //XXXX  Element<EC>::SetAtomicSymbol("C");  // figure this out later
    Element<EC>::SetName("Cool"); //gcnl:NodeBlockClass.cpp:1728
  }

  template<class EC>
  Ue_102324Cool10<EC>::~Ue_102324Cool10(){} //gcnl:NodeBlockClass.cpp:1743


//! Cool.ulam:10:   Void behave(){
  template<class EC>
  void Ue_102324Cool10<EC>::Uf_6behave(const UlamContext<EC>& uc, UlamRef<EC>& ur)
  {

//! Cool.ulam:11:     Int neighbors = 0;
    const u32 Uh_5tlreg242 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg243 = _Int32ToInt32(Uh_5tlreg242, 2, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uv_919neighbors(Uh_5tlreg243); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
    {

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
      const u32 Uh_5tlreg244 = 1u; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg245 = _Unsigned32ToUnsigned32(Uh_5tlreg244, 1, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1i(Uh_5tlreg245); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
      while(true)
      {
        const u32 Uh_5tlreg246 = 5u; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg247 = _Unsigned32ToUnsigned32(Uh_5tlreg246, 3, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg249 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg250 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg249, Uh_5tlreg247, 6); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg250, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
        {

//! Cool.ulam:14:       if (ew[i] is Cool) neighbors++;
          {

//! Cool.ulam:14:       if (ew[i] is Cool) neighbors++;
            UlamRef<EC> Uh_3tur252(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg254 = Uv_1i.read(); //gcnl:Node.cpp:704
            Ui_Ut_10161u<EC> Uh_5tlval255(Uh_5tlreg254); //gcnl:Node.cpp:1148
            Ui_Ut_r102961a<EC> Uh_5tuval257 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur252, Uh_5tlval255); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg258 = Ue_102324Cool10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval257.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg258, 1)) //gcnl:NodeControl.cpp:213
            {

//! Cool.ulam:14:       if (ew[i] is Cool) neighbors++;
                const u32 Uh_5tlreg259 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg261 = Uv_919neighbors.read(); //gcnl:Node.cpp:704
                const u32 Uh_5tlreg262 = _BinOpAddInt32(Uh_5tlreg261, Uh_5tlreg259, 32); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                Uv_919neighbors.write(Uh_5tlreg262); //gcnl:Node.cpp:898
            } // end if
          }
        }

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Cool.ulam:13:     for (Unsigned(6) i = 1u; i < 5u; i++){
        const u32 Uh_5tlreg263 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg264 = _Int32ToUnsigned32(Uh_5tlreg263, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg266 = Uv_1i.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg267 = _BinOpAddUnsigned32(Uh_5tlreg266, Uh_5tlreg264, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg267); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Cool.ulam:17:     if (neighbors > 1) return;
    {

//! Cool.ulam:17:     if (neighbors > 1) return;
      const u32 Uh_5tlreg268 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg269 = _Int32ToInt32(Uh_5tlreg268, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg271 = Uv_919neighbors.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg272 = _BinOpCompareGreaterThanInt32(Uh_5tlreg271, Uh_5tlreg269, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg272, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cool.ulam:17:     if (neighbors > 1) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Cool.ulam:19:     c.y = 0;
    const u32 Uh_5tlreg273 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg274 = _Int32ToInt32(Uh_5tlreg273, 2, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg274); //gcnl:Node.cpp:898

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
    {

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
      const u32 Uh_5tlreg277 = (u32) -4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg278 = _Int32ToInt32(Uh_5tlreg277, 4, 15); //gcnl:NodeCast.cpp:748
      Ui_Ut_102151i<EC> Uv_1x(Uh_5tlreg278); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
      while(true)
      {
        const u32 Uh_5tlreg279 = 5; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg280 = _Int32ToInt32(Uh_5tlreg279, 4, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg282 = Uv_1x.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg283 = _BinOpCompareLessThanInt32(Uh_5tlreg282, Uh_5tlreg280, 15); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg283, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
        {

//! Cool.ulam:21:       if (x == 0) continue;
          {

//! Cool.ulam:21:       if (x == 0) continue;
            const u32 Uh_5tlreg284 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg285 = _Int32ToInt32(Uh_5tlreg284, 2, 15); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg287 = Uv_1x.read(); //gcnl:Node.cpp:704
            const u32 Uh_5tlreg288 = _BinOpCompareEqEqInt32(Uh_5tlreg287, Uh_5tlreg285, 15); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg288, 1)) //gcnl:NodeControl.cpp:213
            {

//! Cool.ulam:21:       if (x == 0) continue;
                goto Ul_214endcontrolloop12; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
            } // end if
          }

//! Cool.ulam:22:       c.x = x;
          const u32 Uh_5tlreg290 = Uv_1x.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg291 = _Int32ToInt32(Uh_5tlreg290, 15, 16); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg291); //gcnl:Node.cpp:898

//! Cool.ulam:23:       Unsigned(6) index = ew.getSiteNumber(c);
          UlamRef<EC> Uh_3tur295(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg297 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:670
          Ui_Uq_102323C2D10<EC> Uh_5tlval298(Uh_5tlreg297); //gcnl:Node.cpp:1148
          const Ui_Ut_10161u<EC> Uh_5tlval3100 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur295, Uh_5tlval298); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3101 = Uh_5tlval3100.read(); //gcnl:Node.cpp:1176
          Ui_Ut_10161u<EC> Uv_5index(Uh_5tlreg3101); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:24:       if (ew[index] is Cool){
          {

//! Cool.ulam:24:       if (ew[index] is Cool){
            UlamRef<EC> Uh_3tur3103(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3105 = Uv_5index.read(); //gcnl:Node.cpp:704
            Ui_Ut_10161u<EC> Uh_5tlval3106(Uh_5tlreg3105); //gcnl:Node.cpp:1148
            Ui_Ut_r102961a<EC> Uh_5tuval3108 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3103, Uh_5tlval3106); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3109 = Ue_102324Cool10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3108.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg3109, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Cool.ulam:25:         Int(15) dx = -1;
                const u32 Uh_5tlreg3110 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3111 = _Int32ToInt32(Uh_5tlreg3110, 2, 15); //gcnl:NodeCast.cpp:748
                Ui_Ut_102151i<EC> Uv_2dx(Uh_5tlreg3111); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:26:         if (x > 0) dx = 1;
                {

//! Cool.ulam:26:         if (x > 0) dx = 1;
                  const u32 Uh_5tlreg3112 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3113 = _Int32ToInt32(Uh_5tlreg3112, 2, 15); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3115 = Uv_1x.read(); //gcnl:Node.cpp:704
                  const u32 Uh_5tlreg3116 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3115, Uh_5tlreg3113, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3116, 1)) //gcnl:NodeControl.cpp:213
                  {

//! Cool.ulam:26:         if (x > 0) dx = 1;
                      const u32 Uh_5tlreg3117 = 1; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3118 = _Int32ToInt32(Uh_5tlreg3117, 2, 15); //gcnl:NodeCast.cpp:748
                      Uv_2dx.write(Uh_5tlreg3118); //gcnl:Node.cpp:898
                  } // end if
                }

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
                {

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
                  const u32 Uh_5tlreg3120 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3121 = _Int32ToInt32(Uh_5tlreg3120, 2, 15); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102151i<EC> Uv_2x2(Uh_5tlreg3121); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
                  while(true)
                  {
                    const u32 Uh_5tlreg3123 = Uv_1x.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3125 = Uv_2x2.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3126 = _BinOpCompareNotEqInt32(Uh_5tlreg3125, Uh_5tlreg3123, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg3126, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
                    {

//! Cool.ulam:28:           c.x = x2;
                      const u32 Uh_5tlreg3128 = Uv_2x2.read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg3129 = _Int32ToInt32(Uh_5tlreg3128, 15, 16); //gcnl:NodeCast.cpp:748
                      UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3129); //gcnl:Node.cpp:898

//! Cool.ulam:29:           index = ew.getSiteNumber(c);
                      UlamRef<EC> Uh_3tur3133(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3135 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:670
                      Ui_Uq_102323C2D10<EC> Uh_5tlval3136(Uh_5tlreg3135); //gcnl:Node.cpp:1148
                      const Ui_Ut_10161u<EC> Uh_5tlval3138 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3133, Uh_5tlval3136); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3139 = Uh_5tlval3138.read(); //gcnl:Node.cpp:1176
                      Uv_5index.write(Uh_5tlreg3139); //gcnl:Node.cpp:898

//! Cool.ulam:30:           ew[index] = ew[0];
                      UlamRef<EC> Uh_3tur3142(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3143 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3144 = _Int32ToUnsigned32(Uh_5tlreg3143, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3145(Uh_5tlreg3144); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval3147 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3142, Uh_5tlval3145); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3149(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3151 = Uv_5index.read(); //gcnl:Node.cpp:704
                      Ui_Ut_10161u<EC> Uh_5tlval3152(Uh_5tlreg3151); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval3154 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3149, Uh_5tlval3152); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3154.WriteAtom(Uh_5tuval3147.read()); //write into atomof ref //gcnl:Node.cpp:998
                    }

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
Ul_214endcontrolloop13:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Cool.ulam:27:         for (Int(15) x2 = 0; x2 != x; x2 += dx){
                    const u32 Uh_5tlreg3156 = Uv_2dx.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3158 = Uv_2x2.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3159 = _BinOpAddInt32(Uh_5tlreg3158, Uh_5tlreg3156, 15); //gcnl:NodeBinaryOpEqualArith.cpp:244
                    Uv_2x2.write(Uh_5tlreg3159); //gcnl:Node.cpp:898
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }
        }

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Cool.ulam:20:     for (Int(15) x = -4; x < 5; x++){
        const u32 Uh_5tlreg3160 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3161 = _Int32ToInt32(Uh_5tlreg3160, 32, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3163 = Uv_1x.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg3164 = _BinOpAddInt32(Uh_5tlreg3163, Uh_5tlreg3161, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1x.write(Uh_5tlreg3164); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Cool.ulam:35:     c.x = 0;
    const u32 Uh_5tlreg3165 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3166 = _Int32ToInt32(Uh_5tlreg3165, 2, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3166); //gcnl:Node.cpp:898

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
    {

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
      const u32 Uh_5tlreg3169 = (u32) -4; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3170 = _Int32ToInt32(Uh_5tlreg3169, 4, 15); //gcnl:NodeCast.cpp:748
      Ui_Ut_102151i<EC> Uv_1y(Uh_5tlreg3170); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
      while(true)
      {
        const u32 Uh_5tlreg3171 = 5; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3172 = _Int32ToInt32(Uh_5tlreg3171, 4, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3174 = Uv_1y.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg3175 = _BinOpCompareLessThanInt32(Uh_5tlreg3174, Uh_5tlreg3172, 15); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3175, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
        {

//! Cool.ulam:37:       if (y == 0) continue;
          {

//! Cool.ulam:37:       if (y == 0) continue;
            const u32 Uh_5tlreg3176 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3177 = _Int32ToInt32(Uh_5tlreg3176, 2, 15); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3179 = Uv_1y.read(); //gcnl:Node.cpp:704
            const u32 Uh_5tlreg3180 = _BinOpCompareEqEqInt32(Uh_5tlreg3179, Uh_5tlreg3177, 15); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3180, 1)) //gcnl:NodeControl.cpp:213
            {

//! Cool.ulam:37:       if (y == 0) continue;
                goto Ul_214endcontrolloop14; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
            } // end if
          }

//! Cool.ulam:38:       c.y = y;
          const u32 Uh_5tlreg3182 = Uv_1y.read(); //gcnl:Node.cpp:704
          const u32 Uh_5tlreg3183 = _Int32ToInt32(Uh_5tlreg3182, 15, 16); //gcnl:NodeCast.cpp:748
          UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3183); //gcnl:Node.cpp:898

//! Cool.ulam:39:       Unsigned(6) index = ew.getSiteNumber(c);
          UlamRef<EC> Uh_3tur3187(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3189 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:670
          Ui_Uq_102323C2D10<EC> Uh_5tlval3190(Uh_5tlreg3189); //gcnl:Node.cpp:1148
          const Ui_Ut_10161u<EC> Uh_5tlval3192 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3187, Uh_5tlval3190); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3193 = Uh_5tlval3192.read(); //gcnl:Node.cpp:1176
          Ui_Ut_10161u<EC> Uv_5index(Uh_5tlreg3193); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:40:       if (ew[index] is Cool){
          {

//! Cool.ulam:40:       if (ew[index] is Cool){
            UlamRef<EC> Uh_3tur3195(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3197 = Uv_5index.read(); //gcnl:Node.cpp:704
            Ui_Ut_10161u<EC> Uh_5tlval3198(Uh_5tlreg3197); //gcnl:Node.cpp:1148
            Ui_Ut_r102961a<EC> Uh_5tuval3200 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3195, Uh_5tlval3198); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3201 = Ue_102324Cool10<EC>::THE_INSTANCE.internalCMethodImplementingIs(Uh_5tuval3200.read()); //gcnl:NodeConditionalIs.cpp:285
            if(_Bool32ToCbool(Uh_5tlreg3201, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Cool.ulam:41:         Int(15) dy = -1;
                const u32 Uh_5tlreg3202 = (u32) -1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3203 = _Int32ToInt32(Uh_5tlreg3202, 2, 15); //gcnl:NodeCast.cpp:748
                Ui_Ut_102151i<EC> Uv_2dy(Uh_5tlreg3203); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:42:         if (y > 0) dy = 1;
                {

//! Cool.ulam:42:         if (y > 0) dy = 1;
                  const u32 Uh_5tlreg3204 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3205 = _Int32ToInt32(Uh_5tlreg3204, 2, 15); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3207 = Uv_1y.read(); //gcnl:Node.cpp:704
                  const u32 Uh_5tlreg3208 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3207, Uh_5tlreg3205, 15); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3208, 1)) //gcnl:NodeControl.cpp:213
                  {

//! Cool.ulam:42:         if (y > 0) dy = 1;
                      const u32 Uh_5tlreg3209 = 1; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3210 = _Int32ToInt32(Uh_5tlreg3209, 2, 15); //gcnl:NodeCast.cpp:748
                      Uv_2dy.write(Uh_5tlreg3210); //gcnl:Node.cpp:898
                  } // end if
                }

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
                {

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
                  const u32 Uh_5tlreg3212 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3213 = _Int32ToInt32(Uh_5tlreg3212, 2, 15); //gcnl:NodeCast.cpp:748
                  Ui_Ut_102151i<EC> Uv_2y2(Uh_5tlreg3213); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
                  while(true)
                  {
                    const u32 Uh_5tlreg3215 = Uv_1y.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3217 = Uv_2y2.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3218 = _BinOpCompareNotEqInt32(Uh_5tlreg3217, Uh_5tlreg3215, 15); //gcnl:NodeBinaryOpCompare.cpp:441

                    if(!_Bool32ToCbool(Uh_5tlreg3218, 1))
                      break; //gcnl:NodeControlWhile.cpp:135

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
                    {

//! Cool.ulam:44:           c.y = y2;
                      const u32 Uh_5tlreg3220 = Uv_2y2.read(); //gcnl:Node.cpp:704
                      const u32 Uh_5tlreg3221 = _Int32ToInt32(Uh_5tlreg3220, 15, 16); //gcnl:NodeCast.cpp:748
                      UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3221); //gcnl:Node.cpp:898

//! Cool.ulam:45:           index = ew.getSiteNumber(c);
                      UlamRef<EC> Uh_3tur3225(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3227 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:670
                      Ui_Uq_102323C2D10<EC> Uh_5tlval3228(Uh_5tlreg3227); //gcnl:Node.cpp:1148
                      const Ui_Ut_10161u<EC> Uh_5tlval3230 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3225, Uh_5tlval3228); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3231 = Uh_5tlval3230.read(); //gcnl:Node.cpp:1176
                      Uv_5index.write(Uh_5tlreg3231); //gcnl:Node.cpp:898

//! Cool.ulam:46:           ew[index] = ew[0];
                      UlamRef<EC> Uh_3tur3234(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3235 = 0; //gcnl:NodeTerminal.cpp:690
                      const u32 Uh_5tlreg3236 = _Int32ToUnsigned32(Uh_5tlreg3235, 2, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3237(Uh_5tlreg3236); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval3239 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3234, Uh_5tlval3237); //gcnl:NodeFunctionCall.cpp:1043
                      UlamRef<EC> Uh_3tur3241(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3243 = Uv_5index.read(); //gcnl:Node.cpp:704
                      Ui_Ut_10161u<EC> Uh_5tlval3244(Uh_5tlreg3243); //gcnl:Node.cpp:1148
                      Ui_Ut_r102961a<EC> Uh_5tuval3246 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3241, Uh_5tlval3244); //gcnl:NodeFunctionCall.cpp:1043
                      Uh_5tuval3246.WriteAtom(Uh_5tuval3239.read()); //write into atomof ref //gcnl:Node.cpp:998
                    }

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
Ul_214endcontrolloop15:
                    __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Cool.ulam:43:         for (Int(15) y2 = 0; y2 != y; y2 += dy){
                    const u32 Uh_5tlreg3248 = Uv_2dy.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3250 = Uv_2y2.read(); //gcnl:Node.cpp:704
                    const u32 Uh_5tlreg3251 = _BinOpAddInt32(Uh_5tlreg3250, Uh_5tlreg3248, 15); //gcnl:NodeBinaryOpEqualArith.cpp:244
                    Uv_2y2.write(Uh_5tlreg3251); //gcnl:Node.cpp:898
                  } // end while //gcnl:NodeControlWhile.cpp:145
                }
              }
            } // end if
          }
        }

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Cool.ulam:36:     for (Int(15) y = -4; y < 5; y++){
        const u32 Uh_5tlreg3252 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3253 = _Int32ToInt32(Uh_5tlreg3252, 32, 15); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3255 = Uv_1y.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg3256 = _BinOpAddInt32(Uh_5tlreg3255, Uh_5tlreg3253, 15); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1y.write(Uh_5tlreg3256); //gcnl:Node.cpp:898
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Cool.ulam:51:     c.x = (Int(16))rm.between(2, 3);
    UlamRef<EC> Uh_3tur3258(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3259 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3260 = _Int32ToInt32(Uh_5tlreg3259, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3261(Uh_5tlreg3260); //gcnl:Node.cpp:1148
    const u32 Uh_5tlreg3262 = 3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3263 = _Int32ToInt32(Uh_5tlreg3262, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3264(Uh_5tlreg3263); //gcnl:Node.cpp:1148
    const Ui_Ut_102321i<EC> Uh_5tlval3266 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur3258, Uh_5tlval3261, Uh_5tlval3264); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3267 = Uh_5tlval3266.read(); //gcnl:Node.cpp:1176
    const u32 Uh_5tlreg3268 = _Int32ToInt32(Uh_5tlreg3267, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3268); //gcnl:Node.cpp:898

//! Cool.ulam:52:     c.y = (Int(16))rm.between(2, 3);
    UlamRef<EC> Uh_3tur3272(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3273 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3274 = _Int32ToInt32(Uh_5tlreg3273, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3275(Uh_5tlreg3274); //gcnl:Node.cpp:1148
    const u32 Uh_5tlreg3276 = 3; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3277 = _Int32ToInt32(Uh_5tlreg3276, 3, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uh_5tlval3278(Uh_5tlreg3277); //gcnl:Node.cpp:1148
    const Ui_Ut_102321i<EC> Uh_5tlval3280 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur3272, Uh_5tlval3275, Uh_5tlval3278); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3281 = Uh_5tlval3280.read(); //gcnl:Node.cpp:1176
    const u32 Uh_5tlreg3282 = _Int32ToInt32(Uh_5tlreg3281, 32, 16); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3282); //gcnl:Node.cpp:898

//! Cool.ulam:54:     if (rm.oneIn(2)) c.x *= -1;
    {

//! Cool.ulam:54:     if (rm.oneIn(2)) c.x *= -1;
      UlamRef<EC> Uh_3tur3286(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3287 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3288 = _Int32ToUnsigned32(Uh_5tlreg3287, 3, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uh_5tlval3289(Uh_5tlreg3288); //gcnl:Node.cpp:1148
      const Ui_Ut_10111b<EC> Uh_5tlval3291 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur3286, Uh_5tlval3289); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3292 = Uh_5tlval3291.read(); //gcnl:Node.cpp:1176
      if(_Bool32ToCbool(Uh_5tlreg3292, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cool.ulam:54:     if (rm.oneIn(2)) c.x *= -1;
          const u32 Uh_5tlreg3293 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3294 = _Int32ToInt32(Uh_5tlreg3293, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3297 = UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg3298 = _BinOpMultiplyInt32(Uh_5tlreg3297, Uh_5tlreg3294, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3298); //gcnl:Node.cpp:898
      } // end if
    }

//! Cool.ulam:55:     if (rm.oneIn(2)) c.y *= -1;
    {

//! Cool.ulam:55:     if (rm.oneIn(2)) c.y *= -1;
      UlamRef<EC> Uh_3tur3300(ur, 0u, 0u, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3301 = 2; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3302 = _Int32ToUnsigned32(Uh_5tlreg3301, 3, 32); //gcnl:NodeCast.cpp:748
      Ui_Ut_102321u<EC> Uh_5tlval3303(Uh_5tlreg3302); //gcnl:Node.cpp:1148
      const Ui_Ut_10111b<EC> Uh_5tlval3305 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_5oneIn(uc, Uh_3tur3300, Uh_5tlval3303); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3306 = Uh_5tlval3305.read(); //gcnl:Node.cpp:1176
      if(_Bool32ToCbool(Uh_5tlreg3306, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cool.ulam:55:     if (rm.oneIn(2)) c.y *= -1;
          const u32 Uh_5tlreg3307 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3308 = _Int32ToInt32(Uh_5tlreg3307, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3311 = UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:670
          const u32 Uh_5tlreg3312 = _BinOpMultiplyInt32(Uh_5tlreg3311, Uh_5tlreg3308, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          UlamRef<EC>(ur, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3312); //gcnl:Node.cpp:898
      } // end if
    }

//! Cool.ulam:56:     Unsigned(6) index = ew.getSiteNumber(c);
    UlamRef<EC> Uh_3tur3314(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3316 = UlamRef<EC>(ur, 0u, 32u, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC).Read(); //gcnl:Node.cpp:670
    Ui_Uq_102323C2D10<EC> Uh_5tlval3317(Uh_5tlreg3316); //gcnl:Node.cpp:1148
    const Ui_Ut_10161u<EC> Uh_5tlval3319 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3314, Uh_5tlval3317); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3320 = Uh_5tlval3319.read(); //gcnl:Node.cpp:1176
    Ui_Ut_10161u<EC> Uv_5index(Uh_5tlreg3320); //gcnl:NodeVarDecl.cpp:1095

//! Cool.ulam:57:     if (index > 40 || index < 0) return;
    {

//! Cool.ulam:57:     if (index > 40 || index < 0) return;
      u32 Uh_5tlreg3321 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3322 = 40; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3324 = Uv_5index.read(); //gcnl:Node.cpp:704
      const u32 Uh_5tlreg3325 = _Unsigned32ToInt32(Uh_5tlreg3324, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3326 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3325, Uh_5tlreg3322, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3326, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3327 = 0; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3328 = _Int32ToInt32(Uh_5tlreg3327, 2, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3330 = Uv_5index.read(); //gcnl:Node.cpp:704
        const u32 Uh_5tlreg3331 = _Unsigned32ToInt32(Uh_5tlreg3330, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3332 = _BinOpCompareLessThanInt32(Uh_5tlreg3331, Uh_5tlreg3328, 7); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3321 = Uh_5tlreg3332; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3321 = Uh_5tlreg3326; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3321, 1)) //gcnl:NodeControl.cpp:213
      {

//! Cool.ulam:57:     if (index > 40 || index < 0) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Cool.ulam:58:     ew[index] = Cool.instanceof;
    Ui_Ue_102324Cool10<EC> Uh_5tuval3333; //gcnl:NodeInstanceof.cpp:113
    UlamRef<EC> Uh_3tur3335(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3337 = Uv_5index.read(); //gcnl:Node.cpp:704
    Ui_Ut_10161u<EC> Uh_5tlval3338(Uh_5tlreg3337); //gcnl:Node.cpp:1148
    Ui_Ut_r102961a<EC> Uh_5tuval3340 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3335, Uh_5tlval3338); //gcnl:NodeFunctionCall.cpp:1043
    Uh_5tuval3340.WriteAtom(Uh_5tuval3333.read()); //write into atomof ref //gcnl:Node.cpp:998

  } // Uf_6behave


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Ue_102324Cool10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 1: { static UlamClassDataMemberInfo i("Uq_10106Random10", "rm", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
      case 2: { static UlamClassDataMemberInfo i("Uq_102323C2D10", "c", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1132
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Ue_102324Cool10<EC>::GetDataMemberCount() const
  {
    return 3; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Ue_102324Cool10<EC>::GetMangledClassName() const
  {
    return "Ue_102324Cool10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Ue_102324Cool10<EC>::GetClassLength( ) const
  {
    return 32; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Ue_102324Cool10<EC>::GetString(u32 sidx)  const
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
  u32 Ue_102324Cool10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  typename EC::ATOM_CONFIG::ATOM_TYPE Ue_102324Cool10<EC>::BuildDefaultAtom( ) const
  {
    AtomBitStorage<EC> da(Element<EC>::BuildDefaultAtom()); //gcnl:NodeBlockClass.cpp:2072

    // Initialize any data members:
    return (da.ReadAtom()); //gcnl:NodeBlockClass.cpp:2095
  } //BuildDefaultAtom

  template<class EC>
  VfuncPtr Ue_102324Cool10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Ue_102324Cool10<EC>::Uf_6behave10) &Ue_102324Cool10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Ue_102324Cool10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Ue_102324Cool10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Ue_102324Cool10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

  template<class EC>
  bool Ue_102324Cool10<EC>::internalCMethodImplementingIs(const T& targ) const
  {
    return (THE_INSTANCE.GetType() == targ.GetType()); //gcnl:NodeBlockClass.cpp:2403
  } //isMethod

  template<class EC>
  const u32 Ue_102324Cool10<EC>::ReadTypeField(const BV bv)
  {
    return BFTYP::Read(bv); //gcnl:NodeBlockClass.cpp:2441
  } //ReadTypeField

  template<class EC>
  void Ue_102324Cool10<EC>::WriteTypeField(BV& bv, const u32 v)
  {
    BFTYP::Write(bv, v); //gcnl:NodeBlockClass.cpp:2463
  } //WriteTypeField

} //MFM

