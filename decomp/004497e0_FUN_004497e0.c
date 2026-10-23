// FUN_004497e0 @ 4497e0 size=185

undefined4 __thiscall FUN_004497e0(int param_1,short *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)FUN_0050b140(param_2);
  if (*(int **)(param_1 + 0x117f8) != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x117f8);
    do {
      piVar1 = piVar3 + 2;
      iVar5 = *piVar3;
      if ((*(int *)(iVar5 + 0x12) == *(int *)(param_2 + 1)) &&
         (*(short *)(iVar5 + 0x10) == *param_2)) {
        FUN_00425cb0(iVar5);
        return 0;
      }
      piVar3 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  iVar5 = *(int *)(param_1 + 0x4508);
  if (iVar5 != 0) {
    while( true ) {
      iVar5 = *(int *)(iVar5 + 8);
      puVar4 = (undefined4 *)FUN_0051c480();
      if (puVar4 == puVar2) break;
      if (iVar5 == 0) {
        return 0;
      }
    }
    FUN_0051c4a0(0);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x117f4) + 0x18))(puVar2);
    (**(code **)(DAT_00d77b5e + 0x18))(puVar2);
  }
  return 0;
}


