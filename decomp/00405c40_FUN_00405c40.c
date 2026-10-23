// FUN_00405c40 @ 405c40 size=429

undefined4 __thiscall FUN_00405c40(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  undefined4 local_1e0 [4];
  undefined4 uStack_1d0;
  undefined4 local_178;
  undefined1 local_174 [4];
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 auStack_160 [20];
  undefined1 local_14c [320];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b972b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426f50(param_2);
  local_4 = 0;
  cVar1 = FUN_0040f470(local_14c,local_174);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_00426f80();
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = local_170;
    puVar4 = local_1e0;
    for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 8) = local_16c;
    local_1e0[0] = 0x6c;
    local_1e0[3] = local_170;
    local_1e0[2] = local_16c;
    local_1e0[1] = 7;
    local_178 = 0x40;
    iVar3 = FUN_00579fd0(local_1e0);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 == 0) {
      local_4 = 0xffffffff;
      FUN_00426f80();
      uVar2 = 0;
    }
    else {
      puVar4 = local_1e0;
      for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_1e0[0] = 0x6c;
      while( true ) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 100))
                          (*(int **)(param_1 + 0x2c),0,local_1e0,0x21,0);
        if (iVar3 != -0x7789fe3e) break;
        (**(code **)(**(int **)(param_1 + 0x2c) + 0x6c))(*(int **)(param_1 + 0x2c));
      }
      if (iVar3 == 0) {
        FUN_0040eb60(auStack_160,uStack_1d0,unaff_EBX);
        (**(code **)(**(int **)(param_1 + 0x2c) + 0x80))(*(int **)(param_1 + 0x2c),0);
        *(undefined4 *)(param_1 + 0x238) = 0;
        local_4 = 0xffffffff;
        FUN_00426f80();
        uVar2 = 1;
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c));
        *(undefined4 *)(param_1 + 0x2c) = 0;
        local_4 = 0xffffffff;
        FUN_00426f80();
        uVar2 = 0;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


