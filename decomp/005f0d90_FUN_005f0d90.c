// FUN_005f0d90 @ 5f0d90 size=259

undefined4 __thiscall FUN_005f0d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 200) + 0x20))(param_2,param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_0042b6c9(s_PRLI_NAME_IRO_0085d794);
    return uVar3;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0xcc) + 0x20))(param_2,param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_0042b6c9(s_PRLI_UNIT_IRO_0085d784);
    return uVar3;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x20))(param_2,param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_0042b6c9(s_PRLI_FACT_IRO_0085d774);
    return uVar3;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x20))(param_2,param_3);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(param_2,param_3);
    if (cVar2 != '\0') {
      uVar3 = FUN_0042b6c9(s_PRLI_RESO_IRO_0085d754);
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
  uVar3 = FUN_0042b6c9(s_PRLI_COMB_IRO_0085d764);
  return uVar3;
}


