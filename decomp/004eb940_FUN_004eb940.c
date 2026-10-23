// FUN_004eb940 @ 4eb940 size=199

void __thiscall FUN_004eb940(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_2 = param_2 * 0xc;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x298) + param_2);
  *puVar3 = *param_3;
  puVar3[1] = param_3[1];
  puVar3[2] = param_3[2];
  iVar2 = *(int *)(param_1 + 0x254);
  if ((((iVar2 != 8) && (iVar2 != 9)) &&
      (iVar1 = DAT_00ab27b4 + *(int *)(*(int *)(param_1 + 0x298) + param_2) * 0x4b2,
      *(int *)(iVar1 + 0x254) == 8)) && (*(int *)(iVar1 + 0x288) != 0x1c5)) {
    *(undefined1 *)(param_1 + 0x470) = 1;
  }
  if ((iVar2 == 8) &&
     (*(int *)(DAT_00ab27b4 + 0x254 + *(int *)(*(int *)(param_1 + 0x298) + param_2) * 0x4b2) < 8)) {
    *(undefined1 *)(param_1 + 0x471) = 1;
  }
  if (param_3[1] == 1) {
    *(undefined1 *)(param_1 + 0x46f) = 1;
  }
  if (param_3[1] == 2) {
    *(undefined1 *)(param_1 + 0x46f) = 1;
  }
  return;
}


