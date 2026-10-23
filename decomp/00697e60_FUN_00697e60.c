// FUN_00697e60 @ 697e60 size=134

void __thiscall FUN_00697e60(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 unaff_retaddr;
  int *piVar2;
  
  param_1 = param_1 + param_2 * 0x12;
  cVar1 = (**(code **)(*(int *)(param_1 + 0x13e) + 0x24))(param_3);
  if (cVar1 == '\0') {
    for (piVar2 = *(int **)(param_1 + 0x142); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if ((*piVar2 != 0) &&
         (*(float *)(*(int *)(param_3 + 0x40) + 0x44) < *(float *)(*(int *)(*piVar2 + 0x40) + 0x44))
         ) {
        FUN_006971c0(unaff_retaddr);
        FUN_0069a810(param_3,piVar2);
        return;
      }
    }
    FUN_0069a7c0(param_3);
  }
  return;
}


