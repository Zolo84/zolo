// FUN_006d6340 @ 6d6340 size=82

uint __thiscall FUN_006d6340(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x221d6) + 4))();
  if (piVar3 != (int *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x221da);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      piVar3 = (int *)*puVar2;
      puVar2 = puVar1;
      if ((((*piVar3 <= param_2) && (param_2 <= piVar3[2])) && (piVar3[1] <= param_3)) &&
         (param_3 <= piVar3[3])) {
        return CONCAT31((int3)((uint)piVar3 >> 8),1);
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}


