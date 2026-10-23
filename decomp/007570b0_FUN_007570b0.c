// FUN_007570b0 @ 7570b0 size=106

void FUN_007570b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _malloc(0x20);
  *puVar1 = 0x20;
  if (param_2 == 0) {
    puVar2 = &DAT_00d4c210;
  }
  else {
    puVar2 = (undefined4 *)(param_2 + 4);
  }
  puVar1[1] = *puVar2;
  puVar1[2] = puVar2[1];
  puVar1[3] = *(undefined4 *)(param_3 + 4);
  puVar1[4] = *(undefined4 *)(param_3 + 8);
  puVar1[5] = param_4;
  puVar1[6] = param_5;
  puVar1[7] = param_6;
  FUN_007579c0(puVar1);
  FUN_007a77fa(puVar1);
  return;
}


