// FUN_00434440 @ 434440 size=91

undefined4 __fastcall FUN_00434440(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(short *)(*(int *)((int)param_1 + 0x16) + 0x25a) = (short)param_1[3];
  iVar3 = (**(code **)(*param_1 + 0x18))();
  iVar1 = *(int *)((int)param_1 + 0x12);
  iVar2 = *(int *)((int)param_1 + 0xe);
  iVar4 = (**(code **)(*param_1 + 0x1c))();
  iVar5 = (**(code **)(*param_1 + 0x18))();
  FUN_004012e0(iVar2,iVar5 / 2 + *(int *)((int)param_1 + 0x12),iVar4 + iVar2,iVar3 / 2 + iVar1);
  return 0;
}


