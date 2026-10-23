// FUN_00407da0 @ 407da0 size=233

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00407da0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iStack_10;
  
  uVar4 = _DAT_0088cee8;
  iVar1 = param_1[3];
  if (iVar1 == 1) {
    uVar2 = param_1[1];
    iVar1 = param_1[6];
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))();
    iStack_10 = param_1[2];
    if (iStack_10 != 0) {
      do {
        puVar8 = puVar6;
        for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar6 = (undefined4 *)((int)puVar6 + iVar1);
        for (uVar7 = uVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
  }
  else {
    uVar2 = param_1[1];
    iVar3 = param_1[6];
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))();
    iStack_10 = param_1[2];
    if (iStack_10 != 0) {
      do {
        puVar8 = puVar6;
        if (uVar2 != 0) {
          uVar5 = (undefined2)uVar4;
          puVar8 = (undefined4 *)((int)puVar6 + uVar2 * 2);
          for (uVar7 = uVar2 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar6 = CONCAT22(uVar5,uVar5);
            puVar6 = puVar6 + 1;
          }
          for (uVar7 = (uint)((uVar2 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined2 *)puVar6 = uVar5;
            puVar6 = (undefined4 *)((int)puVar6 + 2);
          }
        }
        puVar6 = (undefined4 *)((int)puVar8 + (iVar3 / iVar1 - uVar2) * 2);
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
    }
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


