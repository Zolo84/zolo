// FUN_00671f40 @ 671f40 size=66

void __fastcall FUN_00671f40(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_004d1330(param_1);
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


