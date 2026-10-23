// FUN_0066c210 @ 66c210 size=222

undefined4 * __thiscall FUN_0066c210(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_006ad0f0(param_2);
  puVar1 = param_1 + 0x10;
  iVar2 = 10000;
  do {
    *puVar1 = 0x3f800000;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = param_1 + 0x4e30;
  iVar2 = 10000;
  do {
    *puVar1 = 0x3f800000;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x9c51] = 0;
  param_1[0x9c52] = 0;
  param_1[0x9c53] = 0;
  *(undefined1 *)(param_1 + 0x9c54) = 0;
  param_1[0x9c50] = &PTR_FUN_007e7084;
  *(undefined4 *)((int)param_1 + 0x30d9e) = 0;
  *(undefined4 *)((int)param_1 + 0x30da2) = 0;
  *(undefined4 *)((int)param_1 + 0x30da6) = 0;
  *(undefined1 *)((int)param_1 + 0x30daa) = 0;
  *(undefined ***)((int)param_1 + 0x30d9a) = &PTR_LAB_007f0e94;
  param_1[0xc36c] = 0;
  param_1[0xc36d] = 0;
  param_1[0xc36e] = 0;
  *(undefined1 *)(param_1 + 0xc36f) = 0;
  param_1[0xc36b] = &PTR_LAB_007f0ec4;
  *(undefined4 *)((int)param_1 + 0x30dc2) = 0;
  *(undefined4 *)((int)param_1 + 0x30dc6) = 0;
  *(undefined4 *)((int)param_1 + 0x30dca) = 0;
  *(undefined1 *)((int)param_1 + 0x30dce) = 0;
  *(undefined ***)((int)param_1 + 0x30dbe) = &PTR_LAB_007f0ec4;
  *param_1 = &DAT_007f0c9c;
  param_1[0x9c55] = 0;
  *(undefined1 *)(param_1 + 0x9c56) = 1;
  return param_1;
}


