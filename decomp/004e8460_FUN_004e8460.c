// FUN_004e8460 @ 4e8460 size=27

int __fastcall FUN_004e8460(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3ac);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 1) && (iVar1 != 3)) && (iVar1 != 5)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


