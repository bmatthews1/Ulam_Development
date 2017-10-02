/**                                      -*- mode:C++ -*- */

//Include other classes: //gcnl:SymbolTableOfClasses.cpp:556
#include "Uq_10106UrSelf10.h"
#include "Ue_10109214BondParameters10.h"
#include "Uq_10109211EventWindow10.h"
#include "Uq_1010919AtomUtils10.h"
#include "Uq_10106Random10.h"
#include "Uq_102323C2D10.h"
#include "Ue_10105Empty10.h"
#include "Ue_10104Wall10.h"
#include "Ue_10168CellWall10.h"

namespace MFM{

  template<class EC>
  Uq_102294Bond10<EC>::Uq_102294Bond10() : UlamQuark<EC>(MFM_UUID_FOR("Uq102294Bond10", 0))
  { }

  template<class EC>
  Uq_102294Bond10<EC>::~Uq_102294Bond10(){} //gcnl:NodeBlockClass.cpp:1784


//! Bond.ulam:55: 	Void setActive(Bool state){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_919setActive(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10111b<EC>& Uv_5state) const
  {

//! Bond.ulam:56: 		active = state;
    const u32 Uh_5tlreg225 = Uv_5state.read(); //gcnl:Node.cpp:698
    UlamRef<EC>(ur, 0u, 1u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg225); //gcnl:Node.cpp:892

  } // Uf_919setActive



//! Bond.ulam:60: 	Void addBond(Coord c){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_7addBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:61: 		if (c == 0) return;
    {

//! Bond.ulam:61: 		if (c == 0) return;
      const u32 Uh_5tlreg227 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg228 = _Int32ToInt32(Uh_5tlreg227, 2, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg230 = Uv_1c.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg231 = _Unsigned32ToInt32(Uh_5tlreg230, 5, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg232 = _BinOpCompareEqEqInt32(Uh_5tlreg231, Uh_5tlreg228, 6); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg232, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:61: 		if (c == 0) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
    {

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg233 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg234 = _Int32ToUnsigned32(Uh_5tlreg233, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg234); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg235 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg236 = _Int32ToInt32(Uh_5tlreg235, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg238 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg239 = _Unsigned32ToInt32(Uh_5tlreg238, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg240 = _BinOpCompareLessThanInt32(Uh_5tlreg239, Uh_5tlreg236, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg240, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
        {

//! Bond.ulam:65: 			if (bonds[i] == c) return; //already contains this bond
          {

//! Bond.ulam:65: 			if (bonds[i] == c) return; //already contains this bond
            const u32 Uh_5tlreg242 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg244 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg244 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref246(ur, Uh_5tlreg244 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg247 = Uh_6tlref246.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg248 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg247, Uh_5tlreg242, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg248, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:65: 			if (bonds[i] == c) return; //already contains this bond
                return; //gcnl:NodeReturnStatement.cpp:348
            } // end if
          }

//! Bond.ulam:66: 			if (bonds[i] == 0){
          {

//! Bond.ulam:66: 			if (bonds[i] == 0){
            const u32 Uh_5tlreg249 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg250 = _Int32ToInt32(Uh_5tlreg249, 2, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg252 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg252 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref254(ur, Uh_5tlreg252 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg255 = Uh_6tlref254.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg256 = _Unsigned32ToInt32(Uh_5tlreg255, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg257 = _BinOpCompareEqEqInt32(Uh_5tlreg256, Uh_5tlreg250, 6); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg257, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:67: 				bonds[i] = c;
                const u32 Uh_5tlreg259 = Uv_1c.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg261 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg261 >= 5) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref263(ur, Uh_5tlreg261 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref263.write(Uh_5tlreg259);

//! Bond.ulam:68: 				bondCount++;
                const u32 Uh_5tlreg264 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg265 = _Int32ToUnsigned32(Uh_5tlreg264, 32, 3); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg267 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg268 = _BinOpAddUnsigned32(Uh_5tlreg267, Uh_5tlreg265, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
                UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg268); //gcnl:Node.cpp:892

//! Bond.ulam:69: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
Ul_214endcontrolloop11:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:64: 		for (Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg269 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg270 = _Int32ToUnsigned32(Uh_5tlreg269, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg272 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg273 = _BinOpAddUnsigned32(Uh_5tlreg272, Uh_5tlreg270, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg273); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
    {

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg274 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg275 = _Int32ToUnsigned32(Uh_5tlreg274, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg275); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg276 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg277 = _Int32ToInt32(Uh_5tlreg276, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg279 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg280 = _Unsigned32ToInt32(Uh_5tlreg279, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg281 = _BinOpCompareLessThanInt32(Uh_5tlreg280, Uh_5tlreg277, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg281, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
        {

//! Bond.ulam:75: 			Coord myCoord = bonds[i];
          const u32 Uh_5tlreg283 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg283 >= 5) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref285(ur, Uh_5tlreg283 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg286 = Uh_6tlref285.read(); //gcnl:Node.cpp:664
          Ui_Ut_10151u<EC> Uv_7myCoord(Uh_5tlreg286); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:76: 			if ((c/4) < (myCoord/4) && myCoord != 0){
          {

//! Bond.ulam:76: 			if ((c/4) < (myCoord/4) && myCoord != 0){
            u32 Uh_5tlreg287 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg288 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg289 = _Int32ToInt32(Uh_5tlreg288, 4, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg291 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg292 = _Unsigned32ToInt32(Uh_5tlreg291, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg293 = _BinOpDivideInt32(Uh_5tlreg292, Uh_5tlreg289, 6); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg294 = 4; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg295 = _Int32ToInt32(Uh_5tlreg294, 4, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg297 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg298 = _Unsigned32ToInt32(Uh_5tlreg297, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg299 = _BinOpDivideInt32(Uh_5tlreg298, Uh_5tlreg295, 6); //gcnl:NodeBinaryOp.cpp:805
            const u32 Uh_5tlreg3100 = _BinOpCompareLessThanInt32(Uh_5tlreg299, Uh_5tlreg293, 6); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3100, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg3101 = 0; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3102 = _Int32ToInt32(Uh_5tlreg3101, 2, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3104 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3105 = _Unsigned32ToInt32(Uh_5tlreg3104, 5, 6); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3106 = _BinOpCompareNotEqInt32(Uh_5tlreg3105, Uh_5tlreg3102, 6); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg287 = Uh_5tlreg3106; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg287, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:77: 				Atom a = ew[myCoord];
                UlamRef<EC> Uh_3tur3108(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3110 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3111 = _Unsigned32ToUnsigned32(Uh_5tlreg3110, 5, 6); //gcnl:NodeCast.cpp:748
                Ui_Ut_10161u<EC> Uh_5tlval3112(Uh_5tlreg3111); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3114 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3108, Uh_5tlval3112); //gcnl:NodeFunctionCall.cpp:1043
                Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3114); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:78: 				if (a as Bond){
                {

//! Bond.ulam:78: 				if (a as Bond){
                  const T Uh_3tut3116 = Uv_1a.read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3117 = UlamClass<EC>::IsMethod(uc, Uh_3tut3116.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
                  if(_Bool32ToCbool(Uh_5tlreg3117, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:78: 				if (a as Bond){
                      Ui_Ut_102961a<EC> & Uh_5tuval3118 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                      Ui_Uq_r102294Bond10<EC> Uv_1a(Uh_5tuval3118, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3118.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:79: 					a.removeBond((Coord)reverse(myCoord));
                      UlamRef<EC> Uh_3tur3120(Uv_1a, 29u); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3123 = Uv_7myCoord.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3124 = _Unsigned32ToUnsigned32(Uh_5tlreg3123, 5, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uh_5tlval3125(Uh_5tlreg3124); //gcnl:Node.cpp:1142
                      const Ui_Ut_10161u<EC> Uh_5tlval3127 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3125); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3128 = Uh_5tlval3127.read(); //gcnl:Node.cpp:1170
                      const u32 Uh_5tlreg3129 = _Unsigned32ToUnsigned32(Uh_5tlreg3128, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3130(Uh_5tlreg3129); //gcnl:Node.cpp:1142
                      Uq_102294Bond10<EC>::THE_INSTANCE.Uf_9210removeBond(uc, Uh_3tur3120, Uh_5tlval3130); //gcnl:NodeFunctionCall.cpp:1043
                    }
                  } // end if
                }

//! Bond.ulam:82: 				bonds[i] = c;
                const u32 Uh_5tlreg3133 = Uv_1c.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3135 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3135 >= 5) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3137(ur, Uh_5tlreg3135 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3137.write(Uh_5tlreg3133);

//! Bond.ulam:83: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
Ul_214endcontrolloop12:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:74: 		for (Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3138 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3139 = _Int32ToUnsigned32(Uh_5tlreg3138, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3141 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3142 = _BinOpAddUnsigned32(Uh_5tlreg3141, Uh_5tlreg3139, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3142); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_7addBond



//! Bond.ulam:99: 	Void removeBond(Coord c){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9210removeBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:100: 		if (c == 0) return;
    {

//! Bond.ulam:100: 		if (c == 0) return;
      const u32 Uh_5tlreg3143 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3144 = _Int32ToInt32(Uh_5tlreg3143, 2, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3146 = Uv_1c.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3147 = _Unsigned32ToInt32(Uh_5tlreg3146, 5, 6); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3148 = _BinOpCompareEqEqInt32(Uh_5tlreg3147, Uh_5tlreg3144, 6); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3148, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:100: 		if (c == 0) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
    {

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg3149 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3150 = _Int32ToUnsigned32(Uh_5tlreg3149, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3150); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg3151 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3152 = _Int32ToInt32(Uh_5tlreg3151, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3154 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3155 = _Unsigned32ToInt32(Uh_5tlreg3154, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3156 = _BinOpCompareLessThanInt32(Uh_5tlreg3155, Uh_5tlreg3152, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3156, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
        {

//! Bond.ulam:102: 			if (bonds[i] == c){
          {

//! Bond.ulam:102: 			if (bonds[i] == c){
            const u32 Uh_5tlreg3158 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3160 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3160 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3162(ur, Uh_5tlreg3160 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3163 = Uh_6tlref3162.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3164 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3163, Uh_5tlreg3158, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3164, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:103: 				bonds[i] = 0;
                const u32 Uh_5tlreg3165 = 0; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3166 = _Int32ToUnsigned32(Uh_5tlreg3165, 2, 5); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3168 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3168 >= 5) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3170(ur, Uh_5tlreg3168 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3170.write(Uh_5tlreg3166);

//! Bond.ulam:104: 				bondCount--;
                const u32 Uh_5tlreg3171 = 1; //gcnl:NodeTerminal.cpp:690
                const u32 Uh_5tlreg3172 = _Int32ToUnsigned32(Uh_5tlreg3171, 32, 3); //gcnl:NodeCast.cpp:748
                const u32 Uh_5tlreg3174 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
                const u32 Uh_5tlreg3175 = _BinOpSubtractUnsigned32(Uh_5tlreg3174, Uh_5tlreg3172, 3); //gcnl:NodeBinaryOpEqualArithPostDecr.cpp:196
                UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3175); //gcnl:Node.cpp:892

//! Bond.ulam:105: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
Ul_214endcontrolloop14:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:101: 		for(Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3176 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3177 = _Int32ToUnsigned32(Uh_5tlreg3176, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3179 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3180 = _BinOpAddUnsigned32(Uh_5tlreg3179, Uh_5tlreg3177, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3180); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210removeBond



//! Bond.ulam:166: 	SiteNum reverse(SiteNum i){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_102294Bond10<EC>::Uf_7reverse(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1i) const
  {

//! Bond.ulam:167: 		C2D c2d = ew.getCoord(i);
    UlamRef<EC> Uh_3tur3182(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3184 = Uv_1i.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3185(Uh_5tlreg3184); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3187 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3182, Uh_5tlval3185); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3c2d(Uh_5tlval3187); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:168: 		c2d.x *= -1;
    const u32 Uh_5tlreg3188 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3189 = _Int32ToInt32(Uh_5tlreg3188, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3192 = UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3193 = _BinOpMultiplyInt32(Uh_5tlreg3192, Uh_5tlreg3189, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3193); //gcnl:Node.cpp:892

//! Bond.ulam:169: 		c2d.y *= -1;
    const u32 Uh_5tlreg3194 = (u32) -1; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3195 = _Int32ToInt32(Uh_5tlreg3194, 2, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3198 = UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3199 = _BinOpMultiplyInt32(Uh_5tlreg3198, Uh_5tlreg3195, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3199); //gcnl:Node.cpp:892

//! Bond.ulam:171: 		return ew.getSiteNumber(c2d);
    UlamRef<EC> Uh_3tur3201(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3203 = Uv_3c2d.read(); //gcnl:Node.cpp:698
    Ui_Uq_102323C2D10<EC> Uh_5tlval3204(Uh_5tlreg3203); //gcnl:Node.cpp:1142
    const Ui_Ut_10161u<EC> Uh_5tlval3206 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3201, Uh_5tlval3204); //gcnl:NodeFunctionCall.cpp:1043
    const u32 Uh_5tlreg3207 = Uh_5tlval3206.read(); //gcnl:Node.cpp:1170
    Ui_Ut_10161u<EC> Uh_5tlval3208(Uh_5tlreg3207); //gcnl:Node.cpp:1142
    return (Uh_5tlval3208); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7reverse



//! Bond.ulam:89: 	Void updateBond(Coord prev, Coord new){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9210updateBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_4prev, Ui_Ut_10151u<EC>& Uv_3new) const
  {

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3209 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3210 = _Int32ToUnsigned32(Uh_5tlreg3209, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3210); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3211 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3213 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3214 = _Unsigned32ToInt32(Uh_5tlreg3213, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3215 = _BinOpCompareLessThanInt32(Uh_5tlreg3214, Uh_5tlreg3211, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3215, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:91: 			if (bonds[i] == prev){
          {

//! Bond.ulam:91: 			if (bonds[i] == prev){
            const u32 Uh_5tlreg3217 = Uv_4prev.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3219 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3219 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3221(ur, Uh_5tlreg3219 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3222 = Uh_6tlref3221.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3223 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3222, Uh_5tlreg3217, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3223, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:92: 				bonds[i] = new;
                const u32 Uh_5tlreg3225 = Uv_3new.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3227 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3227 >= 5) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3229(ur, Uh_5tlreg3227 * 5u + 4u); //gcnl:Node.cpp:1317
                Uh_6tlref3229.write(Uh_5tlreg3225);

//! Bond.ulam:93: 				return;
                return; //gcnl:NodeReturnStatement.cpp:348
              }
            } // end if
          }
        }

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop13:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:90: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3230 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3231 = _Int32ToUnsigned32(Uh_5tlreg3230, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3233 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3234 = _BinOpAddUnsigned32(Uh_5tlreg3233, Uh_5tlreg3231, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3234); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210updateBond



//! Bond.ulam:112: 	Void checkBonds(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9210checkBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
    {

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3235 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3236 = _Int32ToUnsigned32(Uh_5tlreg3235, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3236); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3237 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3239 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3240 = _Unsigned32ToInt32(Uh_5tlreg3239, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3241 = _BinOpCompareLessThanInt32(Uh_5tlreg3240, Uh_5tlreg3237, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3241, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
        {

//! Bond.ulam:114: 			SiteNum s = bonds[i];
          const u32 Uh_5tlreg3243 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3243 >= 5) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3245(ur, Uh_5tlreg3243 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3246 = Uh_6tlref3245.read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3247 = _Unsigned32ToUnsigned32(Uh_5tlreg3246, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3247); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:115: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:115: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3249(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3251 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3252(Uh_5tlreg3251); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3254 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3249, Uh_5tlval3252); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3255 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3254.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3256 = _LogicalBangBool32(Uh_5tlreg3255, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3256, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:116: 				removeBond((Coord)s);
                const u32 Uh_5tlreg3259 = Uv_1s.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3260 = _Unsigned32ToUnsigned32(Uh_5tlreg3259, 6, 5); //gcnl:NodeCast.cpp:748
                Ui_Ut_10151u<EC> Uh_5tlval3261(Uh_5tlreg3260); //gcnl:Node.cpp:1142
                THE_INSTANCE.Uf_9210removeBond(uc, ur, Uh_5tlval3261); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:117: 				continue;
                goto Ul_214endcontrolloop15; //continue nearest loop //gcnl:NodeContinueStatement.cpp:64
              }
            } // end if
          }
        }

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
Ul_214endcontrolloop15:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:113: 		for(Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3263 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3264 = _Int32ToUnsigned32(Uh_5tlreg3263, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3266 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3267 = _BinOpAddUnsigned32(Uh_5tlreg3266, Uh_5tlreg3264, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3267); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9210checkBonds



//! Bond.ulam:123: 	Void clearBonds(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9210clearBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
    {

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
      const u32 Uh_5tlreg3268 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3269 = _Int32ToUnsigned32(Uh_5tlreg3268, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3269); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
      while(true)
      {
        const u32 Uh_5tlreg3270 = 3; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3271 = _Int32ToInt32(Uh_5tlreg3270, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3273 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3274 = _Unsigned32ToInt32(Uh_5tlreg3273, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3275 = _BinOpCompareLessThanInt32(Uh_5tlreg3274, Uh_5tlreg3271, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3275, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
        {

//! Bond.ulam:125: 			bonds[i] = 0;
          const u32 Uh_5tlreg3276 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3277 = _Int32ToUnsigned32(Uh_5tlreg3276, 2, 5); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3279 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3279 >= 5) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3281(ur, Uh_5tlreg3279 * 5u + 4u); //gcnl:Node.cpp:1317
          Uh_6tlref3281.write(Uh_5tlreg3277);
        }

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
Ul_214endcontrolloop16:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:124: 		for(Index i = 0; i < 3; i++){
        const u32 Uh_5tlreg3282 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3283 = _Int32ToUnsigned32(Uh_5tlreg3282, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3285 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3286 = _BinOpAddUnsigned32(Uh_5tlreg3285, Uh_5tlreg3283, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3286); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:127: 		bondCount = 0;
    const u32 Uh_5tlreg3287 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3288 = _Int32ToUnsigned32(Uh_5tlreg3287, 2, 3); //gcnl:NodeCast.cpp:748
    UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Write(Uh_5tlreg3288); //gcnl:Node.cpp:892

  } // Uf_9210clearBonds



//! Bond.ulam:131: 	Void findBonds(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_919findBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:132: 		BondParameters bp;
    Ui_Ue_10109214BondParameters10<EC> Uv_2bp; //gcnl:NodeVarDecl.cpp:1118

//! Bond.ulam:133: 		if (bondCount == bp.cMAX_BONDS) return;
    {

//! Bond.ulam:133: 		if (bondCount == bp.cMAX_BONDS) return;
      const u32 Uh_5tlreg3292 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9210cMAX_BONDS.read(uc); //gcnl:Node.cpp:681
      const u32 Uh_5tlreg3294 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
      const u32 Uh_5tlreg3295 = _Unsigned32ToUnsigned32(Uh_5tlreg3294, 3, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3296 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3295, Uh_5tlreg3292, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3296, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:133: 		if (bondCount == bp.cMAX_BONDS) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:135: 	  Random rm;
    Ui_Uq_10106Random10<EC> Uv_2rm; //gcnl:NodeVarDecl.cpp:1118

//! Bond.ulam:136: 		while (bondCount > bp.cMAX_BONDS){
    {

//! Bond.ulam:136: 		while (bondCount > bp.cMAX_BONDS){
      while(true)
      {
        const u32 Uh_5tlreg3299 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9210cMAX_BONDS.read(uc); //gcnl:Node.cpp:681
        const u32 Uh_5tlreg3301 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
        const u32 Uh_5tlreg3302 = _Unsigned32ToUnsigned32(Uh_5tlreg3301, 3, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3303 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg3302, Uh_5tlreg3299, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3303, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:136: 		while (bondCount > bp.cMAX_BONDS){
        {

//! Bond.ulam:137: 			Index i = (Index)rm.between(0, 5);
          UlamRef<EC> Uh_3tur3305(0u, 0u, Uv_2rm, &Uq_10106Random10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3306 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3307 = _Int32ToInt32(Uh_5tlreg3306, 2, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval3308(Uh_5tlreg3307); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3309 = 5; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3310 = _Int32ToInt32(Uh_5tlreg3309, 4, 32); //gcnl:NodeCast.cpp:748
          Ui_Ut_102321i<EC> Uh_5tlval3311(Uh_5tlreg3310); //gcnl:Node.cpp:1142
          const Ui_Ut_102321i<EC> Uh_5tlval3313 = Uq_10106Random10<EC>::THE_INSTANCE.Uf_7between(uc, Uh_3tur3305, Uh_5tlval3308, Uh_5tlval3311); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3314 = Uh_5tlval3313.read(); //gcnl:Node.cpp:1170
          const u32 Uh_5tlreg3315 = _Int32ToUnsigned32(Uh_5tlreg3314, 32, 3); //gcnl:NodeCast.cpp:748
          Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3315); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:138: 			if (bonds[i] != 0){
          {

//! Bond.ulam:138: 			if (bonds[i] != 0){
            const u32 Uh_5tlreg3316 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3317 = _Int32ToInt32(Uh_5tlreg3316, 2, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3319 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3319 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3321(ur, Uh_5tlreg3319 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3322 = Uh_6tlref3321.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3323 = _Unsigned32ToInt32(Uh_5tlreg3322, 5, 6); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3324 = _BinOpCompareNotEqInt32(Uh_5tlreg3323, Uh_5tlreg3317, 6); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3324, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:139: 				removeBond(bonds[i]);
                const u32 Uh_5tlreg3327 = Uv_1i.read(); //gcnl:Node.cpp:698
                if(Uh_5tlreg3327 >= 5) //gcnl:NodeSquareBracket.cpp:874
                  FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                Ui_Ut_r10151u<EC> Uh_6tlref3329(ur, Uh_5tlreg3327 * 5u + 4u); //gcnl:Node.cpp:1317
                const u32 Uh_5tlreg3330 = Uh_6tlref3329.read(); //gcnl:Node.cpp:664
                Ui_Ut_10151u<EC> Uh_5tlval3331(Uh_5tlreg3330); //gcnl:Node.cpp:1142
                THE_INSTANCE.Uf_9210removeBond(uc, ur, Uh_5tlval3331); //gcnl:NodeFunctionCall.cpp:1043
              }
            } // end if
          }
        }

//! Bond.ulam:136: 		while (bondCount > bp.cMAX_BONDS){
Ul_214endcontrolloop17:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
    {

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
      const u32 Uh_5tlreg3333 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3334 = _Int32ToUnsigned32(Uh_5tlreg3333, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3334); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
      while(true)
      {
        const u32 Uh_5tlreg3337 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_4cMAX.read(uc); //gcnl:Node.cpp:681
        const u32 Uh_5tlreg3339 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3340 = _Unsigned32ToUnsigned32(Uh_5tlreg3339, 6, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3341 = _BinOpCompareLessEqualUnsigned32(Uh_5tlreg3340, Uh_5tlreg3337, 32); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3341, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
        {

//! Bond.ulam:144: 			Atom a = ew[s];
          UlamRef<EC> Uh_3tur3343(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3345 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3346(Uh_5tlreg3345); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3348 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3343, Uh_5tlval3346); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3348); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:145: 			if (a as Bond){
          {

//! Bond.ulam:145: 			if (a as Bond){
            const T Uh_3tut3350 = Uv_1a.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3351 = UlamClass<EC>::IsMethod(uc, Uh_3tut3350.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
            if(_Bool32ToCbool(Uh_5tlreg3351, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:145: 			if (a as Bond){
                Ui_Ut_102961a<EC> & Uh_5tuval3352 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                Ui_Uq_r102294Bond10<EC> Uv_1a(Uh_5tuval3352, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3352.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:146: 				if (a.bondCount < bp.cMAX_BONDS){
                {

//! Bond.ulam:146: 				if (a.bondCount < bp.cMAX_BONDS){
                  const u32 Uh_5tlreg3355 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9210cMAX_BONDS.read(uc); //gcnl:Node.cpp:681
                  const u32 Uh_5tlreg3358 = UlamRef<EC>(Uv_1a, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:698
                  const u32 Uh_5tlreg3359 = _Unsigned32ToUnsigned32(Uh_5tlreg3358, 3, 32); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3360 = _BinOpCompareLessThanUnsigned32(Uh_5tlreg3359, Uh_5tlreg3355, 32); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3360, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:147: 					addBond((Coord)s);
                      const u32 Uh_5tlreg3363 = Uv_1s.read(); //gcnl:Node.cpp:698
                      const u32 Uh_5tlreg3364 = _Unsigned32ToUnsigned32(Uh_5tlreg3363, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3365(Uh_5tlreg3364); //gcnl:Node.cpp:1142
                      THE_INSTANCE.Uf_7addBond(uc, ur, Uh_5tlval3365); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:148: 					a.addBond((Coord) reverse(s));
                      UlamRef<EC> Uh_3tur3368(Uv_1a, 29u); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3371 = Uv_1s.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval3372(Uh_5tlreg3371); //gcnl:Node.cpp:1142
                      const Ui_Ut_10161u<EC> Uh_5tlval3374 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3372); //gcnl:NodeFunctionCall.cpp:1043
                      const u32 Uh_5tlreg3375 = Uh_5tlval3374.read(); //gcnl:Node.cpp:1170
                      const u32 Uh_5tlreg3376 = _Unsigned32ToUnsigned32(Uh_5tlreg3375, 6, 5); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10151u<EC> Uh_5tlval3377(Uh_5tlreg3376); //gcnl:Node.cpp:1142
                      Uq_102294Bond10<EC>::THE_INSTANCE.Uf_7addBond(uc, Uh_3tur3368, Uh_5tlval3377); //gcnl:NodeFunctionCall.cpp:1043
                    }
                  } // end if
                }
              }
            } // end if
          }

//! Bond.ulam:153: 			if (bondCount >= bp.cMAX_BONDS) return;
          {

//! Bond.ulam:153: 			if (bondCount >= bp.cMAX_BONDS) return;
            const u32 Uh_5tlreg3381 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9210cMAX_BONDS.read(uc); //gcnl:Node.cpp:681
            const u32 Uh_5tlreg3383 = UlamRef<EC>(ur, 1u, 3u, NULL, UlamRef<EC>::PRIMITIVE).Read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3384 = _Unsigned32ToUnsigned32(Uh_5tlreg3383, 3, 32); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3385 = _BinOpCompareGreaterEqualUnsigned32(Uh_5tlreg3384, Uh_5tlreg3381, 32); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3385, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:153: 			if (bondCount >= bp.cMAX_BONDS) return;
                return; //gcnl:NodeReturnStatement.cpp:348
            } // end if
          }
        }

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
Ul_214endcontrolloop18:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:143: 		for (SiteNum s = 1; s <= bp.cMAX; s++){
        const u32 Uh_5tlreg3386 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3387 = _Int32ToUnsigned32(Uh_5tlreg3386, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3389 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3390 = _BinOpAddUnsigned32(Uh_5tlreg3389, Uh_5tlreg3387, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3390); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_919findBonds



//! Bond.ulam:158: 	Bool hasBond(Coord c){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102294Bond10<EC>::Uf_7hasBond(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10151u<EC>& Uv_1c) const
  {

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3391 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3392 = _Int32ToUnsigned32(Uh_5tlreg3391, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3392); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3393 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3395 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3396 = _Unsigned32ToInt32(Uh_5tlreg3395, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3397 = _BinOpCompareLessThanInt32(Uh_5tlreg3396, Uh_5tlreg3393, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3397, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:160: 			if (bonds[i] == c) return true;
          {

//! Bond.ulam:160: 			if (bonds[i] == c) return true;
            const u32 Uh_5tlreg3399 = Uv_1c.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3401 = Uv_1i.read(); //gcnl:Node.cpp:698
            if(Uh_5tlreg3401 >= 5) //gcnl:NodeSquareBracket.cpp:874
              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
            Ui_Ut_r10151u<EC> Uh_6tlref3403(ur, Uh_5tlreg3401 * 5u + 4u); //gcnl:Node.cpp:1317
            const u32 Uh_5tlreg3404 = Uh_6tlref3403.read(); //gcnl:Node.cpp:664
            const u32 Uh_5tlreg3405 = _BinOpCompareEqEqUnsigned32(Uh_5tlreg3404, Uh_5tlreg3399, 5); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3405, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:160: 			if (bonds[i] == c) return true;
                const u32 Uh_5tlreg3406 = 1u; //gcnl:NodeTerminal.cpp:690
                Ui_Ut_10111b<EC> Uh_5tlval3407(Uh_5tlreg3406); //gcnl:Node.cpp:1142
                return (Uh_5tlval3407); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }
        }

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop19:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:159: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3408 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3409 = _Int32ToUnsigned32(Uh_5tlreg3408, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3411 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3412 = _BinOpAddUnsigned32(Uh_5tlreg3411, Uh_5tlreg3409, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3412); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:162: 		return false;
    const u32 Uh_5tlreg3413 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3414(Uh_5tlreg3413); //gcnl:Node.cpp:1142
    return (Uh_5tlval3414); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7hasBond



//! Bond.ulam:176: 	SiteNum getDist(SiteNum s1, SiteNum s2){
  template<class EC>
  Ui_Ut_10161u<EC> Uq_102294Bond10<EC>::Uf_7getDist(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_2s1, Ui_Ut_10161u<EC>& Uv_2s2) const
  {

//! Bond.ulam:177: 		C2D c1 = ew.getCoord(s1);
    UlamRef<EC> Uh_3tur3416(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3418 = Uv_2s1.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3419(Uh_5tlreg3418); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3421 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3416, Uh_5tlval3419); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_2c1(Uh_5tlval3421); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:178: 		C2D c2 = ew.getCoord(s2);
    UlamRef<EC> Uh_3tur3423(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3425 = Uv_2s2.read(); //gcnl:Node.cpp:698
    Ui_Ut_10161u<EC> Uh_5tlval3426(Uh_5tlreg3425); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3428 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3423, Uh_5tlval3426); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_2c2(Uh_5tlval3428); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:180: 		Long x = c1.x - c2.x;
    const u32 Uh_5tlreg3431 = UlamRef<EC>(0u, 16u, Uv_2c2, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3432 = _Int32ToInt32(Uh_5tlreg3431, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3435 = UlamRef<EC>(0u, 16u, Uv_2c1, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3436 = _Int32ToInt32(Uh_5tlreg3435, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3437 = _BinOpSubtractInt32(Uh_5tlreg3436, Uh_5tlreg3432, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3438 = _Int32ToInt32(Uh_5tlreg3437, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uv_1x(Uh_5tlreg3438); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:181: 		Long y = c1.y - c2.y;
    const u32 Uh_5tlreg3441 = UlamRef<EC>(16u, 16u, Uv_2c2, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3442 = _Int32ToInt32(Uh_5tlreg3441, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3445 = UlamRef<EC>(16u, 16u, Uv_2c1, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3446 = _Int32ToInt32(Uh_5tlreg3445, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3447 = _BinOpSubtractInt32(Uh_5tlreg3446, Uh_5tlreg3442, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3448 = _Int32ToInt32(Uh_5tlreg3447, 17, 32); //gcnl:NodeCast.cpp:748
    Ui_Ut_102321i<EC> Uv_1y(Uh_5tlreg3448); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:183: 		if (x < 0) x *= -1;
    {

//! Bond.ulam:183: 		if (x < 0) x *= -1;
      const u32 Uh_5tlreg3449 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3450 = _Int32ToInt32(Uh_5tlreg3449, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3452 = Uv_1x.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3453 = _BinOpCompareLessThanInt32(Uh_5tlreg3452, Uh_5tlreg3450, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3453, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:183: 		if (x < 0) x *= -1;
          const u32 Uh_5tlreg3454 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3455 = _Int32ToInt32(Uh_5tlreg3454, 2, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3457 = Uv_1x.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3458 = _BinOpMultiplyInt32(Uh_5tlreg3457, Uh_5tlreg3455, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_1x.write(Uh_5tlreg3458); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:184: 		if (y < 0) y *= -1;
    {

//! Bond.ulam:184: 		if (y < 0) y *= -1;
      const u32 Uh_5tlreg3459 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3460 = _Int32ToInt32(Uh_5tlreg3459, 2, 32); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3462 = Uv_1y.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3463 = _BinOpCompareLessThanInt32(Uh_5tlreg3462, Uh_5tlreg3460, 32); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3463, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:184: 		if (y < 0) y *= -1;
          const u32 Uh_5tlreg3464 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3465 = _Int32ToInt32(Uh_5tlreg3464, 2, 32); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3467 = Uv_1y.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3468 = _BinOpMultiplyInt32(Uh_5tlreg3467, Uh_5tlreg3465, 32); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_1y.write(Uh_5tlreg3468); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:186: 		return (SiteNum)(x + y);
    const u32 Uh_5tlreg3470 = Uv_1y.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3472 = Uv_1x.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3473 = _BinOpAddInt32(Uh_5tlreg3472, Uh_5tlreg3470, 32); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3474 = _Int32ToUnsigned32(Uh_5tlreg3473, 32, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval3475(Uh_5tlreg3474); //gcnl:Node.cpp:1142
    return (Uh_5tlval3475); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_7getDist



//! Bond.ulam:190:   Bool moveTo(SiteNum s){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102294Bond10<EC>::Uf_6moveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const
  {

//! Bond.ulam:191:   	if (s == 0) return false;
    {

//! Bond.ulam:191:   	if (s == 0) return false;
      const u32 Uh_5tlreg3476 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3477 = _Int32ToInt32(Uh_5tlreg3476, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3479 = Uv_1s.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3480 = _Unsigned32ToInt32(Uh_5tlreg3479, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3481 = _BinOpCompareEqEqInt32(Uh_5tlreg3480, Uh_5tlreg3477, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3481, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:191:   	if (s == 0) return false;
          const u32 Uh_5tlreg3482 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3483(Uh_5tlreg3482); //gcnl:Node.cpp:1142
          return (Uh_5tlval3483); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:193: 		if (canMoveTo(s)){
    {

//! Bond.ulam:193: 		if (canMoveTo(s)){
      const u32 Uh_5tlreg3486 = Uv_1s.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3487(Uh_5tlreg3486); //gcnl:Node.cpp:1142
      const Ui_Ut_10111b<EC> Uh_5tlval3489 = THE_INSTANCE.Uf_919canMoveTo(uc, ur, Uh_5tlval3487); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3490 = Uh_5tlval3489.read(); //gcnl:Node.cpp:1170
      if(_Bool32ToCbool(Uh_5tlreg3490, 1)) //gcnl:NodeControl.cpp:213
      {
        {

//! Bond.ulam:194: 			clearSurrounding();
          THE_INSTANCE.Uf_9216clearSurrounding(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:196: 			C2D c = ew.getCoord(s);
          UlamRef<EC> Uh_3tur3494(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3496 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3497(Uh_5tlreg3496); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval3499 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3494, Uh_5tlval3497); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uv_1c(Uh_5tlval3499); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:197: 			Int(5) x = (Int(5))c.x;
          const u32 Uh_5tlreg3502 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3503 = _Int32ToInt32(Uh_5tlreg3502, 16, 5); //gcnl:NodeCast.cpp:748
          Ui_Ut_10151i<EC> Uv_1x(Uh_5tlreg3503); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:198: 			Int(5) y = (Int(5))c.y;
          const u32 Uh_5tlreg3506 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3507 = _Int32ToInt32(Uh_5tlreg3506, 16, 5); //gcnl:NodeCast.cpp:748
          Ui_Ut_10151i<EC> Uv_1y(Uh_5tlreg3507); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
          {

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
            const u32 Uh_5tlreg3508 = 0; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3509 = _Int32ToUnsigned32(Uh_5tlreg3508, 2, 3); //gcnl:NodeCast.cpp:748
            Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3509); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
            while(true)
            {
              const u32 Uh_5tlreg3510 = 4; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3512 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3513 = _Unsigned32ToInt32(Uh_5tlreg3512, 3, 4); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3514 = _BinOpCompareLessThanInt32(Uh_5tlreg3513, Uh_5tlreg3510, 4); //gcnl:NodeBinaryOpCompare.cpp:441

              if(!_Bool32ToCbool(Uh_5tlreg3514, 1))
                break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
              {

//! Bond.ulam:201: 				if (bonds[i] != 0){
                {

//! Bond.ulam:201: 				if (bonds[i] != 0){
                  const u32 Uh_5tlreg3515 = 0; //gcnl:NodeTerminal.cpp:690
                  const u32 Uh_5tlreg3516 = _Int32ToInt32(Uh_5tlreg3515, 2, 6); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3518 = Uv_1i.read(); //gcnl:Node.cpp:698
                  if(Uh_5tlreg3518 >= 5) //gcnl:NodeSquareBracket.cpp:874
                    FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                  Ui_Ut_r10151u<EC> Uh_6tlref3520(ur, Uh_5tlreg3518 * 5u + 4u); //gcnl:Node.cpp:1317
                  const u32 Uh_5tlreg3521 = Uh_6tlref3520.read(); //gcnl:Node.cpp:664
                  const u32 Uh_5tlreg3522 = _Unsigned32ToInt32(Uh_5tlreg3521, 5, 6); //gcnl:NodeCast.cpp:748
                  const u32 Uh_5tlreg3523 = _BinOpCompareNotEqInt32(Uh_5tlreg3522, Uh_5tlreg3516, 6); //gcnl:NodeBinaryOpCompare.cpp:441
                  if(_Bool32ToCbool(Uh_5tlreg3523, 1)) //gcnl:NodeControl.cpp:213
                  {
                    {

//! Bond.ulam:202: 					SiteNum s2 = bonds[i];
                      const u32 Uh_5tlreg3525 = Uv_1i.read(); //gcnl:Node.cpp:698
                      if(Uh_5tlreg3525 >= 5) //gcnl:NodeSquareBracket.cpp:874
                        FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                      Ui_Ut_r10151u<EC> Uh_6tlref3527(ur, Uh_5tlreg3525 * 5u + 4u); //gcnl:Node.cpp:1317
                      const u32 Uh_5tlreg3528 = Uh_6tlref3527.read(); //gcnl:Node.cpp:664
                      const u32 Uh_5tlreg3529 = _Unsigned32ToUnsigned32(Uh_5tlreg3528, 5, 6); //gcnl:NodeCast.cpp:748
                      Ui_Ut_10161u<EC> Uv_2s2(Uh_5tlreg3529); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:203: 					Atom a = ew[s2];
                      UlamRef<EC> Uh_3tur3531(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                      const u32 Uh_5tlreg3533 = Uv_2s2.read(); //gcnl:Node.cpp:698
                      Ui_Ut_10161u<EC> Uh_5tlval3534(Uh_5tlreg3533); //gcnl:Node.cpp:1142
                      Ui_Ut_r102961a<EC> Uh_5tuval3536 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3531, Uh_5tlval3534); //gcnl:NodeFunctionCall.cpp:1043
                      Ui_Ut_102961a<EC> Uv_1a(Uh_5tuval3536); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:204: 					if (a as Bond){
                      {

//! Bond.ulam:204: 					if (a as Bond){
                        const T Uh_3tut3538 = Uv_1a.read(); //gcnl:Node.cpp:698
                        const u32 Uh_5tlreg3539 = UlamClass<EC>::IsMethod(uc, Uh_3tut3538.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalAs.cpp:453
                        if(_Bool32ToCbool(Uh_5tlreg3539, 1)) //gcnl:NodeControl.cpp:213
                        {
                          {

//! Bond.ulam:204: 					if (a as Bond){
                            Ui_Ut_102961a<EC> & Uh_5tuval3540 = Uv_1a; //c++ reference to immediate //gcnl:NodeVarRefAs.cpp:161
                            Ui_Uq_r102294Bond10<EC> Uv_1a(Uh_5tuval3540, 0u + T::ATOM_FIRST_STATE_BIT, uc.LookupUlamElementTypeFromContext(Uh_5tuval3540.GetType()), UlamRef<EC>::ELEMENTAL, uc); //shadows lhs of 'as' //gcnl:NodeVarRefAs.cpp:246

//! Bond.ulam:205: 						c = ew.getCoord(s2);
                            UlamRef<EC> Uh_3tur3542(0u, 32u, Uv_1c, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
                            UlamRef<EC> Uh_3tur3544(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3546 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3547(Uh_5tlreg3546); //gcnl:Node.cpp:1142
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3549 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3544, Uh_5tlval3547); //gcnl:NodeFunctionCall.cpp:1043
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3550(Uh_5tlval3549); //gcnl:Node.cpp:1142
                            Ui_Uq_r102323C2D10<EC> Uh_5tlval3552 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, Uh_3tur3542, Uh_5tlval3550); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:206: 						c.x += x;
                            const u32 Uh_5tlreg3554 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3555 = _Int32ToInt32(Uh_5tlreg3554, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3558 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3559 = _BinOpAddInt32(Uh_5tlreg3558, Uh_5tlreg3555, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3559); //gcnl:Node.cpp:892

//! Bond.ulam:207: 						c.y += y;
                            const u32 Uh_5tlreg3561 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3562 = _Int32ToInt32(Uh_5tlreg3561, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3565 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3566 = _BinOpAddInt32(Uh_5tlreg3565, Uh_5tlreg3562, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3566); //gcnl:Node.cpp:892

//! Bond.ulam:208: 						SiteNum new = ew.getSiteNumber(c);
                            UlamRef<EC> Uh_3tur3568(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3570 = Uv_1c.read(); //gcnl:Node.cpp:698
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3571(Uh_5tlreg3570); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3573 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3568, Uh_5tlval3571); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3574 = Uh_5tlval3573.read(); //gcnl:Node.cpp:1170
                            Ui_Ut_10161u<EC> Uv_3new(Uh_5tlreg3574); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:210: 						a.updateBond((Coord) reverse(s2), (Coord)reverse(new));
                            UlamRef<EC> Uh_3tur3576(Uv_1a, 29u); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3579 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3580(Uh_5tlreg3579); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3582 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3580); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3583 = Uh_5tlval3582.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3584 = _Unsigned32ToUnsigned32(Uh_5tlreg3583, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3585(Uh_5tlreg3584); //gcnl:Node.cpp:1142
                            const u32 Uh_5tlreg3588 = Uv_3new.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3589(Uh_5tlreg3588); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3591 = THE_INSTANCE.Uf_7reverse(uc, ur, Uh_5tlval3589); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3592 = Uh_5tlval3591.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3593 = _Unsigned32ToUnsigned32(Uh_5tlreg3592, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3594(Uh_5tlreg3593); //gcnl:Node.cpp:1142
                            Uq_102294Bond10<EC>::THE_INSTANCE.Uf_9210updateBond(uc, Uh_3tur3576, Uh_5tlval3585, Uh_5tlval3594); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:212: 						c = ew.getCoord(s2);
                            UlamRef<EC> Uh_3tur3597(0u, 32u, Uv_1c, &Uq_102323C2D10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC, uc); //gcnl:NodeFunctionCall.cpp:960
                            UlamRef<EC> Uh_3tur3599(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3601 = Uv_2s2.read(); //gcnl:Node.cpp:698
                            Ui_Ut_10161u<EC> Uh_5tlval3602(Uh_5tlreg3601); //gcnl:Node.cpp:1142
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3604 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3599, Uh_5tlval3602); //gcnl:NodeFunctionCall.cpp:1043
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3605(Uh_5tlval3604); //gcnl:Node.cpp:1142
                            Ui_Uq_r102323C2D10<EC> Uh_5tlval3607 = Uq_102323C2D10<EC>::THE_INSTANCE.Uf_9211_operator3d(uc, Uh_3tur3597, Uh_5tlval3605); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:213: 						c.x -= x;
                            const u32 Uh_5tlreg3609 = Uv_1x.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3610 = _Int32ToInt32(Uh_5tlreg3609, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3613 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3614 = _BinOpSubtractInt32(Uh_5tlreg3613, Uh_5tlreg3610, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3614); //gcnl:Node.cpp:892

//! Bond.ulam:214: 						c.y -= y;
                            const u32 Uh_5tlreg3616 = Uv_1y.read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3617 = _Int32ToInt32(Uh_5tlreg3616, 5, 16); //gcnl:NodeCast.cpp:748
                            const u32 Uh_5tlreg3620 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
                            const u32 Uh_5tlreg3621 = _BinOpSubtractInt32(Uh_5tlreg3620, Uh_5tlreg3617, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                            UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3621); //gcnl:Node.cpp:892

//! Bond.ulam:216: 						updateBond(bonds[i], (Coord) ew.getSiteNumber(c));
                            const u32 Uh_5tlreg3624 = Uv_1i.read(); //gcnl:Node.cpp:698
                            if(Uh_5tlreg3624 >= 5) //gcnl:NodeSquareBracket.cpp:874
                              FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
                            Ui_Ut_r10151u<EC> Uh_6tlref3626(ur, Uh_5tlreg3624 * 5u + 4u); //gcnl:Node.cpp:1317
                            const u32 Uh_5tlreg3627 = Uh_6tlref3626.read(); //gcnl:Node.cpp:664
                            Ui_Ut_10151u<EC> Uh_5tlval3628(Uh_5tlreg3627); //gcnl:Node.cpp:1142
                            UlamRef<EC> Uh_3tur3630(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                            const u32 Uh_5tlreg3632 = Uv_1c.read(); //gcnl:Node.cpp:698
                            Ui_Uq_102323C2D10<EC> Uh_5tlval3633(Uh_5tlreg3632); //gcnl:Node.cpp:1142
                            const Ui_Ut_10161u<EC> Uh_5tlval3635 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3630, Uh_5tlval3633); //gcnl:NodeFunctionCall.cpp:1043
                            const u32 Uh_5tlreg3636 = Uh_5tlval3635.read(); //gcnl:Node.cpp:1170
                            const u32 Uh_5tlreg3637 = _Unsigned32ToUnsigned32(Uh_5tlreg3636, 6, 5); //gcnl:NodeCast.cpp:748
                            Ui_Ut_10151u<EC> Uh_5tlval3638(Uh_5tlreg3637); //gcnl:Node.cpp:1142
                            THE_INSTANCE.Uf_9210updateBond(uc, ur, Uh_5tlval3628, Uh_5tlval3638); //gcnl:NodeFunctionCall.cpp:1043
                          }
                        } // end if
                      }
                    }
                  } // end if
                }
              }

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop210:
              __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:200: 			for (Index i = 0; i < 4; i++){
              const u32 Uh_5tlreg3640 = 1; //gcnl:NodeTerminal.cpp:690
              const u32 Uh_5tlreg3641 = _Int32ToUnsigned32(Uh_5tlreg3640, 32, 3); //gcnl:NodeCast.cpp:748
              const u32 Uh_5tlreg3643 = Uv_1i.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3644 = _BinOpAddUnsigned32(Uh_5tlreg3643, Uh_5tlreg3641, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
              Uv_1i.write(Uh_5tlreg3644); //gcnl:Node.cpp:892
            } // end while //gcnl:NodeControlWhile.cpp:145
          }

//! Bond.ulam:221: 			ew[s] = ew[0];
          UlamRef<EC> Uh_3tur3646(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3647 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3648 = _Int32ToUnsigned32(Uh_5tlreg3647, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3649(Uh_5tlreg3648); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3651 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3646, Uh_5tlval3649); //gcnl:NodeFunctionCall.cpp:1043
          UlamRef<EC> Uh_3tur3653(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3655 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3656(Uh_5tlreg3655); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3658 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3653, Uh_5tlval3656); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3658.WriteAtom(Uh_5tuval3651.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Bond.ulam:222: 			ew[0] = Empty.instanceof;
          Ui_Ue_10105Empty10<EC> Uh_5tuval3659; //gcnl:NodeInstanceof.cpp:113
          UlamRef<EC> Uh_3tur3661(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3662 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3663 = _Int32ToUnsigned32(Uh_5tlreg3662, 2, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uh_5tlval3664(Uh_5tlreg3663); //gcnl:Node.cpp:1142
          Ui_Ut_r102961a<EC> Uh_5tuval3666 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3661, Uh_5tlval3664); //gcnl:NodeFunctionCall.cpp:1043
          Uh_5tuval3666.WriteAtom(Uh_5tuval3659.read()); //write into atomof ref //gcnl:Node.cpp:992

//! Bond.ulam:224: 			fillCellWall();
          THE_INSTANCE.Uf_9212fillCellWall(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:225: 			drawBonds();
          THE_INSTANCE.Uf_919drawBonds(uc, ur); //gcnl:NodeFunctionCall.cpp:1043

//! Bond.ulam:226: 			return true;
          const u32 Uh_5tlreg3671 = 1u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3672(Uh_5tlreg3671); //gcnl:Node.cpp:1142
          return (Uh_5tlval3672); //gcnl:NodeReturnStatement.cpp:343
        }
      } // end if
    }

//! Bond.ulam:229: 		return false;
    const u32 Uh_5tlreg3673 = 0u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3674(Uh_5tlreg3673); //gcnl:Node.cpp:1142
    return (Uh_5tlval3674); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_6moveTo



//! Bond.ulam:236: 	Bool canMoveTo(SiteNum s){
  template<class EC>
  Ui_Ut_10111b<EC> Uq_102294Bond10<EC>::Uf_919canMoveTo(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_10161u<EC>& Uv_1s) const
  {

//! Bond.ulam:237: 		BondParameters bp;
    Ui_Ue_10109214BondParameters10<EC> Uv_2bp; //gcnl:NodeVarDecl.cpp:1118

//! Bond.ulam:238: 		if (s == 0 || s > bp.cMAX) return false;
    {

//! Bond.ulam:238: 		if (s == 0 || s > bp.cMAX) return false;
      u32 Uh_5tlreg3675 = false; //gcnl:NodeBinaryOpLogicalOr.cpp:113
      const u32 Uh_5tlreg3676 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3677 = _Int32ToInt32(Uh_5tlreg3676, 2, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3679 = Uv_1s.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3680 = _Unsigned32ToInt32(Uh_5tlreg3679, 6, 7); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3681 = _BinOpCompareEqEqInt32(Uh_5tlreg3680, Uh_5tlreg3677, 7); //gcnl:NodeBinaryOpCompare.cpp:441
      if(!_Bool32ToCbool(Uh_5tlreg3681, 1)) //gcnl:NodeBinaryOpLogicalOr.cpp:132
      {
        const u32 Uh_5tlreg3684 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_4cMAX.read(uc); //gcnl:Node.cpp:681
        const u32 Uh_5tlreg3686 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3687 = _Unsigned32ToUnsigned32(Uh_5tlreg3686, 6, 32); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3688 = _BinOpCompareGreaterThanUnsigned32(Uh_5tlreg3687, Uh_5tlreg3684, 32); //gcnl:NodeBinaryOpCompare.cpp:441
        Uh_5tlreg3675 = Uh_5tlreg3688; //gcnl:NodeBinaryOpLogicalOr.cpp:146
      }
      else
      {
        Uh_5tlreg3675 = Uh_5tlreg3681; //gcnl:NodeBinaryOpLogicalOr.cpp:163
      }
      if(_Bool32ToCbool(Uh_5tlreg3675, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:238: 		if (s == 0 || s > bp.cMAX) return false;
          const u32 Uh_5tlreg3689 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3690(Uh_5tlreg3689); //gcnl:Node.cpp:1142
          return (Uh_5tlval3690); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:239: 		if (ew[s] is Bond) return false;
    {

//! Bond.ulam:239: 		if (ew[s] is Bond) return false;
      UlamRef<EC> Uh_3tur3692(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
      const u32 Uh_5tlreg3694 = Uv_1s.read(); //gcnl:Node.cpp:698
      Ui_Ut_10161u<EC> Uh_5tlval3695(Uh_5tlreg3694); //gcnl:Node.cpp:1142
      Ui_Ut_r102961a<EC> Uh_5tuval3697 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3692, Uh_5tlval3695); //gcnl:NodeFunctionCall.cpp:1043
      const u32 Uh_5tlreg3698 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3697.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
      if(_Bool32ToCbool(Uh_5tlreg3698, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:239: 		if (ew[s] is Bond) return false;
          const u32 Uh_5tlreg3699 = 0u; //gcnl:NodeTerminal.cpp:690
          Ui_Ut_10111b<EC> Uh_5tlval3700(Uh_5tlreg3699); //gcnl:Node.cpp:1142
          return (Uh_5tlval3700); //gcnl:NodeReturnStatement.cpp:343
      } // end if
    }

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
    {

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3701 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3702 = _Int32ToUnsigned32(Uh_5tlreg3701, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3702); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3703 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3705 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3706 = _Unsigned32ToInt32(Uh_5tlreg3705, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3707 = _BinOpCompareLessThanInt32(Uh_5tlreg3706, Uh_5tlreg3703, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3707, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
        {

//! Bond.ulam:242: 			SiteNum bond = (SiteNum) bonds[i];
          const u32 Uh_5tlreg3709 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3709 >= 5) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3711(ur, Uh_5tlreg3709 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3712 = Uh_6tlref3711.read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3713 = _Unsigned32ToUnsigned32(Uh_5tlreg3712, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_4bond(Uh_5tlreg3713); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:243: 			if (getDist(s, bond) > 3) return false;
          {

//! Bond.ulam:243: 			if (getDist(s, bond) > 3) return false;
            const u32 Uh_5tlreg3714 = 3; //gcnl:NodeTerminal.cpp:690
            const u32 Uh_5tlreg3715 = _Int32ToInt32(Uh_5tlreg3714, 3, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3718 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3719(Uh_5tlreg3718); //gcnl:Node.cpp:1142
            const u32 Uh_5tlreg3721 = Uv_4bond.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3722(Uh_5tlreg3721); //gcnl:Node.cpp:1142
            const Ui_Ut_10161u<EC> Uh_5tlval3724 = THE_INSTANCE.Uf_7getDist(uc, ur, Uh_5tlval3719, Uh_5tlval3722); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3725 = Uh_5tlval3724.read(); //gcnl:Node.cpp:1170
            const u32 Uh_5tlreg3726 = _Unsigned32ToInt32(Uh_5tlreg3725, 6, 7); //gcnl:NodeCast.cpp:748
            const u32 Uh_5tlreg3727 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3726, Uh_5tlreg3715, 7); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3727, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:243: 			if (getDist(s, bond) > 3) return false;
                const u32 Uh_5tlreg3728 = 0u; //gcnl:NodeTerminal.cpp:690
                Ui_Ut_10111b<EC> Uh_5tlval3729(Uh_5tlreg3728); //gcnl:Node.cpp:1142
                return (Uh_5tlval3729); //gcnl:NodeReturnStatement.cpp:343
            } // end if
          }
        }

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
Ul_214endcontrolloop211:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:241: 		for (Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3730 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3731 = _Int32ToUnsigned32(Uh_5tlreg3730, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3733 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3734 = _BinOpAddUnsigned32(Uh_5tlreg3733, Uh_5tlreg3731, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3734); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

//! Bond.ulam:245: 		return true;
    const u32 Uh_5tlreg3735 = 1u; //gcnl:NodeTerminal.cpp:690
    Ui_Ut_10111b<EC> Uh_5tlval3736(Uh_5tlreg3735); //gcnl:Node.cpp:1142
    return (Uh_5tlval3736); //gcnl:NodeReturnStatement.cpp:343

  } // Uf_919canMoveTo



//! Bond.ulam:299: 	Void clearSurrounding(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9216clearSurrounding(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
    {

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg3737 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3738 = _Int32ToUnsigned32(Uh_5tlreg3737, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3738); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg3739 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3741 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3742 = _Unsigned32ToInt32(Uh_5tlreg3741, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3743 = _BinOpCompareLessThanInt32(Uh_5tlreg3742, Uh_5tlreg3739, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3743, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
        {

//! Bond.ulam:301: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:301: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3745(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3747 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3748(Uh_5tlreg3747); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3750 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3745, Uh_5tlval3748); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3751 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3750.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3752 = _LogicalBangBool32(Uh_5tlreg3751, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3752, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:302: 				ew[s] = Empty.instanceof;
                Ui_Ue_10105Empty10<EC> Uh_5tuval3753; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3755(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3757 = Uv_1s.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3758(Uh_5tlreg3757); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3760 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3755, Uh_5tlval3758); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3760.WriteAtom(Uh_5tuval3753.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
          }
        }

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop215:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:300: 		for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg3761 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3762 = _Int32ToUnsigned32(Uh_5tlreg3761, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3764 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3765 = _BinOpAddUnsigned32(Uh_5tlreg3764, Uh_5tlreg3762, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3765); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9216clearSurrounding



//! Bond.ulam:290: 	Void fillCellWall(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_9212fillCellWall(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
    {

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
      const u32 Uh_5tlreg3766 = 1; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3767 = _Int32ToUnsigned32(Uh_5tlreg3766, 2, 6); //gcnl:NodeCast.cpp:748
      Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3767); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
      while(true)
      {
        const u32 Uh_5tlreg3768 = 41; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3770 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3771 = _Unsigned32ToInt32(Uh_5tlreg3770, 6, 7); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3772 = _BinOpCompareLessThanInt32(Uh_5tlreg3771, Uh_5tlreg3768, 7); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3772, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
        {

//! Bond.ulam:292: 			if (!(ew[s] is Bond)){
          {

//! Bond.ulam:292: 			if (!(ew[s] is Bond)){
            UlamRef<EC> Uh_3tur3774(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
            const u32 Uh_5tlreg3776 = Uv_1s.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3777(Uh_5tlreg3776); //gcnl:Node.cpp:1142
            Ui_Ut_r102961a<EC> Uh_5tuval3779 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3774, Uh_5tlval3777); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3780 = UlamClass<EC>::IsMethod(uc, Uh_5tuval3779.GetType(), &Uq_102294Bond10<EC>::THE_INSTANCE); //gcnl:NodeConditionalIs.cpp:294
            const u32 Uh_5tlreg3781 = _LogicalBangBool32(Uh_5tlreg3780, 1); //gcnl:NodeUnaryOp.cpp:507
            if(_Bool32ToCbool(Uh_5tlreg3781, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:293: 				ew[s] = CellWall.instanceof;
                Ui_Ue_10168CellWall10<EC> Uh_5tuval3782; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3784(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3786 = Uv_1s.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3787(Uh_5tlreg3786); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3789 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3784, Uh_5tlval3787); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3789.WriteAtom(Uh_5tuval3782.read()); //write into atomof ref //gcnl:Node.cpp:992
              }
            } // end if
          }
        }

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
Ul_214endcontrolloop214:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:291: 		for (SiteNum s = 1; s < 41; s++){
        const u32 Uh_5tlreg3790 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3791 = _Int32ToUnsigned32(Uh_5tlreg3790, 32, 6); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3793 = Uv_1s.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3794 = _BinOpAddUnsigned32(Uh_5tlreg3793, Uh_5tlreg3791, 6); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1s.write(Uh_5tlreg3794); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_9212fillCellWall



//! Bond.ulam:249: 	Void drawBonds(){
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_919drawBonds(const UlamContext<EC>& uc, UlamRef<EC>& ur) const
  {

//! Bond.ulam:250: 		BondParameters bp;
    Ui_Ue_10109214BondParameters10<EC> Uv_2bp; //gcnl:NodeVarDecl.cpp:1118

//! Bond.ulam:251: 		if (!bp.cSHOW_BONDS) return;
    {

//! Bond.ulam:251: 		if (!bp.cSHOW_BONDS) return;
      const u32 Uh_5tlreg3797 = Ue_10109214BondParameters10<EC>::THE_INSTANCE.Up_9211cSHOW_BONDS.read(uc); //gcnl:Node.cpp:681
      const u32 Uh_5tlreg3798 = _LogicalBangBool32(Uh_5tlreg3797, 1); //gcnl:NodeUnaryOp.cpp:507
      if(_Bool32ToCbool(Uh_5tlreg3798, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:251: 		if (!bp.cSHOW_BONDS) return;
          return; //gcnl:NodeReturnStatement.cpp:348
      } // end if
    }

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
    {

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
      const u32 Uh_5tlreg3799 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3800 = _Int32ToUnsigned32(Uh_5tlreg3799, 2, 3); //gcnl:NodeCast.cpp:748
      Ui_Ut_10131u<EC> Uv_1i(Uh_5tlreg3800); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
      while(true)
      {
        const u32 Uh_5tlreg3801 = 4; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3803 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3804 = _Unsigned32ToInt32(Uh_5tlreg3803, 3, 4); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3805 = _BinOpCompareLessThanInt32(Uh_5tlreg3804, Uh_5tlreg3801, 4); //gcnl:NodeBinaryOpCompare.cpp:441

        if(!_Bool32ToCbool(Uh_5tlreg3805, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
        {

//! Bond.ulam:254: 			SiteNum s = bonds[i];
          const u32 Uh_5tlreg3807 = Uv_1i.read(); //gcnl:Node.cpp:698
          if(Uh_5tlreg3807 >= 5) //gcnl:NodeSquareBracket.cpp:874
            FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeSquareBracket.cpp:878
          Ui_Ut_r10151u<EC> Uh_6tlref3809(ur, Uh_5tlreg3807 * 5u + 4u); //gcnl:Node.cpp:1317
          const u32 Uh_5tlreg3810 = Uh_6tlref3809.read(); //gcnl:Node.cpp:664
          const u32 Uh_5tlreg3811 = _Unsigned32ToUnsigned32(Uh_5tlreg3810, 5, 6); //gcnl:NodeCast.cpp:748
          Ui_Ut_10161u<EC> Uv_1s(Uh_5tlreg3811); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:255: 			C2D c = ew.getCoord(s);
          UlamRef<EC> Uh_3tur3813(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3815 = Uv_1s.read(); //gcnl:Node.cpp:698
          Ui_Ut_10161u<EC> Uh_5tlval3816(Uh_5tlreg3815); //gcnl:Node.cpp:1142
          Ui_Uq_102323C2D10<EC> Uh_5tlval3818 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3813, Uh_5tlval3816); //gcnl:NodeFunctionCall.cpp:1043
          Ui_Uq_102323C2D10<EC> Uv_1c(Uh_5tlval3818); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:256: 			line((Short)0, (Short)0, c.x, c.y);
          const u32 Uh_5tlreg3820 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3821 = _Int32ToInt32(Uh_5tlreg3820, 2, 16); //gcnl:NodeCast.cpp:748
          Ui_Ut_102161i<EC> Uh_5tlval3822(Uh_5tlreg3821); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3823 = 0; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3824 = _Int32ToInt32(Uh_5tlreg3823, 2, 16); //gcnl:NodeCast.cpp:748
          Ui_Ut_102161i<EC> Uh_5tlval3825(Uh_5tlreg3824); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3828 = UlamRef<EC>(0u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          Ui_Ut_102161i<EC> Uh_5tlval3829(Uh_5tlreg3828); //gcnl:Node.cpp:1142
          const u32 Uh_5tlreg3832 = UlamRef<EC>(16u, 16u, Uv_1c, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); //gcnl:Node.cpp:698
          Ui_Ut_102161i<EC> Uh_5tlval3833(Uh_5tlreg3832); //gcnl:Node.cpp:1142
          THE_INSTANCE.Uf_4line(uc, ur, Uh_5tlval3822, Uh_5tlval3825, Uh_5tlval3829, Uh_5tlval3833); //gcnl:NodeFunctionCall.cpp:1043
        }

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
Ul_214endcontrolloop212:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68

//! Bond.ulam:253: 		for(Index i = 0; i < 4; i++){
        const u32 Uh_5tlreg3835 = 1; //gcnl:NodeTerminal.cpp:690
        const u32 Uh_5tlreg3836 = _Int32ToUnsigned32(Uh_5tlreg3835, 32, 3); //gcnl:NodeCast.cpp:748
        const u32 Uh_5tlreg3838 = Uv_1i.read(); //gcnl:Node.cpp:698
        const u32 Uh_5tlreg3839 = _BinOpAddUnsigned32(Uh_5tlreg3838, Uh_5tlreg3836, 3); //gcnl:NodeBinaryOpEqualArithPostIncr.cpp:196
        Uv_1i.write(Uh_5tlreg3839); //gcnl:Node.cpp:892
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_919drawBonds



//! Bond.ulam:262: 	Void line(Short x0, Short y0, Short x1, Short y1) {
  template<class EC>
  void Uq_102294Bond10<EC>::Uf_4line(const UlamContext<EC>& uc, UlamRef<EC>& ur, Ui_Ut_102161i<EC>& Uv_2x0, Ui_Ut_102161i<EC>& Uv_2y0, Ui_Ut_102161i<EC>& Uv_2x1, Ui_Ut_102161i<EC>& Uv_2y1) const
  {

//! Bond.ulam:263: 		C2D c2d = ew.getCoord(0);
    UlamRef<EC> Uh_3tur3841(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
    const u32 Uh_5tlreg3842 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3843 = _Int32ToUnsigned32(Uh_5tlreg3842, 2, 6); //gcnl:NodeCast.cpp:748
    Ui_Ut_10161u<EC> Uh_5tlval3844(Uh_5tlreg3843); //gcnl:Node.cpp:1142
    Ui_Uq_102323C2D10<EC> Uh_5tlval3846 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_8getCoord(uc, Uh_3tur3841, Uh_5tlval3844); //gcnl:NodeFunctionCall.cpp:1043
    Ui_Uq_102323C2D10<EC> Uv_3c2d(Uh_5tlval3846); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:265: 	  Short dx = (Short)(x1-x0);
    const u32 Uh_5tlreg3848 = Uv_2x0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3849 = _Int32ToInt32(Uh_5tlreg3848, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3851 = Uv_2x1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3852 = _Int32ToInt32(Uh_5tlreg3851, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3853 = _BinOpSubtractInt32(Uh_5tlreg3852, Uh_5tlreg3849, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3854 = _Int32ToInt32(Uh_5tlreg3853, 17, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2dx(Uh_5tlreg3854); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:266: 	  Short sx = x0<x1 ? 1 : -1;
    u32 Uh_5tlreg3855; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3857 = Uv_2x1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3859 = Uv_2x0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3860 = _BinOpCompareLessThanInt32(Uh_5tlreg3859, Uh_5tlreg3857, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3860, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3861 = 1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3855 = Uh_5tlreg3861; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3862 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3855 = Uh_5tlreg3862; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_10121i<EC> Uh_5tlval3863(Uh_5tlreg3855); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3864 = _Int32ToInt32(Uh_5tlval3863.read(), 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2sx(Uh_5tlreg3864); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:267: 	  Short dy = (Short)(y1-y0);
    const u32 Uh_5tlreg3866 = Uv_2y0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3867 = _Int32ToInt32(Uh_5tlreg3866, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3869 = Uv_2y1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3870 = _Int32ToInt32(Uh_5tlreg3869, 16, 17); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3871 = _BinOpSubtractInt32(Uh_5tlreg3870, Uh_5tlreg3867, 17); //gcnl:NodeBinaryOp.cpp:805
    const u32 Uh_5tlreg3872 = _Int32ToInt32(Uh_5tlreg3871, 17, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2dy(Uh_5tlreg3872); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:268: 	  Short sy = y0<y1 ? 1 : -1;
    u32 Uh_5tlreg3873; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3875 = Uv_2y1.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3877 = Uv_2y0.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3878 = _BinOpCompareLessThanInt32(Uh_5tlreg3877, Uh_5tlreg3875, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3878, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3879 = 1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3873 = Uh_5tlreg3879; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3880 = (u32) -1; //gcnl:NodeTerminal.cpp:690
      Uh_5tlreg3873 = Uh_5tlreg3880; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_10121i<EC> Uh_5tlval3881(Uh_5tlreg3873); //gcnl:Node.cpp:1142
    const u32 Uh_5tlreg3882 = _Int32ToInt32(Uh_5tlval3881.read(), 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2sy(Uh_5tlreg3882); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:270: 	  if (dx < 0) dx *= -1;
    {

//! Bond.ulam:270: 	  if (dx < 0) dx *= -1;
      const u32 Uh_5tlreg3883 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3884 = _Int32ToInt32(Uh_5tlreg3883, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3886 = Uv_2dx.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3887 = _BinOpCompareLessThanInt32(Uh_5tlreg3886, Uh_5tlreg3884, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3887, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:270: 	  if (dx < 0) dx *= -1;
          const u32 Uh_5tlreg3888 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3889 = _Int32ToInt32(Uh_5tlreg3888, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3891 = Uv_2dx.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3892 = _BinOpMultiplyInt32(Uh_5tlreg3891, Uh_5tlreg3889, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_2dx.write(Uh_5tlreg3892); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:271: 	  if (dy < 0) dy *= -1;
    {

//! Bond.ulam:271: 	  if (dy < 0) dy *= -1;
      const u32 Uh_5tlreg3893 = 0; //gcnl:NodeTerminal.cpp:690
      const u32 Uh_5tlreg3894 = _Int32ToInt32(Uh_5tlreg3893, 2, 16); //gcnl:NodeCast.cpp:748
      const u32 Uh_5tlreg3896 = Uv_2dy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3897 = _BinOpCompareLessThanInt32(Uh_5tlreg3896, Uh_5tlreg3894, 16); //gcnl:NodeBinaryOpCompare.cpp:441
      if(_Bool32ToCbool(Uh_5tlreg3897, 1)) //gcnl:NodeControl.cpp:213
      {

//! Bond.ulam:271: 	  if (dy < 0) dy *= -1;
          const u32 Uh_5tlreg3898 = (u32) -1; //gcnl:NodeTerminal.cpp:690
          const u32 Uh_5tlreg3899 = _Int32ToInt32(Uh_5tlreg3898, 2, 16); //gcnl:NodeCast.cpp:748
          const u32 Uh_5tlreg3901 = Uv_2dy.read(); //gcnl:Node.cpp:698
          const u32 Uh_5tlreg3902 = _BinOpMultiplyInt32(Uh_5tlreg3901, Uh_5tlreg3899, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
          Uv_2dy.write(Uh_5tlreg3902); //gcnl:Node.cpp:892
      } // end if
    }

//! Bond.ulam:273: 	  Short err = (dx>dy ? dx : -dy);
    u32 Uh_5tlreg3903; //gcnl:NodeQuestionColon.cpp:507
    const u32 Uh_5tlreg3905 = Uv_2dy.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3907 = Uv_2dx.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3908 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3907, Uh_5tlreg3905, 16); //gcnl:NodeBinaryOpCompare.cpp:441
    if(_Bool32ToCbool(Uh_5tlreg3908, 1)) //gcnl:NodeQuestionColon.cpp:655
    {
      const u32 Uh_5tlreg3910 = Uv_2dx.read(); //gcnl:Node.cpp:698
      Uh_5tlreg3903 = Uh_5tlreg3910; //gcnl:NodeQuestionColon.cpp:527
    }
    else
    {
      const u32 Uh_5tlreg3912 = Uv_2dy.read(); //gcnl:Node.cpp:698
      const u32 Uh_5tlreg3913 = _UnaryMinusInt32(Uh_5tlreg3912, 16); //gcnl:NodeUnaryOp.cpp:507
      Uh_5tlreg3903 = Uh_5tlreg3913; //gcnl:NodeQuestionColon.cpp:552
    } //ends?:

    Ui_Ut_102161i<EC> Uh_5tlval3914(Uh_5tlreg3903); //gcnl:Node.cpp:1142
    Ui_Ut_102161i<EC> Uv_3err(Uh_5tlval3914); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:274: 	  err /= 2;
    const u32 Uh_5tlreg3915 = 2; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3916 = _Int32ToInt32(Uh_5tlreg3915, 3, 16); //gcnl:NodeCast.cpp:748
    const u32 Uh_5tlreg3918 = Uv_3err.read(); //gcnl:Node.cpp:698
    const u32 Uh_5tlreg3919 = _BinOpDivideInt32(Uh_5tlreg3918, Uh_5tlreg3916, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
    Uv_3err.write(Uh_5tlreg3919); //gcnl:Node.cpp:892

//! Bond.ulam:275: 	  Short e2 = 0;
    const u32 Uh_5tlreg3920 = 0; //gcnl:NodeTerminal.cpp:690
    const u32 Uh_5tlreg3921 = _Int32ToInt32(Uh_5tlreg3920, 2, 16); //gcnl:NodeCast.cpp:748
    Ui_Ut_102161i<EC> Uv_2e2(Uh_5tlreg3921); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:277: 	  for(;;){
    {

//! Bond.ulam:277: 	  for(;;){
      while(true)
      {
        const u32 Uh_5tlreg3922 = 1u; //gcnl:NodeTerminal.cpp:690

        if(!_Bool32ToCbool(Uh_5tlreg3922, 1))
          break; //gcnl:NodeControlWhile.cpp:135

//! Bond.ulam:277: 	  for(;;){
        {

//! Bond.ulam:278: 	  	c2d.x = x0;
          const u32 Uh_5tlreg3924 = Uv_2x0.read(); //gcnl:Node.cpp:698
          UlamRef<EC>(0u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3924); //gcnl:Node.cpp:892

//! Bond.ulam:279: 	  	c2d.y = y0;
          const u32 Uh_5tlreg3928 = Uv_2y0.read(); //gcnl:Node.cpp:698
          UlamRef<EC>(16u, 16u, Uv_3c2d, NULL, UlamRef<EC>::PRIMITIVE, uc).Write(Uh_5tlreg3928); //gcnl:Node.cpp:892

//! Bond.ulam:280: 	  	SiteNum site = ew.getSiteNumber(c2d);
          UlamRef<EC> Uh_3tur3932(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
          const u32 Uh_5tlreg3934 = Uv_3c2d.read(); //gcnl:Node.cpp:698
          Ui_Uq_102323C2D10<EC> Uh_5tlval3935(Uh_5tlreg3934); //gcnl:Node.cpp:1142
          const Ui_Ut_10161u<EC> Uh_5tlval3937 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_9213getSiteNumber(uc, Uh_3tur3932, Uh_5tlval3935); //gcnl:NodeFunctionCall.cpp:1043
          const u32 Uh_5tlreg3938 = Uh_5tlval3937.read(); //gcnl:Node.cpp:1170
          Ui_Ut_10161u<EC> Uv_4site(Uh_5tlreg3938); //gcnl:NodeVarDecl.cpp:1081

//! Bond.ulam:281: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
          {

//! Bond.ulam:281: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
            const u32 Uh_5tlreg3941 = Uv_4site.read(); //gcnl:Node.cpp:698
            Ui_Ut_10161u<EC> Uh_5tlval3942(Uh_5tlreg3941); //gcnl:Node.cpp:1142
            const Ui_Ut_10111b<EC> Uh_5tlval3944 = THE_INSTANCE.Uf_919canMoveTo(uc, ur, Uh_5tlval3942); //gcnl:NodeFunctionCall.cpp:1043
            const u32 Uh_5tlreg3945 = Uh_5tlval3944.read(); //gcnl:Node.cpp:1170
            if(_Bool32ToCbool(Uh_5tlreg3945, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:281: 	  	if (canMoveTo(site)) ew[site] = Wall.instanceof;
                Ui_Ue_10104Wall10<EC> Uh_5tuval3946; //gcnl:NodeInstanceof.cpp:113
                UlamRef<EC> Uh_3tur3948(ur, 0u, 0u, &Uq_10109211EventWindow10<EC>::THE_INSTANCE, UlamRef<EC>::CLASSIC); //gcnl:NodeFunctionCall.cpp:960
                const u32 Uh_5tlreg3950 = Uv_4site.read(); //gcnl:Node.cpp:698
                Ui_Ut_10161u<EC> Uh_5tlval3951(Uh_5tlreg3950); //gcnl:Node.cpp:1142
                Ui_Ut_r102961a<EC> Uh_5tuval3953 = Uq_10109211EventWindow10<EC>::THE_INSTANCE.Uf_4aref(uc, Uh_3tur3948, Uh_5tlval3951); //gcnl:NodeFunctionCall.cpp:1043
                Uh_5tuval3953.WriteAtom(Uh_5tuval3946.read()); //write into atomof ref //gcnl:Node.cpp:992
            } // end if
          }

//! Bond.ulam:283: 	    if (x0==x1 && y0==y1) break;
          {

//! Bond.ulam:283: 	    if (x0==x1 && y0==y1) break;
            u32 Uh_5tlreg3954 = false; //gcnl:NodeBinaryOpLogicalAnd.cpp:118
            const u32 Uh_5tlreg3956 = Uv_2x1.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3958 = Uv_2x0.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3959 = _BinOpCompareEqEqInt32(Uh_5tlreg3958, Uh_5tlreg3956, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3959, 1)) //gcnl:NodeBinaryOpLogicalAnd.cpp:137
            {
              const u32 Uh_5tlreg3961 = Uv_2y1.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3963 = Uv_2y0.read(); //gcnl:Node.cpp:698
              const u32 Uh_5tlreg3964 = _BinOpCompareEqEqInt32(Uh_5tlreg3963, Uh_5tlreg3961, 16); //gcnl:NodeBinaryOpCompare.cpp:441
              Uh_5tlreg3954 = Uh_5tlreg3964; //gcnl:NodeBinaryOpLogicalAnd.cpp:151
            }
            if(_Bool32ToCbool(Uh_5tlreg3954, 1)) //gcnl:NodeControl.cpp:213
            {

//! Bond.ulam:283: 	    if (x0==x1 && y0==y1) break;
                break; //out of nearest loop //gcnl:NodeBreakStatement.cpp:69
            } // end if
          }

//! Bond.ulam:284: 	    e2 = err;
          const u32 Uh_5tlreg3966 = Uv_3err.read(); //gcnl:Node.cpp:698
          Uv_2e2.write(Uh_5tlreg3966); //gcnl:Node.cpp:892

//! Bond.ulam:285: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
          {

//! Bond.ulam:285: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
            const u32 Uh_5tlreg3969 = Uv_2dx.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3970 = _UnaryMinusInt32(Uh_5tlreg3969, 16); //gcnl:NodeUnaryOp.cpp:507
            const u32 Uh_5tlreg3972 = Uv_2e2.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3973 = _BinOpCompareGreaterThanInt32(Uh_5tlreg3972, Uh_5tlreg3970, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3973, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:285: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
                const u32 Uh_5tlreg3975 = Uv_2dy.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3977 = Uv_3err.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3978 = _BinOpSubtractInt32(Uh_5tlreg3977, Uh_5tlreg3975, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_3err.write(Uh_5tlreg3978); //gcnl:Node.cpp:892

//! Bond.ulam:285: 	    if (e2 >-dx) { err -= dy; x0 += sx; }
                const u32 Uh_5tlreg3980 = Uv_2sx.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3982 = Uv_2x0.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3983 = _BinOpAddInt32(Uh_5tlreg3982, Uh_5tlreg3980, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_2x0.write(Uh_5tlreg3983); //gcnl:Node.cpp:892
              }
            } // end if
          }

//! Bond.ulam:286: 	    if (e2 < dy) { err += dx; y0 += sy; }
          {

//! Bond.ulam:286: 	    if (e2 < dy) { err += dx; y0 += sy; }
            const u32 Uh_5tlreg3985 = Uv_2dy.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3987 = Uv_2e2.read(); //gcnl:Node.cpp:698
            const u32 Uh_5tlreg3988 = _BinOpCompareLessThanInt32(Uh_5tlreg3987, Uh_5tlreg3985, 16); //gcnl:NodeBinaryOpCompare.cpp:441
            if(_Bool32ToCbool(Uh_5tlreg3988, 1)) //gcnl:NodeControl.cpp:213
            {
              {

//! Bond.ulam:286: 	    if (e2 < dy) { err += dx; y0 += sy; }
                const u32 Uh_5tlreg3990 = Uv_2dx.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3992 = Uv_3err.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3993 = _BinOpAddInt32(Uh_5tlreg3992, Uh_5tlreg3990, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_3err.write(Uh_5tlreg3993); //gcnl:Node.cpp:892

//! Bond.ulam:286: 	    if (e2 < dy) { err += dx; y0 += sy; }
                const u32 Uh_5tlreg3995 = Uv_2sy.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3997 = Uv_2y0.read(); //gcnl:Node.cpp:698
                const u32 Uh_5tlreg3998 = _BinOpAddInt32(Uh_5tlreg3997, Uh_5tlreg3995, 16); //gcnl:NodeBinaryOpEqualArith.cpp:244
                Uv_2y0.write(Uh_5tlreg3998); //gcnl:Node.cpp:892
              }
            } // end if
          }
        }

//! Bond.ulam:277: 	  for(;;){
Ul_214endcontrolloop213:
        __attribute__((__unused__)); //gcnl:NodeLabel.cpp:68
      } // end while //gcnl:NodeControlWhile.cpp:145
    }

  } // Uf_4line


  //BUILT-IN FUNCTIONS:

  template<class EC>
  const UlamClassDataMemberInfo & Uq_102294Bond10<EC>::GetDataMemberInfo(u32 dataMemberNumber) const
  {
    switch (dataMemberNumber)
    {
      case 0: { static UlamClassDataMemberInfo i("Uq_10109211EventWindow10", "ew", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 1: { static UlamClassDataMemberInfo i("Uq_1010919AtomUtils10", "au", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 2: { static UlamClassDataMemberInfo i("Ut_10111b", "active", 0u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 3: { static UlamClassDataMemberInfo i("Ut_10131u", "bondCount", 1u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
      case 4: { static UlamClassDataMemberInfo i("Ut_15151u", "bonds", 4u); return i; } //gcnl:NodeVarDeclDM.cpp:1131
    }; //end switch //gcnl:NodeBlockClass.cpp:2652
    FAIL(ILLEGAL_ARGUMENT); //gcnl:NodeBlockClass.cpp:2655
  } //GetDataMemberInfo

  template<class EC>
  s32 Uq_102294Bond10<EC>::GetDataMemberCount() const
  {
    return 5; //gcnl:NodeBlockClass.cpp:2719
  } //GetDataMemberCount

  template<class EC>
  const char * Uq_102294Bond10<EC>::GetMangledClassName() const
  {
    return "Uq_102294Bond10"; //gcnl:NodeBlockClass.cpp:2770
  } //GetMangledClassName

  template<class EC>
  u32 Uq_102294Bond10<EC>::GetClassLength( ) const
  {
    return 29; //gcnl:NodeBlockClass.cpp:2019
  } //getClassLength

  template<class EC>
  const unsigned char * Uq_102294Bond10<EC>::GetString(u32 sidx)  const
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
  u32 Uq_102294Bond10<EC>::GetStringLength(u32 sidx)  const
  {
    return *(GetString(sidx) - 1); //gcnl:NodeBlockClass.cpp:2602
  } //GetStringLength

  template<class EC>
  u32 Uq_102294Bond10<EC>::getDefaultQuark( ) const
  {
    return 0x10000000; //=268435456 //gcnl:NodeBlockClass.cpp:2169
  } //getDefaultQuark

  template<class EC>
  VfuncPtr Uq_102294Bond10<EC>::m_vtable[2] = {
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_6behave10) &Uq_10106UrSelf10<EC>::Uf_6behave),
    (VfuncPtr) ((typename Uq_10106UrSelf10<EC>::Uf_8getColor11102321u) &Uq_10106UrSelf10<EC>::Uf_8getColor)
  }; //VTABLE Definition //gcnl:NodeBlockClass.cpp:2341

  template<class EC>
  VfuncPtr Uq_102294Bond10<EC>::getVTableEntry(u32 idx) const
  {
    if(idx >= 2) FAIL(ARRAY_INDEX_OUT_OF_BOUNDS); //gcnl:NodeBlockClass.cpp:2361
    return m_vtable[idx]; //gcnl:NodeBlockClass.cpp:2364
  }

  template<class EC>
  bool Uq_102294Bond10<EC>::internalCMethodImplementingIs(const UlamClass<EC> * cptrarg) const
  {
    if(cptrarg == &Uq_10106UrSelf10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981
    if(cptrarg == &Uq_102294Bond10<EC>::THE_INSTANCE) return(true); //inherited class, or self (last) //gcnl:NodeBlockClass.cpp:1981

    return (false); //not found //gcnl:NodeBlockClass.cpp:1959
  } //is-related

} //MFM

