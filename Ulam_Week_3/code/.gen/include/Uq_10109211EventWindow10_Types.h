/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r10131i
#define Ud_Ui_Ut_r10131i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10131i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131i(const Ui_Ut_r10131i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10131i& operator=(const Ui_Ut_r10131i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131i */

#ifndef Ud_Ui_Ut_10131i
#define Ud_Ui_Ut_10131i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131i : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10131i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10131i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10131i(const Ui_Ut_10131i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10131i(const Ui_Ut_r10131i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10131i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10131i */

#ifndef Ud_Ui_Ut_r10141i
#define Ud_Ui_Ut_r10141i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10141i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10141i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 4u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10141i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 4u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10141i(const Ui_Ut_r10141i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 4); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10141i& operator=(const Ui_Ut_r10141i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10141i */

#ifndef Ud_Ui_Ut_10141i
#define Ud_Ui_Ut_10141i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10141i : public BitVectorBitStorage<EC, BitVector<4u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<4> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 4u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 4u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10141i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10141i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10141i(const Ui_Ut_10141i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10141i(const Ui_Ut_r10141i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10141i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10141i */

#ifndef Ud_Ui_Ut_r10111u
#define Ud_Ui_Ut_r10111u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10111u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10111u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 1u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10111u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 1u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10111u(const Ui_Ut_r10111u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 1); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10111u& operator=(const Ui_Ut_r10111u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10111u */

#ifndef Ud_Ui_Ut_10111u
#define Ud_Ui_Ut_10111u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10111u : public BitVectorBitStorage<EC, BitVector<1u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<1> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 1u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 1u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10111u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10111u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10111u(const Ui_Ut_10111u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10111u(const Ui_Ut_r10111u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10111u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10111u */

#ifndef Ud_Ui_Ut_r10121u
#define Ud_Ui_Ut_r10121u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10121u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10121u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 2u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10121u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 2u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10121u(const Ui_Ut_r10121u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 2); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10121u& operator=(const Ui_Ut_r10121u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10121u */

#ifndef Ud_Ui_Ut_10121u
#define Ud_Ui_Ut_10121u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10121u : public BitVectorBitStorage<EC, BitVector<2u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<2> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 2u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 2u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10121u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10121u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10121u(const Ui_Ut_10121u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10121u(const Ui_Ut_r10121u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10121u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10121u */

#ifndef Ud_Ui_Ut_r10131u
#define Ud_Ui_Ut_r10131u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10131u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10131u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 3u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10131u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 3u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10131u(const Ui_Ut_r10131u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 3); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10131u& operator=(const Ui_Ut_r10131u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10131u */

#ifndef Ud_Ui_Ut_10131u
#define Ud_Ui_Ut_10131u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10131u : public BitVectorBitStorage<EC, BitVector<3u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<3> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 3u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 3u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10131u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10131u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10131u(const Ui_Ut_10131u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10131u(const Ui_Ut_r10131u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10131u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10131u */

