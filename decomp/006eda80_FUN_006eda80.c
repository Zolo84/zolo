// FUN_006eda80 @ 6eda80 size=118

undefined4 __thiscall FUN_006eda80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == 0xe) {
    iVar2 = *(int *)(param_2[1] + 0x1a);
    iVar1 = *(int *)(param_2[1] + 0x16);
    if ((((*(int *)((int)param_1 + 0x12) <= iVar2) &&
         (iVar3 = (**(code **)(*param_1 + 0x18))(), iVar2 <= iVar3 + *(int *)((int)param_1 + 0x12)))
        && (*(int *)((int)param_1 + 0xe) <= iVar1)) &&
       (iVar2 = (**(code **)(*param_1 + 0x1c))(),
       iVar1 <= iVar2 + 0x14 + *(int *)((int)param_1 + 0xe))) {
      *(undefined1 *)((int)param_1 + 0x3e) = 1;
    }
  }
  if ((int *)param_1[0x14] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x14] + 4))(param_2);
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))(param_2);
  }
  return 0;
}


