// FUN_00747410 @ 747410 size=114

void FUN_00747410(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  *puVar1 = 0x18;
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
  FUN_007579c0(puVar1);
  FUN_00796cd8(puVar1);
  return;
}


