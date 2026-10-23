// FUN_004341c0 @ 4341c0 size=145

undefined4 __fastcall FUN_004341c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)((int)param_1 + 0x2e) == '\0') {
    FUN_004133fd(param_1 + 0xd,*(undefined4 *)((int)param_1 + 0xe),
                 *(undefined4 *)((int)param_1 + 0x12),*(undefined4 *)((int)param_1 + 0x16),
                 (short)param_1[3],0);
    return 0;
  }
  if ((char)param_1[0x8f] != '\0') {
    uVar2 = (uint)*(ushort *)(param_1 + 3);
    uVar4 = *(undefined4 *)((int)param_1 + 0x16);
    uVar5 = 0;
    uVar3 = *(undefined4 *)((int)param_1 + 0x12);
    iVar1 = (**(code **)(*param_1 + 0x1c))(uVar3,uVar4,uVar2,0);
    FUN_00413509(param_1 + 0xd,iVar1 / 2 + *(int *)((int)param_1 + 0xe),uVar3,uVar4,uVar2,uVar5);
    return 0;
  }
  FUN_00413483(param_1 + 0xd,*(undefined4 *)((int)param_1 + 0xe),
               *(undefined4 *)((int)param_1 + 0x12),*(undefined4 *)((int)param_1 + 0x16),
               (short)param_1[3],0);
  return 0;
}


