// FUN_007596f0 @ 7596f0 size=61

void FUN_007596f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = &DAT_00d4c3fa;
  do {
    piVar3 = (int *)piVar4[1];
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      puVar2 = (undefined4 *)*piVar3;
      (**(code **)(*piVar4 + 0x18))(puVar2);
      piVar3 = piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    piVar4 = piVar4 + 0x15;
  } while ((int)piVar4 < 0xd4c6ee);
  return;
}


