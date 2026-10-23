// FUN_005245c0 @ 5245c0 size=66

void __fastcall FUN_005245c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 0x232);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    uVar3 = FUN_004e9370(*puVar2);
    (**(code **)(*param_1 + 0x48))(uVar3);
    __ftol();
    puVar2 = puVar1;
  }
  return;
}


