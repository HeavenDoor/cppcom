// ComInterface.h : Declaration of the CComInterface

#pragma once
#include "resource.h"       // main symbols



#include "CppCom_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CComInterface

class ATL_NO_VTABLE CComInterface :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CComInterface, &CLSID_ComInterface>,
	public IDispatchImpl<IComInterface, &IID_IComInterface, &LIBID_CppComLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CComInterface()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_COMINTERFACE)


BEGIN_COM_MAP(CComInterface)
	COM_INTERFACE_ENTRY(IComInterface)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Test)(void);
	STDMETHOD(getdataEx)(LONG k,LONG* pVal);
};

OBJECT_ENTRY_AUTO(__uuidof(ComInterface), CComInterface)
