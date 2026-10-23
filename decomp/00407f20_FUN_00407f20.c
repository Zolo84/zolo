// FUN_00407f20 @ 407f20 size=134

void __thiscall FUN_00407f20(int *param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = param_1[1];
  iVar2 = param_1[6];
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))();
  for (iVar4 = param_1[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar6 = puVar3;
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = param_2;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar3 = (undefined4 *)((int)puVar3 + iVar2);
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


