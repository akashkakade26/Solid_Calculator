// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "CxCalculate.h"

CxCalculate* Ob_cal = NULL;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }


    Ob_cal = new CxCalculate();

    return TRUE;
}

extern "C" __declspec(dllexport) double Addition(double ix, double iy)
{

    double iresult;
    iresult = Ob_cal->Add(ix, iy);

    return iresult;
}

extern "C" __declspec(dllexport) double Subtraction(double ix, double iy)
{

    double iresult;
    iresult = Ob_cal->Subtract(ix, iy);

    return iresult;
}

extern "C" __declspec(dllexport) double Multiply(double ix, double iy)
{

    double iresult;
    iresult = Ob_cal->Multiply(ix, iy);

    return iresult;
}
extern "C" __declspec(dllexport) double Divide(double ix, double iy)
{

    double iresult;
    iresult = Ob_cal->Divide(ix, iy);

    return iresult;
}



