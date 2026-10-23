// FUN_00652050 @ 652050 size=101

undefined4 __fastcall FUN_00652050(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x21e54) != '\0') {
    return 1;
  }
  iVar1 = FUN_00581e60();
  iVar1 = *(int *)(iVar1 + 4);
  piVar2 = (int *)FUN_00581e60();
  uVar3 = iVar1 - *(int *)(param_1 + 0x21e96);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = *piVar2 - *(int *)(param_1 + 0x21e92);
  uVar7 = (int)uVar4 >> 0x1f;
  if (((int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7)) < 0x11) ||
     (uVar5 = 1, *(char *)(param_1 + 0x21e9a) != '\x01')) {
    uVar5 = 0;
  }
  return uVar5;
}


