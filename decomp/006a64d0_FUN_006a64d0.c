// FUN_006a64d0 @ 6a64d0 size=70

void __fastcall FUN_006a64d0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 0x1c4))();
  puVar2 = *(undefined4 **)(iVar3 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    (**(code **)(**(int **)((int)param_1 + 0x12) + 0x1c8))(*puVar2);
    puVar2 = puVar1;
  }
  FUN_006adf50(0x10);
  FUN_006adf50(0x24);
  FUN_006a9850();
  return;
}


