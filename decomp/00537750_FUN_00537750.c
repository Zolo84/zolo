// FUN_00537750 @ 537750 size=92

int __thiscall FUN_00537750(int *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int *)(*param_1 + 8) == 0) {
    return -2;
  }
  iVar1 = *param_2;
  if ((iVar1 == 2) || ((0x526 < iVar1 && (iVar1 < 0x52b)))) {
    puVar2 = &DAT_0083a374;
  }
  else {
    puVar2 = &DAT_00850e44;
  }
  iVar1 = FUN_007a6628(*(int *)(*param_1 + 8),puVar2,param_2 + 1);
  return ((iVar1 < 0) - 1 & 2) - 2;
}


