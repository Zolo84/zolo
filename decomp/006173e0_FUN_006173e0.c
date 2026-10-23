// FUN_006173e0 @ 6173e0 size=216

int __thiscall FUN_006173e0(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x86) + 0x12) + 4))(param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_2 + 8))();
    if (iVar2 == 0xe) {
      cVar1 = (**(code **)(*param_1 + 0x20))
                        (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
      if (cVar1 == '\0') {
        return 1;
      }
    }
    iVar2 = (**(code **)(**(int **)((int)param_1 + 0x82) + 4))(param_2);
    if (*(char *)(*(int *)((int)param_1 + 0x82) + 0x96) != '\0') {
      return 1;
    }
    if (iVar2 == 0) {
      if (*(int *)((int)param_1 + 0x8e) != 0) {
        (**(code **)(*(int *)(*(int *)((int)param_1 + 0x8e) + 0x12) + 4))(param_2);
      }
      iVar5 = *param_1;
      iVar3 = FUN_00581e60();
      puVar4 = (undefined4 *)FUN_00581e60(*(undefined4 *)(iVar3 + 4));
      cVar1 = (**(code **)(iVar5 + 0x20))(*puVar4);
      if (cVar1 != '\0') {
        iVar5 = (**(code **)(*param_2 + 8))();
        if ((iVar5 == 0xe) || (iVar5 == 0x11)) {
          iVar2 = 3;
        }
      }
    }
  }
  return iVar2;
}


