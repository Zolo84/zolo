// FUN_007b048b @ 7b048b size=86

void FUN_007b048b(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_0087f620 == param_1) {
    PTR_LOOP_0087f620 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_0087d600) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00dc5b48,0,param_1);
    return;
  }
  DAT_0087d610 = 0xffffffff;
  return;
}


