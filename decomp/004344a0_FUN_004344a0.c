// FUN_004344a0 @ 4344a0 size=88

undefined4 __fastcall FUN_004344a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(short *)(*(int *)((int)param_1 + 0x16) + 0x25a) = (short)param_1[3];
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x32) + 0x2e);
  iVar4 = (**(code **)(*param_1 + 0x18))();
  iVar2 = *(int *)((int)param_1 + 0xe);
  iVar3 = *(int *)((int)param_1 + 0x12);
  iVar5 = (**(code **)(*param_1 + 0x18))();
  FUN_004012e0(iVar2,iVar5 / 2 + *(int *)((int)param_1 + 0x12),iVar1 + iVar2,iVar4 / 2 + iVar3);
  return 0;
}


