// FUN_007b3c8d @ 7b3c8d size=201

uint FUN_007b3c8d(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_00dc5218 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_0087cdd0[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_00dc5228,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_0087cfdc) {
          if ((int)param_3 < (int)DAT_0087cfdc) goto LAB_007b3d1f;
          iVar2 = MultiByteToWideChar(DAT_00dc5228,9,(LPCSTR)param_2,DAT_0087cfdc,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_0087cfdc;
          }
        }
        if ((DAT_0087cfdc <= param_3) && (param_2[1] != 0)) {
          return DAT_0087cfdc;
        }
      }
LAB_007b3d1f:
      puVar3 = (undefined4 *)FUN_007aadca();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}


