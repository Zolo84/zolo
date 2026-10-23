// FUN_00781b40 @ 781b40 size=76

undefined4 * __fastcall FUN_00781b40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0x158;
  puVar2 = param_1 + 1;
  *param_1 = &PTR_LAB_007e4068;
  puVar4 = param_1 + 2;
  do {
    *puVar2 = &PTR_FUN_007e6cdc;
    puVar2 = puVar2 + 0x57;
    iVar3 = iVar3 + -1;
    puVar5 = puVar4;
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 0x57;
  } while (iVar3 != 0);
  param_1[0x74e9] = 0;
  *param_1 = &PTR_FUN_007e6cd0;
  return param_1;
}


