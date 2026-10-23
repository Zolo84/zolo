// FUN_005f1b40 @ 5f1b40 size=105

undefined4 __thiscall FUN_005f1b40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = FUN_004355a0(param_2,param_3);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x40))(param_2,param_3);
    return uVar3;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xd0) + 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))(param_2,param_3);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  uVar3 = (**(code **)(*(int *)*puVar1 + 0x48))(param_2,param_3);
  return uVar3;
}


