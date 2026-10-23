// FUN_005862f0 @ 5862f0 size=119

undefined4 __thiscall FUN_005862f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  
  puVar3 = DAT_00d615e4;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)puVar3[2];
    uVar2 = *puVar3;
    cVar4 = FUN_00584e20(*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6));
  } while (((cVar4 != '\x01') || (cVar4 = FUN_00584e20(param_2), cVar4 != '\x01')) &&
          ((cVar4 = FUN_00584e20(*(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 6)), puVar3 = puVar1,
           cVar4 != '\x01' || (cVar4 = FUN_00584e20(param_2), cVar4 != '\x01'))));
  return uVar2;
}


