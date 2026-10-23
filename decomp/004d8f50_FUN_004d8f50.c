// FUN_004d8f50 @ 4d8f50 size=292

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d8f50(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int local_358;
  undefined1 local_214 [512];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007bfb0b;
  local_14 = ExceptionList;
  local_358 = 1;
  ExceptionList = &local_14;
  *(undefined1 *)(param_1 + 4) = 1;
  iVar3 = 0;
  puVar4 = &DAT_00aa10e8;
  do {
    iVar3 = iVar3 + 1;
    FUN_007a630a(local_214,s__s_lightmap_d_tbl_00847874,&DAT_00dc1970,iVar3);
    FUN_00426f50();
    local_c = 0;
    FUN_007a8a7e(_DAT_007e7f48 / (double)local_358);
    iVar1 = __ftol();
    iVar1 = iVar1 * 0x7500 + (iVar1 * 0x7500 >> 0x1f & 0x1fU);
    uVar5 = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 5) / (longlong)local_358) << 2;
    pvVar2 = operator_new(uVar5);
    puVar4[-2] = (uint)pvVar2;
    FUN_004271a0(pvVar2,uVar5);
    FUN_004271a0(puVar4,4);
    pvVar2 = operator_new(*puVar4);
    puVar4[-1] = (uint)pvVar2;
    FUN_004271a0(pvVar2,*puVar4);
    local_358 = local_358 * 2;
    local_c = 0xffffffff;
    FUN_00426f80();
    puVar4 = puVar4 + 3;
  } while ((int)puVar4 < 0xaa1118);
  ExceptionList = local_14;
  return;
}


