// FUN_00674ad0 @ 674ad0 size=245

void __thiscall FUN_00674ad0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_4;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  bVar4 = true;
  puVar3 = (undefined4 *)puVar2[1];
  local_4 = param_1;
  if (puVar3 != DAT_00d11170) {
    do {
      puVar2 = puVar3;
      iVar1 = FUN_00676e10(puVar2 + 3);
      bVar4 = iVar1 < 0;
      if (bVar4) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
    } while (puVar3 != DAT_00d11170);
  }
  if (*(char *)(param_1 + 8) != '\0') {
    puVar2 = (undefined4 *)FUN_00676300(&local_4,puVar3,puVar2,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar4) {
    if (puVar2 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar2 = (undefined4 *)FUN_00676300(&local_4,puVar3,puVar2,param_3);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_006766b0();
  }
  iVar1 = FUN_00676e10(param_3);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_00676300(&local_4,puVar3,puVar2,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = puVar2;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}


