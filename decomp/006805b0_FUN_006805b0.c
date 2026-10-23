// FUN_006805b0 @ 6805b0 size=104

void __fastcall FUN_006805b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  (**(code **)(*(int *)(param_1 + 100) + 0x10))();
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe8b6);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    iVar5 = FUN_004e9370(*puVar3);
    iVar2 = *(int *)(iVar5 + 0x3d4);
    puVar3 = puVar1;
    if (((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 10))) &&
       (cVar4 = (**(code **)(*(int *)(param_1 + 100) + 0x24))(*(undefined4 *)(iVar2 + 6)),
       cVar4 == '\0')) {
      FUN_00459f50(*(undefined4 *)(*(int *)(iVar5 + 0x3d4) + 6));
    }
  }
  return;
}


