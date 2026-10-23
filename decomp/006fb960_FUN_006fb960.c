// FUN_006fb960 @ 6fb960 size=223

undefined4 __thiscall FUN_006fb960(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((iVar3 == 0xe) &&
     (cVar2 = FUN_006eda30(*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a)),
     cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x3e) = 1;
  }
  if (*(char *)(param_1 + 0x3e) == '\0') {
    return 0;
  }
  cVar2 = FUN_0042e980();
  if ((cVar2 == '\0') && (iVar3 = 0, 0 < *(int *)(param_1 + 0x5e))) {
    piVar5 = (int *)(param_1 + 0x66);
    do {
      piVar1 = (int *)*piVar5;
      if (*(char *)((int)piVar1 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar1 + 0x60))();
      *(undefined1 *)((int)piVar1 + 0x86) = 1;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x5e));
  }
  if ((*(char *)(param_1 + 0x8e) == '\0') && (iVar3 = 0, 0 < *(int *)(param_1 + 0x5e))) {
    piVar5 = (int *)(param_1 + 0x66);
    do {
      piVar1 = (int *)*piVar5;
      if (*(char *)((int)piVar1 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar1 + 0x60))();
      *(undefined1 *)((int)piVar1 + 0x86) = 1;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x5e));
  }
  uVar4 = (**(code **)**(undefined4 **)(param_1 + 0x5a))(param_2);
  return uVar4;
}


