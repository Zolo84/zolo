// FUN_004a01c0 @ 4a01c0 size=43

uint __thiscall FUN_004a01c0(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = &DAT_0089cad8 + param_2;
  if (((*piVar1 != 0) && (param_2 = *(uint *)(param_1 + 0x3350), param_2 != 0)) &&
     (param_2 == *(uint *)(*piVar1 + 0x3350))) {
    return CONCAT31((int3)(param_2 >> 8),1);
  }
  return param_2 & 0xffffff00;
}


