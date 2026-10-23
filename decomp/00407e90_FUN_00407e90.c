// FUN_00407e90 @ 407e90 size=129

void __thiscall FUN_00407e90(int *param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iStack_c;
  
  iVar1 = param_1[6];
  uVar2 = param_1[1];
  iVar3 = param_1[3];
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))();
  iStack_c = param_1[2];
  if (iStack_c != 0) {
    do {
      puVar6 = puVar4;
      if (uVar2 != 0) {
        puVar6 = (undefined4 *)((int)puVar4 + uVar2 * 2);
        for (uVar5 = uVar2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = CONCAT22(param_2,param_2);
          puVar4 = puVar4 + 1;
        }
        for (uVar5 = (uint)((uVar2 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined2 *)puVar4 = param_2;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
      }
      puVar4 = (undefined4 *)((int)puVar6 + (iVar1 / iVar3 - uVar2) * 2);
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


