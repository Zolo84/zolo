// FUN_006cc9a0 @ 6cc9a0 size=187

undefined4 __thiscall FUN_006cc9a0(int param_1,int *param_2)

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
  cVar2 = FUN_0042e900();
  if ((((cVar2 == '\0') && (cVar2 = FUN_0042e910(), cVar2 != '\0')) &&
      (*(int *)(param_1 + 0x2e) != 2)) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x5e))) {
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
  (**(code **)**(undefined4 **)(param_1 + 0x5a))(param_2);
  uVar4 = (**(code **)(*(int *)(param_1 + -0x12) + 0x30))();
  **(undefined4 **)(param_1 + 0x90) = uVar4;
  return 0;
}


