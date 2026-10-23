// FUN_0075d110 @ 75d110 size=68

void __fastcall FUN_0075d110(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uStack_10;
  
  uStack_10 = param_1;
  piVar4 = DAT_00d546bc;
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    puVar3 = (undefined4 *)*piVar4;
    puVar1 = (undefined4 *)(DAT_00d546b8 + 0x1c);
    (**(code **)(DAT_00d546b8 + 0x28))(&uStack_10,puVar3);
    (*(code *)*puVar1)();
    uStack_10 = extraout_ECX;
    piVar4 = piVar2;
    if (puVar3 != (undefined4 *)0x0) {
      uStack_10 = 1;
      (**(code **)*puVar3)();
      uStack_10 = extraout_ECX_00;
    }
  }
  return;
}


