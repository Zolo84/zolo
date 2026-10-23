// FUN_00489760 @ 489760 size=86

void __fastcall FUN_00489760(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  
  FUN_005870d0(*(undefined4 *)(param_1 + 6));
  cVar3 = FUN_00444290();
  if (cVar3 != '\0') {
    FUN_0064e350();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x4508);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    (**(code **)(*(int *)*puVar2 + 0x38))(param_1);
    puVar2 = puVar1;
  }
  if (param_1 != DAT_00d0ca90) {
    return;
  }
  FUN_0064c250();
  return;
}


