// FUN_006a6910 @ 6a6910 size=52

void __fastcall FUN_006a6910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 0x1b4))();
  puVar2 = *(undefined4 **)(iVar3 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    (**(code **)(**(int **)((int)param_1 + 0x12) + 0x1b8))(*puVar2);
    puVar2 = puVar1;
  }
  FUN_006a9850();
  return;
}


