/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r10151i
#define Ud_Ui_Ut_r10151i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10151i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10151i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 5u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10151i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 5u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10151i(const Ui_Ut_r10151i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 5); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10151i& operator=(const Ui_Ut_r10151i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10151i */

#ifndef Ud_Ui_Ut_10151i
#define Ud_Ui_Ut_10151i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10151i : public BitVectorBitStorage<EC, BitVector<5u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<5> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 5u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 5u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10151i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10151i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10151i(const Ui_Ut_10151i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10151i(const Ui_Ut_r10151i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10151i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10151i */

#ifndef Ud_Ui_Ut_r102301u
#define Ud_Ui_Ut_r102301u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102301u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r102301u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 30u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r102301u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 30u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r102301u(const Ui_Ut_r102301u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 30); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r102301u& operator=(const Ui_Ut_r102301u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r102301u */

#ifndef Ud_Ui_Ut_102301u
#define Ud_Ui_Ut_102301u
namespace MFM{

  template<class EC>
  struct Ui_Ut_102301u : public BitVectorBitStorage<EC, BitVector<30u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<30> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 30u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 30u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_102301u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_102301u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_102301u(const Ui_Ut_102301u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_102301u(const Ui_Ut_r102301u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102301u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102301u */

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

#ifndef Ud_Ui_Ut_r10111b
#define Ud_Ui_Ut_r10111b
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10111b : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10111b(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10111b(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10111b(const Ui_Ut_r10111b<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 1); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10111b& operator=(const Ui_Ut_r10111b& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10111b */

#ifndef Ud_Ui_Ut_10111b
#define Ud_Ui_Ut_10111b
namespace MFM{

  template<class EC>
  struct Ui_Ut_10111b : public BitVectorBitStorage<EC, BitVector<1u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 1u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 1u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10111b() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10111b(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10111b(const Ui_Ut_10111b& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10111b(const Ui_Ut_r10111b<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10111b"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10111b */

#ifndef Ud_Ui_Uq_r10106Random10
#define Ud_Ui_Uq_r10106Random10
namespace MFM{

  template<class EC> class Uq_10106Random10;  //forward //gcnl:UlamTypeClassQuark.cpp:219

  template<class EC>
  struct Ui_Uq_r10106Random10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:228
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:240

    typedef Uq_10106Random10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:247
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:358
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:394
    Ui_Uq_r10106Random10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:266
    Ui_Uq_r10106Random10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:278
    Ui_Uq_r10106Random10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10106Random10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:297
    Ui_Uq_r10106Random10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:305
    Ui_Uq_r10106Random10(const Ui_Uq_r10106Random10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:314
    Ui_Uq_r10106Random10& operator=(const Ui_Uq_r10106Random10& rhs); //declare away //gcnl:UlamTypeClassQuark.cpp:323
  };
} //MFM
#endif /*Ud_Ui_Uq_r10106Random10 */

#ifndef Ud_Ui_Uq_10106Random10
#define Ud_Ui_Uq_10106Random10
namespace MFM{

  template<class EC> class Uq_10106Random10; //forward //gcnl:UlamTypeClassQuark.cpp:455

  template<class EC>
  struct Ui_Uq_10106Random10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:480
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:488
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:491

    typedef Uq_10106Random10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:510

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:604
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:661
    Ui_Uq_10106Random10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:527
    Ui_Uq_10106Random10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:553
    Ui_Uq_10106Random10(const Ui_Uq_10106Random10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:562
    Ui_Uq_10106Random10(const Ui_Uq_r10106Random10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:570
    virtual const char * GetUlamTypeMangledName() const { return "Uq_10106Random10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Uq_10106Random10 */

