// FUN_006482d0 @ 6482d0 size=60

undefined4 * __fastcall FUN_006482d0(undefined4 *param_1)

{
  FUN_00434930(200,200,0,0);
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *param_1 = &PTR_FUN_007f0438;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f0424;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f0420;
  *(undefined ***)((int)param_1 + 0x1e) = &PTR_LAB_007f041c;
  return param_1;
}


