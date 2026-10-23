// FUN_0057b710 @ 57b710 size=117

byte __fastcall FUN_0057b710(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xbc4) == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xb74);
  puVar3 = puVar1;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = 0x50;
  *(undefined4 *)(param_1 + 0xb8c) = DAT_00857220;
  *(undefined4 *)(param_1 + 0xb90) = DAT_00857224;
  *(undefined4 *)(param_1 + 0xb94) = DAT_00857228;
  *(undefined4 *)(param_1 + 0xb98) = DAT_0085722c;
  iVar2 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x34))
                    (*(int **)(param_1 + 0xbc4),puVar1,0,&LAB_0057c8d0,param_1,0x90);
  return -(iVar2 != 0) & 2;
}


