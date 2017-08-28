/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r102321i
#define Ud_Ui_Ut_r102321i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321i(const Ui_Ut_r102321i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321i& operator=(const Ui_Ut_r102321i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321i */

#ifndef Ud_Ui_Ut_102321i
#define Ud_Ui_Ut_102321i
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321i : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321i(const Ui_Ut_102321i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321i(const Ui_Ut_r102321i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321i */

#ifndef Ud_Ui_Ut_r102321u
#define Ud_Ui_Ut_r102321u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321u(const Ui_Ut_r102321u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321u& operator=(const Ui_Ut_r102321u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321u */

#ifndef Ud_Ui_Ut_102321u
#define Ud_Ui_Ut_102321u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321u : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321u(const Ui_Ut_102321u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321u(const Ui_Ut_r102321u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321u */

#ifndef Ud_Ui_Ut_r102321t
#define Ud_Ui_Ut_r102321t
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321t : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102321t(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321t(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321t(const Ui_Ut_r102321t<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321t& operator=(const Ui_Ut_r102321t& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321t */

#ifndef Ud_Ui_Ut_102321t
#define Ud_Ui_Ut_102321t
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321t : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102321t() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102321t(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102321t(const Ui_Ut_102321t& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102321t(const Ui_Ut_r102321t<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321t"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321t */

#ifndef Ud_Ui_Ut_r102321s
#define Ud_Ui_Ut_r102321s
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102321s : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    const u32 getRegistrationNumber() const { return UlamRef<EC>(*this, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitiveString.cpp:241
    const u32 getStringIndex() const { return UlamRef<EC>(*this, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Read(); } //gcnl:UlamTypePrimitiveString.cpp:251

    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    void setRegistrationNumber(u32 regnum) { UlamRef<EC>(*this, 0u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(regnum); } //gcnl:UlamTypePrimitiveString.cpp:267
    void setStringIndex(u32 sidx) { UlamRef<EC>(*this, 16u, 16u, NULL, UlamRef<EC>::PRIMITIVE).Write(sidx); } //gcnl:UlamTypePrimitiveString.cpp:275

    Ui_Ut_r102321s(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102321s(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 32u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102321s(const Ui_Ut_r102321s<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 32); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102321s& operator=(const Ui_Ut_r102321s& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102321s */

#ifndef Ud_Ui_Ut_102321s
#define Ud_Ui_Ut_102321s
namespace MFM{

  template<class EC>
  struct Ui_Ut_102321s : public BitVectorBitStorage<EC, BitVector<32u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<32> BV; //gcnl:UlamTypePrimitiveString.cpp:339
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitiveString.cpp:342

    enum { REG_NUM_BITS = 16, STR_IDX_BITS = 16, STR_IDX_MASK = 65535}; //gcnl:UlamTypePrimitiveString.cpp:354
    static u32 getRegNum(u32 combinedidx) { return (combinedidx >> REG_NUM_BITS); } //gcnl:UlamTypePrimitiveString.cpp:359
    static u32 getStrIdx(u32 combinedidx) { return (combinedidx & STR_IDX_MASK); } //gcnl:UlamTypePrimitiveString.cpp:362
    static u32 makeCombinedIdx(u32 regnum, u32 stridx) { return ((regnum << REG_NUM_BITS) | (stridx & STR_IDX_MASK)); } //gcnl:UlamTypePrimitiveString.cpp:365
    const u32 read() const { return BVS::Read(0u, 32u); } //gcnl:UlamTypePrimitive.cpp:568
    const u32 getRegistrationNumber() const { return BVS::Read(0u, 16u); } //gcnl:UlamTypePrimitiveString.cpp:456
    const u32 getStringIndex() const { return BVS::Read(16u, 16u); } //gcnl:UlamTypePrimitiveString.cpp:466

    void write(const u32& v) { BVS::Write(0u, 32u, v); } //gcnl:UlamTypePrimitive.cpp:605
    void setRegistrationNumber(u32 regnum) { BVS::Write(0u, 16u, regnum); } //gcnl:UlamTypePrimitiveString.cpp:482
    void setStringIndex(u32 sidx) { BVS::Write(16u, 16u, sidx); } //gcnl:UlamTypePrimitiveString.cpp:490

    Ui_Ut_102321s() { } //gcnl:UlamTypePrimitiveString.cpp:378
    Ui_Ut_102321s(u32 regnum, u32 sidx) { setRegistrationNumber(regnum); setStringIndex(sidx); } //gcnl:UlamTypePrimitiveString.cpp:390
    Ui_Ut_102321s(const Ui_Ut_102321s& other) { this->write(other.read()); } //gcnl:UlamTypePrimitiveString.cpp:413
    Ui_Ut_102321s(const Ui_Ut_r102321s<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitiveString.cpp:422
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102321s"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102321s */

#ifndef Ud_Ui_Un_r102649216ByteStreamString10
#define Ud_Ui_Un_r102649216ByteStreamString10
namespace MFM{

  template<class EC> class Un_102649216ByteStreamString10;  //forward //gcnl:UlamTypeClassTransient.cpp:218

  template<class EC>
  struct Ui_Un_r102649216ByteStreamString10 : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef Un_102649216ByteStreamString10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:240
    typedef UlamRef<EC> Up_Us; //gcnl:UlamTypeClassTransient.cpp:244
    const BitVector<64> read() const { BitVector<64> tmpbv; this->GetStorage().ReadBV(this->GetPos(), tmpbv); return tmpbv; /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:339
    void write(const BitVector<64>& targ) { this->GetStorage().WriteBV(this->GetPos(), targ); /* entire transient */ } //gcnl:UlamTypeClassTransient.cpp:374
    Ui_Un_r102649216ByteStreamString10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 64u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassTransient.cpp:262
    Ui_Un_r102649216ByteStreamString10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 64u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:274
    Ui_Un_r102649216ByteStreamString10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:285
    Ui_Un_r102649216ByteStreamString10(const Ui_Un_r102649216ByteStreamString10<EC>& r) : UlamRef<EC>(r, 0, r.GetLen(), r.GetEffectiveSelf(), UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassTransient.cpp:297
    Ui_Un_r102649216ByteStreamString10& operator=(const Ui_Un_r102649216ByteStreamString10& rhs); //declare away //gcnl:UlamTypeClassTransient.cpp:306
  };
} //MFM
#endif /*Ud_Ui_Un_r102649216ByteStreamString10 */

#ifndef Ud_Ui_Un_102649216ByteStreamString10
#define Ud_Ui_Un_102649216ByteStreamString10
namespace MFM{

  template<class EC>
  struct Ui_Un_102649216ByteStreamString10 : public BitVectorBitStorage<EC, BitVector<64> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<64> BV; //gcnl:UlamTypeClassTransient.cpp:454
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassTransient.cpp:457

    typedef Un_102649216ByteStreamString10<EC> Us; //gcnl:UlamTypeClassTransient.cpp:476

    const BitVector<64> read() const { BitVector<64> rtnunpbv; this->BVS::ReadBV(0u, rtnunpbv); return rtnunpbv; } //reads entire BV //gcnl:UlamTypeClassTransient.cpp:558
    void  write(const BitVector<64>& bv) { BVS::WriteBV(0u, bv); } //writes entire BV //gcnl:UlamTypeClassTransient.cpp:588
    Ui_Un_102649216ByteStreamString10() { Us::THE_INSTANCE.getDefaultTransient(0u, *this); } //gcnl:UlamTypeClassTransient.cpp:490
    Ui_Un_102649216ByteStreamString10(const BitVector<64>& d) { write(d); } //gcnl:UlamTypeClassTransient.cpp:510
    Ui_Un_102649216ByteStreamString10(const Ui_Un_102649216ByteStreamString10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassTransient.cpp:518
    Ui_Un_102649216ByteStreamString10(const Ui_Un_r102649216ByteStreamString10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassTransient.cpp:526
    virtual const char * GetUlamTypeMangledName() const { return "Un_102649216ByteStreamString10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Un_102649216ByteStreamString10 */

#ifndef Ud_Ui_Uq_r10109210ByteStream10
#define Ud_Ui_Uq_r10109210ByteStream10
namespace MFM{

  template<class EC> class Uq_10109210ByteStream10;  //forward //gcnl:UlamTypeClassQuark.cpp:219

  template<class EC>
  struct Ui_Uq_r10109210ByteStream10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:228
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:240

    typedef Uq_10109210ByteStream10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:247
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:358
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:394
    Ui_Uq_r10109210ByteStream10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:266
    Ui_Uq_r10109210ByteStream10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:278
    Ui_Uq_r10109210ByteStream10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10109210ByteStream10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:297
    Ui_Uq_r10109210ByteStream10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:305
    Ui_Uq_r10109210ByteStream10(const Ui_Uq_r10109210ByteStream10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:314
    Ui_Uq_r10109210ByteStream10& operator=(const Ui_Uq_r10109210ByteStream10& rhs); //declare away //gcnl:UlamTypeClassQuark.cpp:323
  };
} //MFM
#endif /*Ud_Ui_Uq_r10109210ByteStream10 */

#ifndef Ud_Ui_Uq_10109210ByteStream10
#define Ud_Ui_Uq_10109210ByteStream10
namespace MFM{

  template<class EC> class Uq_10109210ByteStream10; //forward //gcnl:UlamTypeClassQuark.cpp:455

  template<class EC>
  struct Ui_Uq_10109210ByteStream10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:480
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:488
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:491

    typedef Uq_10109210ByteStream10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:510

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:604
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:661
    Ui_Uq_10109210ByteStream10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:527
    Ui_Uq_10109210ByteStream10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:553
    Ui_Uq_10109210ByteStream10(const Ui_Uq_10109210ByteStream10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:562
    Ui_Uq_10109210ByteStream10(const Ui_Uq_r10109210ByteStream10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:570
    virtual const char * GetUlamTypeMangledName() const { return "Uq_10109210ByteStream10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Uq_10109210ByteStream10 */

