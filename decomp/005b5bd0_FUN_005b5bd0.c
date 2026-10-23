// FUN_005b5bd0 @ 5b5bd0 size=75

void __fastcall FUN_005b5bd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_007ec564;
  puVar2 = (undefined4 *)param_1[1];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  *param_1 = &PTR_LAB_007e3b70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


