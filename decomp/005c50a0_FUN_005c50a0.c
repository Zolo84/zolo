// FUN_005c50a0 @ 5c50a0 size=141

undefined1 * __thiscall FUN_005c50a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (0 < iVar1) {
    if (iVar1 < 3) {
      cVar2 = FUN_004355a0(param_2,param_3);
      if (cVar2 != '\0') {
        puVar3 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x3c))(param_2,param_3);
        if (puVar3 != (undefined1 *)0x0) {
          return puVar3;
        }
        return &DAT_0088ebf8;
      }
    }
    else if (iVar1 == 3) {
      cVar2 = (**(code **)(*(int *)(param_1 + 0x9c) + 0x20))(param_2,param_3);
      if (cVar2 != '\0') {
        puVar3 = (undefined1 *)(**(code **)(*(int *)(param_1 + 0x9c) + 0x48))(param_2,param_3);
        if (puVar3 != (undefined1 *)0x0) {
          return puVar3;
        }
        return &DAT_0088ebf8;
      }
    }
  }
  return (undefined1 *)0x0;
}


