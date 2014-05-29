// ComInterface.cpp : Implementation of CComInterface

#include "stdafx.h"
#include "ComInterface.h"


// CComInterface



STDMETHODIMP CComInterface::Test(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: Add your implementation code here

	return S_OK;
}

STDMETHODIMP CComInterface::getdataEx(LONG k,LONG* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pVal = k + 22;

	return S_OK;
}