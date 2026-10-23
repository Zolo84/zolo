// FUN_00676f60 @ 676f60 size=125

undefined4 * __thiscall FUN_00676f60(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_006a96f0(*(undefined4 *)(param_2 + 10));
  param_1[0xf] = param_2;
  *param_1 = &PTR_FUN_007f33dc;
  iVar2 = 0;
  if (0 < DAT_0087769c) {
    puVar1 = param_1 + 0x12a;
    do {
      puVar1[-0x8c] = 0;
      *puVar1 = 0;
      puVar1[-0x118] = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_0087769c);
  }
  iVar2 = 0;
  if (0 < DAT_008776b0) {
    puVar1 = param_1 + 0x1b6;
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < DAT_008776b0);
  }
  *(undefined1 *)(param_1 + 0x242) = 0;
  *(undefined1 *)((int)param_1 + 0x909) = 0;
  return param_1;
}


