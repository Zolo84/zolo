// FUN_00435030 @ 435030 size=382

void __fastcall FUN_00435030(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined1 auStack_8 [8];
  
  bVar3 = false;
  iVar8 = *(int *)(param_1 + 0x3e);
  if ((iVar8 != 0) && (*(int *)(iVar8 + 4) != 0)) {
    bVar3 = true;
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(iVar8 + 4);
    piVar1 = *(int **)(param_1 + 0x4a);
    iVar8 = *piVar1;
    FUN_00415be0();
    FUN_00436060();
    uVar4 = __ftol();
    puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x28))(&local_10,uVar4);
    (**(code **)(iVar8 + 0x18))(*puVar5);
  }
  iVar8 = 0;
  puVar5 = *(undefined4 **)(param_1 + 0x3e);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      if ((*(int *)(param_1 + 0x3e) != 0) && (*(int *)(*(int *)(param_1 + 0x3e) + 4) != 0))
      goto LAB_00435148;
      break;
    }
    puVar2 = (undefined4 *)puVar5[2];
    piVar1 = (int *)*puVar5;
    iVar6 = (**(code **)(*piVar1 + 0x18))();
    iVar8 = iVar8 + iVar6;
    iVar6 = *(int *)(param_1 + 0x2a);
    puVar5 = puVar2;
  } while ((iVar8 < iVar6) || (iVar7 = (**(code **)(*piVar1 + 0x18))(), iVar8 - iVar6 < iVar7));
  if (!bVar3) {
    local_10 = *(undefined4 *)(*(int *)(param_1 + 0x52) + 0x14);
    iVar8 = **(int **)(param_1 + 0x4a);
    puVar5 = (undefined4 *)
             (**(code **)(iVar8 + 0x28))(&local_10,*(undefined4 *)(*(int *)(param_1 + 0x52) + 0x18))
    ;
    (**(code **)(iVar8 + 0x18))(*puVar5);
    puVar5 = *(undefined4 **)(param_1 + 4);
    while (puVar5 != (undefined4 *)0x0) {
      (**(code **)(*(int *)*puVar5 + 0x18))();
      FUN_00436e10(&local_10,0);
    }
  }
LAB_00435148:
  local_10 = *(undefined4 *)(*(int *)(param_1 + 0x52) + 0x14);
  uStack_c = *(undefined4 *)(*(int *)(param_1 + 0x52) + 0x18);
  piVar1 = *(int **)(param_1 + 0x4a);
  iVar8 = *piVar1;
  FUN_00415be0();
  FUN_00436060();
  uVar4 = __ftol();
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x28))(auStack_8,uVar4);
  (**(code **)(iVar8 + 0x18))(*puVar5);
  return;
}


