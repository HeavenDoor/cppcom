

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu May 29 16:08:03 2014
 */
/* Compiler settings for CppCom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CppCom_i_h__
#define __CppCom_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComInterface_FWD_DEFINED__
#define __IComInterface_FWD_DEFINED__
typedef interface IComInterface IComInterface;
#endif 	/* __IComInterface_FWD_DEFINED__ */


#ifndef __ComInterface_FWD_DEFINED__
#define __ComInterface_FWD_DEFINED__

#ifdef __cplusplus
typedef class ComInterface ComInterface;
#else
typedef struct ComInterface ComInterface;
#endif /* __cplusplus */

#endif 	/* __ComInterface_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IComInterface_INTERFACE_DEFINED__
#define __IComInterface_INTERFACE_DEFINED__

/* interface IComInterface */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IComInterface;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BCB014D-E7BE-49BD-B70A-8B1E53FABFA7")
    IComInterface : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getdataEx( 
            /* [in] */ LONG k,
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IComInterfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComInterface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComInterface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComInterface * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComInterface * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComInterface * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComInterface * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComInterface * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Test )( 
            IComInterface * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getdataEx )( 
            IComInterface * This,
            /* [in] */ LONG k,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IComInterfaceVtbl;

    interface IComInterface
    {
        CONST_VTBL struct IComInterfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComInterface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComInterface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComInterface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComInterface_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComInterface_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComInterface_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComInterface_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComInterface_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#define IComInterface_getdataEx(This,k,pVal)	\
    ( (This)->lpVtbl -> getdataEx(This,k,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComInterface_INTERFACE_DEFINED__ */



#ifndef __CppComLib_LIBRARY_DEFINED__
#define __CppComLib_LIBRARY_DEFINED__

/* library CppComLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_CppComLib;

EXTERN_C const CLSID CLSID_ComInterface;

#ifdef __cplusplus

class DECLSPEC_UUID("5625EAF0-51EE-4351-8DB6-1A049A90BFB3")
ComInterface;
#endif
#endif /* __CppComLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


