// FUN_005883a0 @ 5883a0 size=95

int FUN_005883a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x3d8) + 6);
  iVar2 = *(int *)(*(int *)(param_2 + 0x3d4) + 6);
  if (((*(char *)(param_1 + 8) != '\x01') || (iVar4 = *(int *)(param_1 + 10), iVar1 != iVar4)) &&
     ((*(char *)(param_1 + 8) != '\0' || (cVar3 = FUN_00584e20(iVar1), iVar4 = iVar1, cVar3 == '\0')
      ))) {
    if ((iVar1 != iVar2) && (iVar1 != 0x157)) goto LAB_005883f6;
    iVar4 = *(int *)(param_1 + 10);
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_005883f6:
  return *(int *)(param_1 + 10);
}


