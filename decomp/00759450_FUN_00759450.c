// FUN_00759450 @ 759450 size=327

void __fastcall FUN_00759450(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_007dffa8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007fa32c;
  param_1[2] = &PTR_LAB_007fa33c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa324;
  local_4 = 0;
  puVar3 = *(undefined4 **)((int)param_1 + 0x1a);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  puVar3 = (undefined4 *)param_1[0xb];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x3e));
  *(undefined ***)((int)param_1 + 0x42) = &PTR_LAB_007e5dd4;
  iVar4 = *(int *)((int)param_1 + 0x46);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  param_1[10] = &PTR_LAB_007fa354;
  iVar4 = param_1[0xb];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007fa384;
  iVar4 = *(int *)((int)param_1 + 0x1a);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  FUN_00428200();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


