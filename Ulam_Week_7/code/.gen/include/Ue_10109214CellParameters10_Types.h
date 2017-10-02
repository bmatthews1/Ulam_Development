/**                                      -*- mode:C++ -*- */

//#include "itype.h"
//#include "BitVector.h"
//#include "BitField.h"

#include "UlamDefs.h"

#ifndef Ud_Ui_Ut_r10181i
#define Ud_Ui_Ut_r10181i
namespace MFM{
  template<class EC>
  struct Ui_Ut_r10181i : public UlamRef<EC>
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    const u32 read() const { return UlamRef<EC>::Read(); /* entire */ } //gcnl:UlamTypePrimitive.cpp:323
    void write(const u32& targ) { UlamRef<EC>::Write(targ); /* entire */ } //gcnl:UlamTypePrimitive.cpp:355
    Ui_Ut_r10181i(BitStorage<EC>& targ, u32 idx, const UlamContext<EC>& uc) : UlamRef<EC>(idx, 8u, targ, NULL, UlamRef<EC>::PRIMITIVE, uc) { } //gcnl:UlamTypePrimitive.cpp:241
    Ui_Ut_r10181i(const UlamRef<EC>& arg, s32 idx) : UlamRef<EC>(arg, idx, 8u, NULL, UlamRef<EC>::PRIMITIVE) { } //gcnl:UlamTypePrimitive.cpp:253
    Ui_Ut_r10181i(const Ui_Ut_r10181i<EC>& arg) : UlamRef<EC>(arg, 0, arg.GetLen(), NULL, UlamRef<EC>::PRIMITIVE) { MFM_API_ASSERT_ARG(arg.GetLen() == 8); } //gcnl:UlamTypePrimitive.cpp:268
    Ui_Ut_r10181i& operator=(const Ui_Ut_r10181i& rhs); //declare away //gcnl:UlamTypePrimitive.cpp:277
  };
} //MFM
#endif /*Ud_Ui_Ut_r10181i */

#ifndef Ud_Ui_Ut_10181i
#define Ud_Ui_Ut_10181i
namespace MFM{

  template<class EC>
  struct Ui_Ut_10181i : public BitVectorBitStorage<EC, BitVector<8u> >
  {
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    typedef BitVector<8> BV; //gcnl:UlamTypePrimitive.cpp:476
    typedef BitVectorBitStorage<EC, BV> BVS; //gcnl:UlamTypePrimitive.cpp:479

    const u32 read() const { return BVS::Read(0u, 8u); } //gcnl:UlamTypePrimitive.cpp:568
    void write(const u32& v) { BVS::Write(0u, 8u, v); } //gcnl:UlamTypePrimitive.cpp:605
    Ui_Ut_10181i() { } //gcnl:UlamTypePrimitive.cpp:492
    Ui_Ut_10181i(const u32 d) { write(d); } //gcnl:UlamTypePrimitive.cpp:500
    Ui_Ut_10181i(const Ui_Ut_10181i& other) { this->write(other.read()); } //gcnl:UlamTypePrimitive.cpp:523
    Ui_Ut_10181i(const Ui_Ut_r10181i<EC>& d) { this->write(d.read()); } //gcnl:UlamTypePrimitive.cpp:532
    virtual const char * GetUlamTypeMangledName() const { return "Ut_10181i"; } //gcnl:UlamType.cpp:890
  };
} //MFM
#endif /*Ud_Ui_Ut_10181i */

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

#ifndef Ud_Ui_Up_102321u
#define Ud_Ui_Up_102321u
namespace MFM{

  template<class EC>
  struct Ui_Up_102321u
  {
    // immediate model parameter definition:
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T* m_stgPtr;  //ptr to storage here! //gcnl:UlamTypePrimitive.cpp:675
    Ui_Up_102321u() : m_stgPtr(NULL) { } //gcnl:UlamTypePrimitive.cpp:680
    void init(T& realStg) { m_stgPtr = &realStg; } //gcnl:UlamTypePrimitive.cpp:683
    const u32 read(const UlamContext<EC>& uc) const { MFM_API_ASSERT_NONNULL(m_stgPtr); AtomRefBitStorage<EC> mpfoo(*m_stgPtr); return UlamRef<EC>(BPA - 32u, 32u, mpfoo, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); } //gcnl:UlamTypePrimitive.cpp:696
  };
} //MFM
#endif /*Ud_Ui_Up_102321u */

