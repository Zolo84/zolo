// FUN_006aed40 @ 6aed40 size=90

undefined4 * __fastcall FUN_006aed40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1e);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 2;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[3] = &PTR_LAB_007e3ac0;
    *puVar1 = &PTR_FUN_007e3a28;
    puVar1[3] = &PTR_LAB_007e39f8;
  }
  if (*(int *)(param_1 + -0x20) != 0) {
    FUN_006aebf0(puVar1,*(int *)(param_1 + -0x20));
  }
  return puVar1;
}


