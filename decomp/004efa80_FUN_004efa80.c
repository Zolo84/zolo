// FUN_004efa80 @ 4efa80 size=54

int __fastcall FUN_004efa80(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(**(int **)(param_1 + 0x26) + 0x134);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0xe) && ((iVar1 < 0x13 || (0x14 < iVar1)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


