

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for Audtest.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_audtest,0x018FC421,0x7EE6,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IAudtes,0x018FC422,0x7EE6,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CAudtestDoc,0x018FC420,0x7EE6,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgSweep,0xA21C48A2,0x7EEB,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgSweep,0xA21C48A3,0x7EEB,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgSine,0xF83EBB20,0x7EEE,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgSine,0xF83EBB21,0x7EEE,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgGenerator,0xF83EBB22,0x7EEE,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgGenerator,0xF83EBB23,0x7EEE,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPulse,0x26CA4F80,0x8486,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPulse,0x26CA4F81,0x8486,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgMls,0x26CA4F82,0x8486,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgMls,0x26CA4F83,0x8486,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDsGeneral,0x1711C9C0,0x8615,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDsGeneral,0x1711C9C1,0x8615,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDataset,0x1711C9C2,0x8615,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDataset,0x1711C9C3,0x8615,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgChart,0x74689AE0,0x8F93,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgChart,0x74689AE1,0x8F93,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDataLines,0x74689AE2,0x8F93,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDataLines,0x74689AE3,0x8F93,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgGrid,0xBD25DFE0,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgGrid,0xBD25DFE1,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgChGen,0xBD25DFE2,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgChGen,0xBD25DFE3,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgChData,0xBD25DFE4,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgChData,0xBD25DFE5,0x8F98,0x11CE,0xBC,0x27,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IAddChartData,0x1EAA3880,0x9D11,0x11CE,0xBC,0x2D,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CAddChartData,0x1EAA3881,0x9D11,0x11CE,0xBC,0x2D,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfLimit,0x33F08180,0xA27B,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfLimit,0x33F08181,0xA27B,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfScale,0x43E4E880,0xA341,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfScale,0x43E4E881,0xA341,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfTruncate,0x72906560,0xA350,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfTruncate,0x72906561,0xA350,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfDelay,0x5E601C00,0xA393,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfDelay,0x5E601C01,0xA393,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfSmooth,0x5E601C02,0xA393,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfSmooth,0x5E601C03,0xA393,0x11CE,0xBC,0x2F,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDsDataset,0xA018E4C0,0xBAC6,0x11CE,0xB1,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDsDataset,0xA018E4C1,0xBAC6,0x11CE,0xB1,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNetList,0xEF83D5C0,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgNetList,0xEF83D5C1,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNetGeneral,0xEF83D5C2,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgNetGeneral,0xEF83D5C3,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNetDriver,0xEF83D5C4,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgNetDriver,0xEF83D5C5,0xBCFF,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNetwork,0x0B496760,0xBD01,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgNetwork,0x0B496761,0xBD01,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgRoomGeneral,0xD46A8480,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgRoomGeneral,0xD46A8481,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgRoomBoxes,0xD46A8482,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgRoomBoxes,0xD46A8483,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgRoomWall,0xD46A8484,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgRoomWall,0xD46A8485,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgRoom,0xD46A8486,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgRoom,0xD46A8487,0xBD10,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgLocations,0x09D96940,0xC10A,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgLocations,0x09D96941,0xC10A,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgGenGeneral,0x4AF654E0,0xC1FC,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgGenGeneral,0x4AF654E1,0xC1FC,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfIfft,0x8510D420,0xC283,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfIfft,0x8510D421,0xC283,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfFft,0xB5EBC940,0xC294,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfFft,0xB5EBC941,0xC294,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgRecord,0xAB427A00,0xC39F,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgRecord,0xAB427A01,0xC39F,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXcImpedance,0xA6726FE0,0xC556,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXcImpedance,0xA6726FE1,0xC556,0x11CE,0xB1,0xC8,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefTransform,0x37A70D20,0xC757,0x11CE,0xB1,0xC9,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefTransform,0x37A70D21,0xC757,0x11CE,0xB1,0xC9,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPlaySound,0x80FF7480,0xE9E9,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPlaySound,0x80FF7481,0xE9E9,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefNetwork,0xDC271960,0xEDB0,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefNetwork,0xDC271961,0xEDB0,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPassiveProp,0xF5FCE180,0xEE78,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPassiveProp,0xF5FCE181,0xEE78,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPerturb,0x25A108A0,0xF1DD,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPerturb,0x25A108A1,0xF1DD,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfCorrelate,0x62C3A720,0xF47A,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfCorrelate,0x62C3A721,0xF47A,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDriver,0xC7800800,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDriver,0xC7800801,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDrData,0xC7800802,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDrData,0xC7800803,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDrGeneral,0xC7800804,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDrGeneral,0xC7800805,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDrParms,0xC7800806,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgDrParms,0xC7800807,0xF5B7,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgSelectObject,0xDDE21BA0,0xF6CB,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgSelectObject,0xDDE21BA1,0xF6CB,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgSimpleBox,0xCA31E040,0xF996,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgSimpleBox,0xCA31E041,0xF996,0x11CE,0xB1,0xCB,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgEnGeneral,0x97906F80,0xDB7E,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgEnGeneral,0x97906F81,0xDB7E,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgEnParms,0x97906F82,0xDB7E,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgEnParms,0x97906F83,0xDB7E,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgEnclosure,0x1C2F3DC0,0xDB7F,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgEnclosure,0x1C2F3DC1,0xDB7F,0x11CD,0xB1,0xCC,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefChart,0xA418ED40,0x00A3,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefChart,0xA418ED41,0x00A3,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgGenUserDef,0x96916B20,0x029C,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgGenUserDef,0x96916B21,0x029C,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgGenWarble,0x96916B22,0x029C,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgGenWarble,0x96916B23,0x029C,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfInvert,0xF34C3880,0x0676,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfInvert,0xF34C3881,0x0676,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgMsrPassive,0x544800A0,0x09B1,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgMsrPassive,0x544800A1,0x09B1,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcSealed,0x785A3500,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcSealed,0x785A3501,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcBandAir,0x785A3502,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcBandAir,0x785A3503,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcBandChamber,0x785A3504,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcBandChamber,0x785A3505,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcVented,0x785A3506,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcVented,0x785A3507,0x0AE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgFilter,0xE4A434A0,0x0EE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgFilter,0xE4A434A1,0x0EE5,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefMeasure,0x51FCD7A0,0x1242,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefMeasure,0x51FCD7A1,0x1242,0x11CF,0xB1,0xCD,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgTree,0x48089AA1,0x2B82,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgTree,0x48089AA2,0x2B82,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfFilter,0x930EAE20,0x5B5E,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgXfFilter,0x930EAE21,0x5B5E,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgFilterLow,0xB2CCFBC0,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgFilterLow,0xB2CCFBC1,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IdlgFilterHigh,0xB2CCFBC2,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CdlgFilterHigh,0xB2CCFBC3,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IdlgFilterStop,0xB2CCFBC4,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CdlgFilterStop,0xB2CCFBC5,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgFilterPass,0xB2CCFBC6,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgFilterPass,0xB2CCFBC7,0x5B60,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgMsrDistort,0x11B046E0,0x666C,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgMsrDistort,0x11B046E1,0x666C,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefReference,0xA308C900,0x6D10,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefReference,0xA308C901,0x6D10,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalibrate,0x235663A0,0x7627,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalibrate,0x235663A1,0x7627,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcTuned,0xB4D31A40,0x78D3,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcTuned,0xB4D31A41,0x78D3,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalcPassive,0xB4D31A42,0x78D3,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgCalcPassive,0xB4D31A43,0x78D3,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefMarker,0xF0549AC0,0x7EC4,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_CDlgPrefMarker,0xF0549AC1,0x7EC4,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgOptXover,0x1B6B9BA0,0x895B,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGOPTXOVER,0x1B6B9BA1,0x895B,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCrossover,0x1B6B9BA2,0x895B,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGCROSSOVER,0x1B6B9BA3,0x895B,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgAddPassive,0x615486C0,0x8967,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGADDPASSIVE,0x615486C1,0x8967,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgZobel,0x5401F4E0,0x897F,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGZOBEL,0x5401F4E1,0x897F,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNotch,0x5401F4E2,0x897F,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGNOTCH,0x5401F4E3,0x897F,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgNetLayout,0xA9092EE0,0x8AEC,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGNETLAYOUT,0xA9092EE1,0x8AEC,0x11CF,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgDriverEstimate,0x2D835140,0xA4CF,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGDRIVERESTIMATE,0x2D835141,0xA4CF,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgXfSplice,0x86088380,0xA862,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGXFSPLICE,0x86088381,0xA862,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefImpedance,0x57BA63E0,0xAFDD,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGPREFIMPEDANCE,0x57BA63E1,0xAFDD,0x11CF,0xAA,0x03,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgPrefGeneral,0x013D3B80,0x3171,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGPREFGENERAL,0x013D3B81,0x3171,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalJig3,0xDA743AC0,0x338D,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGCALJIG3,0xDA743AC1,0x338D,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgWizLoop,0x1E22DC40,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGWIZLOOP,0x1E22DC41,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgWizLoopBegin,0x1E22DC42,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGWIZLPBEGIN,0x1E22DC43,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalWizLoopEnd,0x1E22DC44,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGCALWIZLOOPEND,0x1E22DC45,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(IID, DIID_IDlgCalLoopJig,0x1E22DC46,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_DLGCALLOOPJIG,0x1E22DC47,0x3519,0x11D0,0xAA,0x04,0x44,0x45,0x53,0x54,0x00,0x00);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



