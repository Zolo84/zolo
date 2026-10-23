// FUN_00436c10 @ 436c10 size=276

void __fastcall FUN_00436c10(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  bVar3 = true;
  puVar7 = *(undefined4 **)(param_1 + 0x3e);
  if (*(undefined4 **)(param_1 + 0x3e) != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar7[2];
      piVar2 = (int *)*puVar7;
      iVar4 = (**(code **)(*piVar2 + 0x18))();
      iVar6 = iVar6 + iVar4;
      iVar4 = *(int *)(param_1 + 0x2a);
      if ((iVar4 <= iVar6) && (iVar5 = (**(code **)(*piVar2 + 0x18))(), iVar5 <= iVar6 - iVar4)) {
        bVar3 = false;
      }
      puVar7 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
    if (!bVar3) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x3e) != 0) && (*(int *)(*(int *)(param_1 + 0x3e) + 4) != 0)) {
    while ((*(int *)(param_1 + 0x3e) != 0 && (*(int *)(*(int *)(param_1 + 0x3e) + 4) != 0))) {
      FUN_00435030();
      iVar6 = 0;
      puVar7 = *(undefined4 **)(param_1 + 0x3e);
      while (puVar7 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar7[2];
        piVar2 = (int *)*puVar7;
        iVar4 = (**(code **)(*piVar2 + 0x18))();
        iVar6 = iVar6 + iVar4;
        iVar4 = *(int *)(param_1 + 0x2a);
        puVar7 = puVar1;
        if ((iVar4 <= iVar6) && (iVar5 = (**(code **)(*piVar2 + 0x18))(), iVar5 <= iVar6 - iVar4))
        goto LAB_00436cd2;
      }
    }
LAB_00436cd2:
    iVar6 = 0;
    puVar7 = *(undefined4 **)(param_1 + 0x3e);
    if (*(undefined4 **)(param_1 + 0x3e) != (undefined4 *)0x0) {
      while( true ) {
        puVar1 = (undefined4 *)puVar7[2];
        piVar2 = (int *)*puVar7;
        iVar4 = (**(code **)(*piVar2 + 0x18))();
        iVar6 = iVar6 + iVar4;
        iVar4 = *(int *)(param_1 + 0x2a);
        if ((iVar4 <= iVar6) && (iVar5 = (**(code **)(*piVar2 + 0x18))(), iVar5 <= iVar6 - iVar4))
        break;
        puVar7 = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
      }
      FUN_004351b0();
    }
  }
  return;
}


