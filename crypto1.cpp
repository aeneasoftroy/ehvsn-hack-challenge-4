#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "unzip.h"
using namespace std;

int main(int argc, char *argv[])
{ HZIP hz;

  string _zx = "_OnExit.File";
  string _gd = ".Rdata";
  string _5t = ".Data.bss";
  string _spec = "CygminG-CRTbegin.c!";

  string _DefaultWindowHandler5 = _zx + _5t + _gd + _spec;

  int i=0;

  hz=OpenZip(("EHVSN_Challenge4.exe"), _DefaultWindowHandler5.c_str());
  ZIPENTRY ze; GetZipItem(hz,-1,&ze); int numitems=ze.index;
  for (int zi=0; zi<numitems; zi++)
  { GetZipItem(hz,zi,&ze);
    //UnzipItem(hz,zi,ze.name);
  }
  CloseZip(hz);

string _DefaultWindowHandler3;
    if ( 1 < argc ) _DefaultWindowHandler3.assign( argv[1] );
        //string _DefaultWindowHandler4 = "changer_files\\uberizer.bat " + _DefaultWindowHandler3;
        //system(_DefaultWindowHandler4.c_str());
        //system("del /f changer_files\\uberizer.bat");
return 0;
}

