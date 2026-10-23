// FUN_004d5e60 @ 4d5e60 size=502

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d5e60(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  
  iVar5 = (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
  if (1 < iVar5) {
    (**(code **)(*(int *)(param_1 + 0x10a) + 4))();
    iVar5 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    if (*(int *)(iVar5 + 0x3d4) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      FUN_0044b280(uVar1);
    }
    iVar5 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    if (*(int *)(iVar5 + 0x3d4) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      FUN_0044b280(uVar1);
    }
    iVar5 = __ftol();
    if (((iVar5 <= *(int *)(param_1 + 0x12e)) &&
        (iVar5 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c)), *(int *)(iVar5 + 0x3d8) != 0)) &&
       (iVar5 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120)), *(int *)(iVar5 + 0x3d8) != 0)) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
      FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      cVar4 = FUN_0044a690(uVar1);
      if (cVar4 != '\0') {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x12a) + 6);
        FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
        cVar4 = FUN_0044a690(uVar1);
        if (((cVar4 != '\0') && ((&DAT_0089cad8)[*(int *)(param_1 + 0x150)] != 0)) &&
           (((&DAT_0089cad8)[*(int *)(param_1 + 0x154)] != 0 &&
            (cVar4 = FUN_0044a690(*(int *)(param_1 + 0x154)), cVar4 != '\0')))) {
          puVar3 = *(undefined4 **)(param_1 + 0x10e);
          do {
            if (puVar3 == (undefined4 *)0x0) {
              return 1;
            }
            puVar2 = (undefined4 *)puVar3[2];
            iVar5 = FUN_004e9370(*puVar3);
            puVar3 = puVar2;
          } while ((*(int *)(iVar5 + 0x254) != 8) || (cVar4 = FUN_004a3020(iVar5,0), cVar4 != '\0'))
          ;
        }
      }
    }
  }
  return 0;
}


