// FUN_00673fa0 @ 673fa0 size=317

int __thiscall FUN_00673fa0(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  undefined1 *puVar8;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 *local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_10 [4];
  
  local_1c = 0;
  local_10[0] = *param_2;
  local_18 = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  local_10[3] = 0;
  bVar1 = true;
  puVar2 = *(undefined4 **)(param_1 + 4);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (puVar3 != DAT_00d11168) {
    bVar1 = local_10[0] < (int)puVar3[3];
    puVar2 = puVar3;
    if (bVar1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(char *)(param_1 + 8) != '\0') {
    piVar4 = (int *)FUN_00675fb0(local_2c,puVar3,puVar2,local_10);
    return *piVar4 + 0x10;
  }
  local_30 = puVar2;
  if (bVar1) {
    puVar5 = (undefined4 *)FUN_00674a70(local_28);
    if (local_30 == (undefined4 *)*puVar5) {
      puVar5 = &param_2;
      param_2 = (int *)CONCAT31(param_2._1_3_,1);
      uVar6 = FUN_00675fb0(local_24,puVar3,puVar2,local_10);
      FUN_00675d80(uVar6,puVar5);
      return local_1c + 0x10;
    }
    FUN_00676650();
  }
  if ((int)local_30[3] < local_10[0]) {
    puVar8 = &local_32;
    local_32 = 1;
    ppuVar7 = (undefined4 **)FUN_00675fb0(local_20,puVar3,puVar2,local_10);
  }
  else {
    puVar8 = &local_31;
    local_31 = 0;
    ppuVar7 = &local_30;
  }
  FUN_00675d80(ppuVar7,puVar8);
  return local_1c + 0x10;
}


