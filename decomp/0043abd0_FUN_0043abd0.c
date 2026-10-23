// FUN_0043abd0 @ 43abd0 size=46

undefined4 * __fastcall FUN_0043abd0(undefined4 *param_1)

{
  FUN_00433660();
  *param_1 = &PTR_FUN_007e44a8;
  param_1[2] = &PTR_LAB_007e44a4;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e44a0;
  if (*(int *)((int)param_1 + 0x62) != 0) {
    *(undefined1 *)(*(int *)((int)param_1 + 0x62) + 0x252) = 1;
  }
  return param_1;
}


