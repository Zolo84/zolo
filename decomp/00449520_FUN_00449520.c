// FUN_00449520 @ 449520 size=296

undefined4 __fastcall FUN_00449520(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  cVar3 = FUN_004a0780(*(undefined4 *)(param_1 + 6));
  if (((cVar3 != '\0') &&
      (iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x117de)), *(int *)(iVar4 + 0x3d8) != param_1)
      ) && (iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x117f0)),
           *(int *)(iVar4 + 0x3d8) != param_1)) {
    *(undefined4 *)(param_1 + 0x117f0) = *(undefined4 *)(param_1 + 0x117de);
    local_8 = 0;
    puVar2 = *(undefined4 **)(param_1 + 0xe8a4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      iVar4 = FUN_004e9370(*puVar2);
      FUN_004ed140();
      __ftol();
      FUN_004e8ab0(param_1);
      (**(code **)(*(int *)(*(int *)(iVar4 + 0x482) + 0x28) + 4))();
      FUN_0044a9c0(*(undefined4 *)(param_1 + 0x117de),*(undefined4 *)(iVar4 + 0x12));
      iVar5 = __ftol();
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      puVar2 = puVar1;
      if (local_8 < iVar5) {
        *(undefined4 *)(param_1 + 0x117f0) = *(undefined4 *)(iVar4 + 0x12);
        local_8 = iVar5;
      }
    }
    return 1;
  }
  return 0;
}