#ifndef Ud_Ui_Ut_r10161u
#define Ud_Ui_Ut_r10161u
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10161u : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10161u(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 6u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10161u(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 6u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10161u(const Ui_Ut_r10161u<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 6); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10161u& operator=(const Ui_Ut_r10161u& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10161u */

#ifndef Ud_Ui_Ut_10161u
#define Ud_Ui_Ut_10161u
namespace MFM{

  template<class EC>
  struct Ui_Ut_10161u : public BitVectorBitStorage<EC, BitVector<6u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<6> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 6u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 6u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10161u() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10161u(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10161u(const Ui_Ut_10161u& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10161u(const Ui_Ut_r10161u<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10161u"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10161u */

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

#ifndef Ud_Ui_Ut_r102961a
#define Ud_Ui_Ut_r102961a
namespace MFM{
  template<class EC>
  struct Ui_Ut_r102961a : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const T read() const { return UlamRef<EC>::ReadAtom(); /* read entire atom */ } //gcnl:UlamTypeAtom.cpp:244
    void write(const T& v) { UlamRef<EC>::WriteAtom(v); /* write entire atom */ } //gcnl:UlamTypeAtom.cpp:257
    void write(const AtomRefBitStorage<EC>& v) { UlamRef<EC>::WriteAtom(v.ReadAtom()); /* write entire atom */ } //gcnl:UlamTypeAtom.cpp:265
    Ui_Ut_r102961a(BitStorage<EC>& targ, u32 startidx, const UlamContext<EC>& uc) : UlamRef<EC>(startidx, BPA, targ, uc.LookupUlamElementTypeFromContext(targ.ReadAtom(startidx).GetType()), UlamRef<EC>::ATOMIC, uc) { } //gcnl:UlamTypeAtom.cpp:195
    Ui_Ut_r102961a(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, BPA, NULL, UlamRef<EC>::ATOMIC) { } //gcnl:UlamTypeAtom.cpp:202
    Ui_Ut_r102961a(const Ui_Ut_r102961a& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), arg.GetEffectiveSelf(), UlamRef<EC>::ATOMIC) { } //gcnl:UlamTypeAtom.cpp:210
    Ui_Ut_r102961a& operator=(const Ui_Ut_r102961a& rhs); //declare away //gcnl:UlamTypeAtom.cpp:219
  };
} //MFM
#endif /*Ud_Ui_Ut_r102961a */

#ifndef Ud_Ui_Ut_102961a
#define Ud_Ui_Ut_102961a
namespace MFM{

  template<class EC>
  struct Ui_Ut_102961a : public AtomBitStorage<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef AtomRefBitStorage<EC> ABS; //gcnl:UlamTypeAtom.cpp:316

    Ui_Ut_102961a() : AtomBitStorage<EC>(Element_Empty<EC>::THE_INSTANCE.GetDefaultAtom()) { } //gcnl:UlamTypeAtom.cpp:323
    Ui_Ut_102961a(const T& targ) : AtomBitStorage<EC>(targ) { } //gcnl:UlamTypeAtom.cpp:332
    Ui_Ut_102961a(const AtomRefBitStorage<EC>& d) : AtomBitStorage<EC>(d.ReadAtom()) { } //gcnl:UlamTypeAtom.cpp:341
    Ui_Ut_102961a(const Ui_Ut_102961a& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeAtom.cpp:350
    Ui_Ut_102961a(const Ui_Ut_r102961a<EC>& d) : AtomBitStorage<EC>(d.read()) { } //gcnl:UlamTypeAtom.cpp:359
    const T read() const { return ABS::ReadAtom(); } //gcnl:UlamTypeAtom.cpp:396
    void write(const T& v) { ABS::WriteAtom(v); } //gcnl:UlamTypeAtom.cpp:425
    void write(const AtomRefBitStorage<EC>& v) { ABS::WriteAtom(v.ReadAtom()); } //gcnl:UlamTypeAtom.cpp:433
    virtual const char * GetUlamTypeMangledName() const { return "Ut_102961a"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_102961a */

#ifndef Ud_Ui_Uq_r1010919AtomUtils10
#define Ud_Ui_Uq_r1010919AtomUtils10
namespace MFM{

  template<class EC> class Uq_1010919AtomUtils10;  //forward //gcnl:UlamTypeClassQuark.cpp:219

  template<class EC>
  struct Ui_Uq_r1010919AtomUtils10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:228
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:240

    typedef Uq_1010919AtomUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:247
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:358
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:394
    Ui_Uq_r1010919AtomUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:266
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:278
    Ui_Uq_r1010919AtomUtils10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:297
    Ui_Uq_r1010919AtomUtils10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:305
    Ui_Uq_r1010919AtomUtils10(const Ui_Uq_r1010919AtomUtils10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:314
    Ui_Uq_r1010919AtomUtils10& operator=(const Ui_Uq_r1010919AtomUtils10& rhs); //declare away //gcnl:UlamTypeClassQuark.cpp:323
  };
} //MFM
#endif /*Ud_Ui_Uq_r1010919AtomUtils10 */

#ifndef Ud_Ui_Uq_1010919AtomUtils10
#define Ud_Ui_Uq_1010919AtomUtils10
namespace MFM{

  template<class EC> class Uq_1010919AtomUtils10; //forward //gcnl:UlamTypeClassQuark.cpp:455

  template<class EC>
  struct Ui_Uq_1010919AtomUtils10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:480
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:488
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:491

    typedef Uq_1010919AtomUtils10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:510

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:604
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:661
    Ui_Uq_1010919AtomUtils10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:527
    Ui_Uq_1010919AtomUtils10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:553
    Ui_Uq_1010919AtomUtils10(const Ui_Uq_1010919AtomUtils10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:562
    Ui_Uq_1010919AtomUtils10(const Ui_Uq_r1010919AtomUtils10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:570
    virtual const char * GetUlamTypeMangledName() const { return "Uq_1010919AtomUtils10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Uq_1010919AtomUtils10 */

#ifndef Ud_Ui_Uq_r10105MDist10
#define Ud_Ui_Uq_r10105MDist10
namespace MFM{

  template<class EC> class Uq_10105MDist10;  //forward //gcnl:UlamTypeClassQuark.cpp:219

  template<class EC>
  struct Ui_Uq_r10105MDist10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:228
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:240

    typedef Uq_10105MDist10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:247
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:358
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:394
    Ui_Uq_r10105MDist10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:266
    Ui_Uq_r10105MDist10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 0u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:278
    Ui_Uq_r10105MDist10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 0u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r10105MDist10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 0u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:297
    Ui_Uq_r10105MDist10(const UlamRef<EC>& r) : UlamRef<EC>(r, 0u) { } //gcnl:UlamTypeClassQuark.cpp:305
    Ui_Uq_r10105MDist10(const Ui_Uq_r10105MDist10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:314
    Ui_Uq_r10105MDist10& operator=(const Ui_Uq_r10105MDist10& rhs); //declare away //gcnl:UlamTypeClassQuark.cpp:323
  };
} //MFM
#endif /*Ud_Ui_Uq_r10105MDist10 */

#ifndef Ud_Ui_Uq_10105MDist10
#define Ud_Ui_Uq_10105MDist10
namespace MFM{

  template<class EC> class Uq_10105MDist10; //forward //gcnl:UlamTypeClassQuark.cpp:455

  template<class EC>
  struct Ui_Uq_10105MDist10 : public BitVectorBitStorage<EC, BitVector<0> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 0}; //gcnl:UlamTypeClassQuark.cpp:480
    typedef BitVector<0> BV; //gcnl:UlamTypeClassQuark.cpp:488
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:491

    typedef Uq_10105MDist10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:510

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:604
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:661
    Ui_Uq_10105MDist10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:527
    Ui_Uq_10105MDist10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:553
    Ui_Uq_10105MDist10(const Ui_Uq_10105MDist10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:562
    Ui_Uq_10105MDist10(const Ui_Uq_r10105MDist10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:570
    virtual const char * GetUlamTypeMangledName() const { return "Uq_10105MDist10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Uq_10105MDist10 */

#ifndef Ud_Ui_Uq_r102323C2D10
#define Ud_Ui_Uq_r102323C2D10
namespace MFM{

  template<class EC> class Uq_102323C2D10;  //forward //gcnl:UlamTypeClassQuark.cpp:219

  template<class EC>
  struct Ui_Uq_r102323C2D10 : public UlamRef<EC> //gcnl:UlamTypeClassQuark.cpp:228
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 32}; //gcnl:UlamTypeClassQuark.cpp:240

    typedef Uq_102323C2D10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:247
    const u32 read() const { return UlamRef<EC>::Read(); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:358
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire quark */ } //gcnl:UlamTypeClassQuark.cpp:394
    Ui_Uq_r102323C2D10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, effself, UlamRef<EC>::CLASSIC, uc) { } //gcnl:UlamTypeClassQuark.cpp:266
    Ui_Uq_r102323C2D10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself) : UlamRef<EC>(arg, idx, 32u, effself, UlamRef<EC>::CLASSIC) { } //gcnl:UlamTypeClassQuark.cpp:278
    Ui_Uq_r102323C2D10(BitStorage<EC>& targ, u32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 32u, targ, effself, usage, uc) { } //gcnl:UlamTypeClassQuark.cpp:288
    Ui_Uq_r102323C2D10(const UlamRef<EC>& arg, s32 idx, const UlamClass<EC>* effself, const typename UlamRef<EC>::UsageType usage) : UlamRef<EC>(arg, idx, 32u, effself, usage) { } //gcnl:UlamTypeClassQuark.cpp:297
    Ui_Uq_r102323C2D10(const UlamRef<EC>& r) : UlamRef<EC>(r, 32u) { } //gcnl:UlamTypeClassQuark.cpp:305
    Ui_Uq_r102323C2D10(const Ui_Uq_r102323C2D10<EC>& r) : UlamRef<EC>(r, r.GetLen()) { } //gcnl:UlamTypeClassQuark.cpp:314
    Ui_Uq_r102323C2D10& operator=(const Ui_Uq_r102323C2D10& rhs); //declare away //gcnl:UlamTypeClassQuark.cpp:323
  };
} //MFM
#endif /*Ud_Ui_Uq_r102323C2D10 */

#ifndef Ud_Ui_Uq_102323C2D10
#define Ud_Ui_Uq_102323C2D10
namespace MFM{

  template<class EC> class Uq_102323C2D10; //forward //gcnl:UlamTypeClassQuark.cpp:455

  template<class EC>
  struct Ui_Uq_102323C2D10 : public BitVectorBitStorage<EC, BitVector<32> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    enum { QUARK_SIZE = 32}; //gcnl:UlamTypeClassQuark.cpp:480
    typedef BitVector<32> BV; //gcnl:UlamTypeClassQuark.cpp:488
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypeClassQuark.cpp:491

    typedef Uq_102323C2D10<EC> Us; //gcnl:UlamTypeClassQuark.cpp:510

    const u32 read() const { return BVS::Read(0u, QUARK_SIZE); } //gcnl:UlamTypeClassQuark.cpp:604
    void write(const u32 v) { BVS::Write(0u, QUARK_SIZE, v); } //gcnl:UlamTypeClassQuark.cpp:661
    Ui_Uq_102323C2D10() { write(Us::THE_INSTANCE.getDefaultQuark()); } //gcnl:UlamTypeClassQuark.cpp:527
    Ui_Uq_102323C2D10(const u32 d) { write(d); } //gcnl:UlamTypeClassQuark.cpp:553
    Ui_Uq_102323C2D10(const Ui_Uq_102323C2D10<EC> & arg) { write(arg.read()); } //gcnl:UlamTypeClassQuark.cpp:562
    Ui_Uq_102323C2D10(const Ui_Uq_r102323C2D10<EC>& d) { write(d.read()); } //gcnl:UlamTypeClassQuark.cpp:570
    virtual const char * GetUlamTypeMangledName() const { return "Uq_102323C2D10"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Uq_102323C2D10 */

