// FUN_007b53f8 @ 7b53f8 size=647

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b53f8(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  FUN_007aae71(0xc);
  DAT_00880100 = 0xffffffff;
  DAT_008800f0 = 0xffffffff;
  DAT_00dc53e0 = 0;
  _Str1 = (char *)FUN_007b8742(&DAT_008017a0);
  if (_Str1 == (char *)0x0) {
    FUN_007aaed2(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00dc53e8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_00880058 = DAT_00dc53e8 * 0x3c;
    DAT_00dc53e0 = 1;
    if (DAT_00dc542e != 0) {
      DAT_00880058 = DAT_00880058 + DAT_00dc543c * 0x3c;
    }
    if ((DAT_00dc5482 == 0) || (DAT_00dc5490 == 0)) {
      DAT_0088005c = 0;
      _DAT_00880060 = 0;
    }
    else {
      DAT_0088005c = 1;
      _DAT_00880060 = (DAT_00dc5490 - DAT_00dc543c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_00dc5228,0x220,(LPCWSTR)&DAT_00dc53ec,-1,PTR_DAT_008800e4,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_008800e4 = 0;
    }
    else {
      PTR_DAT_008800e4[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_00dc5228,0x220,(LPCWSTR)&DAT_00dc5440,-1,PTR_DAT_008800e8,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_008800e8[0x3f] = 0;
      return;
    }
LAB_007b5669:
    *PTR_DAT_008800e8 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_00dc5494 == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_00dc5494), iVar4 != 0)))) {
      FUN_007a77fa(DAT_00dc5494);
      sVar5 = _strlen(_Str1);
      DAT_00dc5494 = _malloc(sVar5 + 1);
      if (DAT_00dc5494 != (char *)0x0) {
        FUN_007a74f0(DAT_00dc5494,_Str1);
        FUN_007aaed2(0xc);
        _strncpy(PTR_DAT_008800e4,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_008800e4[3] = 0;
        cVar1 = *_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_007a7ab1(_Source);
        DAT_00880058 = iVar4 * 0xe10;
        for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_007a7ab1(_Source);
          DAT_00880058 = DAT_00880058 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_007a7ab1(_Source);
            DAT_00880058 = DAT_00880058 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_00880058 = -DAT_00880058;
        }
        DAT_0088005c = (int)*_Source;
        if (DAT_0088005c != 0) {
          _strncpy(PTR_DAT_008800e8,_Source,3);
          PTR_DAT_008800e8[3] = 0;
          return;
        }
        goto LAB_007b5669;
      }
    }
    FUN_007aaed2(0xc);
  }
  return;
}


