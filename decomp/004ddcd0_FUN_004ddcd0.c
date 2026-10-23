// FUN_004ddcd0 @ 4ddcd0 size=428

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004ddcd0(undefined4 param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  int local_130;
  int local_12c;
  undefined1 local_114 [256];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007bfc0b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_007a630a(local_114,s__s_colorscales_csv_00847964,&DAT_00dc1970);
  FUN_00426120(local_114);
  local_c = 0;
  local_130 = 0x20;
  pdVar5 = (double *)(param_2 + 8);
  do {
    FUN_00426330(2);
    local_12c = 4;
    do {
      pdVar1 = pdVar5 + -1;
      FUN_00426470(pdVar1);
      FUN_00426470(pdVar5);
      pdVar2 = pdVar5 + 1;
      FUN_00426470(pdVar2);
      FUN_00426380(pdVar5 + 2);
      dVar3 = *pdVar5 * _DAT_007e7f78 + _DAT_007e3358;
      dVar4 = *pdVar2 * _DAT_007e7f78 + _DAT_007e3358;
      *pdVar1 = (*pdVar1 * _DAT_007e7f78 + _DAT_007e3358) * *pdVar1;
      *pdVar5 = dVar3 * *pdVar5;
      *pdVar2 = dVar4 * *pdVar2;
      *pdVar1 = *pdVar1 * _DAT_007e40a8;
      *pdVar5 = *pdVar5 * _DAT_007e40a8;
      *pdVar2 = *pdVar2 * _DAT_007e40a8;
      if (_DAT_007e7f20 < *pdVar1) {
        *(undefined4 *)pdVar1 = 0;
        *(undefined4 *)((int)pdVar5 + -4) = 0x406fe000;
      }
      if (_DAT_007e7f20 < *pdVar5) {
        *(undefined4 *)pdVar5 = 0;
        *(undefined4 *)((int)pdVar5 + 4) = 0x406fe000;
      }
      if (_DAT_007e7f20 < *pdVar2) {
        *(undefined4 *)pdVar2 = 0;
        *(undefined4 *)((int)pdVar5 + 0xc) = 0x406fe000;
      }
      pdVar5 = (double *)((int)pdVar5 + 0x1c);
      local_12c = local_12c + -1;
    } while (local_12c != 0);
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  local_c = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_14;
  return 1;
}


