// FUN_0050c570 @ 50c570 size=30

int FUN_0050c570(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3ac);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((3 < iVar1) && (iVar1 < 6)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


