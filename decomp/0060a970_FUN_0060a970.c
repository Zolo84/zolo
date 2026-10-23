// FUN_0060a970 @ 60a970 size=183

undefined4 __thiscall FUN_0060a970(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(param_2,param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_0042b6c9(s_PRLI_NAME_IRO_0085d794);
    return uVar3;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 200) + 0x20))(param_2,param_3);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(param_2,param_3);
    if (cVar2 != '\0') {
      uVar3 = FUN_0042b6c9(s_DCLI_STATUS_IRO_0085eab0);
      return uVar3;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc0) + 4);
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      cVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))(param_2,param_3);
      if (cVar2 != '\0') break;
      puVar1 = (undefined4 *)puVar1[2];
    }
    uVar3 = (**(code **)(*(int *)*puVar1 + 0x44))(param_2,param_3);
    return uVar3;
  }
  uVar3 = FUN_0042b6c9(s_DCLI_DATE_IRO_0085eac0);
  return uVar3;
}


