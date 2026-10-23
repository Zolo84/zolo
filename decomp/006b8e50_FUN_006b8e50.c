// FUN_006b8e50 @ 6b8e50 size=143

void __fastcall FUN_006b8e50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_LAB_007f71bc;
  puVar4 = *(undefined4 **)((int)param_1 + 0x4a);
  while (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar4[2];
    FUN_00796cd8(*puVar4);
    FUN_00796cd8(puVar4);
    puVar4 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  param_1[0x16] = &PTR_LAB_007e378c;
  iVar3 = param_1[0x17];
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined ***)((int)param_1 + 0x46) = &PTR_LAB_007f7164;
  iVar3 = *(int *)((int)param_1 + 0x4a);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  return;
}


