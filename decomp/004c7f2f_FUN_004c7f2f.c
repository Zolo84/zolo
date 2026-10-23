// FUN_004c7f2f @ 4c7f2f size=126

undefined4 FUN_004c7f2f(int param_1,int param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = *(int **)((int)&DAT_008ea36c + param_1 * 0x12);
  do {
    if (local_8 == (int *)0x0) {
      return 0;
    }
    iVar1 = *(int *)(*local_8 + 0x3d8);
  } while ((iVar1 != param_2) &&
          (iVar1 = *(int *)(*local_8 + 0x3d8), local_8 = (int *)local_8[2], iVar1 != param_2));
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


