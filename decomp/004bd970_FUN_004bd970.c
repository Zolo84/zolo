// FUN_004bd970 @ 4bd970 size=62

void __fastcall FUN_004bd970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  iVar1 = *(int *)(iVar1 + 4);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    iVar2 = FUN_0051c480();
    if ((*(int *)((int)param_1 + 0x46) == 0) ||
       (*(int *)(iVar2 + 0x22) < *(int *)(*(int *)((int)param_1 + 0x46) + 0x22))) {
      (**(code **)(*param_1 + 0x20))(iVar2);
    }
  }
  return;
}


