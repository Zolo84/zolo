// FUN_004d85e0 @ 4d85e0 size=131

void FUN_004d85e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
  piVar2 = (int *)FUN_004d89d0(local_8,param_1,param_2);
  iVar1 = piVar2[1];
  if ((((-1 < *piVar2) && (*piVar2 < 0x7500)) && (-1 < iVar1)) && (iVar1 < 0x2d00)) {
    uVar3 = FUN_004dc9d0(*piVar2,iVar1,DAT_00a98464);
    FUN_004d8670(uVar3 & ~-(uint)(*(char *)(DAT_00ab27b4 + 0x180 + uVar3 * 0x4b2) != '\0'));
    return;
  }
  FUN_004d8670(0);
  return;
}


