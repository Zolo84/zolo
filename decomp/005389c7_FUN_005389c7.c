// FUN_005389c7 @ 5389c7 size=96

void __fastcall FUN_005389c7(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_007e8d94;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007e8d8c;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007e8d78;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e8d74;
  if (*(int *)((int)param_1 + 0x148ba) != 0) {
    FUN_00796cd8(*(undefined4 *)((int)param_1 + 0x148ba));
  }
  FUN_00444340();
  return;
}