#ifndef Ud_Ui_Up_102321u
#define Ud_Ui_Up_102321u
namespace MFM{

  template<class EC>
  struct Ui_Up_102321u
  {
    // immediate model parameter definition:
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T* m_stgPtr;  //ptr to storage here! //gcnl:UlamTypePrimitive.cpp:675
    Ui_Up_102321u() : m_stgPtr(NULL) { } //gcnl:UlamTypePrimitive.cpp:680
    void init(T& realStg) { m_stgPtr = &realStg; } //gcnl:UlamTypePrimitive.cpp:683
    const u32 read(const UlamContext<EC>& uc) const { MFM_API_ASSERT_NONNULL(m_stgPtr); AtomRefBitStorage<EC> mpfoo(*m_stgPtr); return UlamRef<EC>(BPA - 32u, 32u, mpfoo, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); } //gcnl:UlamTypePrimitive.cpp:696
  };
} //MFM
#endif /*Ud_Ui_Up_102321u */

#ifndef Ud_Ui_Up_102321u
#define Ud_Ui_Up_102321u
namespace MFM{

  template<class EC>
  struct Ui_Up_102321u
  {
    // immediate model parameter definition:
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T* m_stgPtr;  //ptr to storage here! //gcnl:UlamTypePrimitive.cpp:675
    Ui_Up_102321u() : m_stgPtr(NULL) { } //gcnl:UlamTypePrimitive.cpp:680
    void init(T& realStg) { m_stgPtr = &realStg; } //gcnl:UlamTypePrimitive.cpp:683
    const u32 read(const UlamContext<EC>& uc) const { MFM_API_ASSERT_NONNULL(m_stgPtr); AtomRefBitStorage<EC> mpfoo(*m_stgPtr); return UlamRef<EC>(BPA - 32u, 32u, mpfoo, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); } //gcnl:UlamTypePrimitive.cpp:696
  };
} //MFM
#endif /*Ud_Ui_Up_102321u */

#ifndef Ud_Ui_Up_102321u
#define Ud_Ui_Up_102321u
namespace MFM{

  template<class EC>
  struct Ui_Up_102321u
  {
    // immediate model parameter definition:
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T* m_stgPtr;  //ptr to storage here! //gcnl:UlamTypePrimitive.cpp:675
    Ui_Up_102321u() : m_stgPtr(NULL) { } //gcnl:UlamTypePrimitive.cpp:680
    void init(T& realStg) { m_stgPtr = &realStg; } //gcnl:UlamTypePrimitive.cpp:683
    const u32 read(const UlamContext<EC>& uc) const { MFM_API_ASSERT_NONNULL(m_stgPtr); AtomRefBitStorage<EC> mpfoo(*m_stgPtr); return UlamRef<EC>(BPA - 32u, 32u, mpfoo, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); } //gcnl:UlamTypePrimitive.cpp:696
  };
} //MFM
#endif /*Ud_Ui_Up_102321u */

#ifndef Ud_Ui_Up_102321u
#define Ud_Ui_Up_102321u
namespace MFM{

  template<class EC>
  struct Ui_Up_102321u
  {
    // immediate model parameter definition:
    typedef typename EC::ATOM_CONFIG AC;
    typedef typename AC::ATOM_TYPE T;
    enum { BPA = AC::BITS_PER_ATOM };

    T* m_stgPtr;  //ptr to storage here! //gcnl:UlamTypePrimitive.cpp:675
    Ui_Up_102321u() : m_stgPtr(NULL) { } //gcnl:UlamTypePrimitive.cpp:680
    void init(T& realStg) { m_stgPtr = &realStg; } //gcnl:UlamTypePrimitive.cpp:683
    const u32 read(const UlamContext<EC>& uc) const { MFM_API_ASSERT_NONNULL(m_stgPtr); AtomRefBitStorage<EC> mpfoo(*m_stgPtr); return UlamRef<EC>(BPA - 32u, 32u, mpfoo, NULL, UlamRef<EC>::PRIMITIVE, uc).Read(); } //gcnl:UlamTypePrimitive.cpp:696
  };
} //MFM
#endif /*Ud_Ui_Up_102321u */

