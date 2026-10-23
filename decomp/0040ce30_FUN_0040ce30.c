// FUN_0040ce30 @ 40ce30 size=275

void FUN_0040ce30(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  void *local_110 [64];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b97ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_110[0] = operator_new(0x7e);
  iVar5 = 0;
  local_4 = 0;
  if (local_110[0] == (void *)0x0) {
    DAT_0088eb24 = (int *)0x0;
  }
  else {
    DAT_0088eb24 = (int *)FUN_00414c80(s_gfx_map_T_MAP_ARROWS_bmp_0082ee94);
  }
  local_4 = 0xffffffff;
  (**(code **)(*DAT_0088eb24 + 0x34))(8);
  uVar1 = FUN_00413d60(s_arrow_bmp_0082ee88);
  FUN_00415f20(uVar1);
  ppuVar6 = &PTR_DAT_0082ee3c;
  do {
    FUN_007a630a(local_110,s__s_dark_bmp_0082ee7c,*ppuVar6);
    iVar2 = FUN_00413d60(local_110);
    FUN_007a630a(local_110,s__s_light_bmp_0082ee6c,*ppuVar6);
    iVar3 = FUN_00413d60(local_110);
    iVar7 = 0x100;
    puVar4 = (undefined4 *)(iVar3 + 0x504);
    do {
      *(short *)((int)&DAT_0088db00 + iVar5) = (short)*(undefined4 *)((iVar2 - iVar3) + (int)puVar4)
      ;
      *(short *)((int)&DAT_0088e300 + iVar5) = (short)*puVar4;
      iVar5 = iVar5 + 2;
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar7 != 0);
    ppuVar6 = ppuVar6 + 1;
  } while ((int)ppuVar6 < 0x82ee4c);
  ExceptionList = pvStack_10;
  return;
}


