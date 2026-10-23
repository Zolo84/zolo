// FUN_00750540 @ 750540 size=84

undefined4 __thiscall FUN_00750540(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0xe) {
    iVar2 = *(int *)(param_2[1] + 0x1a);
    iVar1 = *(int *)(param_2[1] + 0x16);
    if (*(int *)((int)param_1 + 0x12) <= iVar2) {
      iVar3 = (**(code **)(*param_1 + 0x18))();
      if ((iVar2 <= iVar3 + *(int *)((int)param_1 + 0x12)) &&
         (*(int *)((int)param_1 + 0xe) <= iVar1)) {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        if (iVar1 <= iVar2 + 0x14 + *(int *)((int)param_1 + 0xe)) {
          *(undefined1 *)((int)param_1 + 0x36) = 1;
        }
      }
    }
  }
  return 0;
}


