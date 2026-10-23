// FUN_0069d410 @ 69d410 size=185

void __fastcall FUN_0069d410(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)param_1[0x37];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    uVar2 = *puVar3;
    piVar4 = (int *)(**(code **)(*param_1 + 0xe0))();
    (**(code **)(*piVar4 + 0x1c8))(uVar2);
    puVar3 = puVar1;
  }
  (**(code **)(param_1[0x36] + 0x10))();
  puVar3 = (undefined4 *)param_1[0x24];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  puVar3 = *(undefined4 **)((int)param_1 + 0xa2);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  FUN_006a9850();
  return;
}


