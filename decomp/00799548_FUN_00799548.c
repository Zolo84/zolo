// FUN_00799548 @ 799548 size=86

int __thiscall FUN_00799548(int *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00798acc();
  iVar1 = *param_1;
  if (param_2 < *(uint *)(iVar1 + 0xc)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (((iVar2 == 0) && (param_3 != '\0')) && (*(char *)(iVar1 + 0x14) != '\0')) {
    if (param_2 < *(uint *)(DAT_00dc4fd0 + 0xc)) {
      iVar2 = *(int *)(*(int *)(DAT_00dc4fd0 + 8) + param_2 * 4);
    }
    else {
      iVar2 = 0;
    }
  }
  FUN_00798b68();
  return iVar2;
}


