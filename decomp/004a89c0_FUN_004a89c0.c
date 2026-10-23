// FUN_004a89c0 @ 4a89c0 size=712

void FUN_004a89c0(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be046;
  local_c = ExceptionList;
  if ((DAT_00d610e0 != '\x01') && (param_1 != 0.0)) {
    ExceptionList = &local_c;
    iVar3 = FUN_004e9370();
    FUN_00428eb0();
    FUN_00428eb0();
    _rand();
    if ((*(int *)(iVar3 + 0x3d8) != 0) && (-1 < DAT_00877674)) {
      if (DAT_00877674 == 0) {
        FUN_0044c450();
      }
      else {
        FUN_0044c450();
        _rand();
      }
    }
    FUN_00449290(local_1c);
    FUN_0045e580();
    iVar3 = FUN_00428ee0();
    if ((iVar3 != 0) && (iVar3 != 8)) {
      FUN_00446d10();
      FUN_0048b970();
      FUN_00449290(local_14);
      FUN_00461e60();
      FUN_00449290();
      FUN_0045e6f0();
      fVar1 = *(float *)(iVar3 + 0xe8);
      iVar4 = _rand();
      iVar5 = __ftol();
      param_1 = (float)(iVar4 % iVar5);
      if ((float)(iVar4 % iVar5) < DAT_00877678) {
        param_1 = DAT_00877678;
      }
      if (DAT_0087767c < param_1) {
        param_1 = DAT_0087767c;
      }
      if (fVar1 < param_1) {
        param_1 = fVar1;
      }
      puVar6 = operator_new(0xc);
      local_4 = 0;
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = *(undefined4 *)(iVar3 + 0xec);
        puVar7 = operator_new(0x18);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar7[4] = 0;
          *(undefined4 *)(puVar7 + 5) = 0;
        }
        puVar6[1] = puVar7;
        *(undefined1 *)(puVar6 + 2) = 0;
        *(undefined1 *)((int)puVar6 + 9) = 1;
        *puVar6 = &PTR_FUN_007e6e4c;
        *(undefined1 *)((int)puVar6 + 10) = 0;
        *puVar7 = 0x13e;
        iVar4 = puVar6[1];
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 4);
        *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar3 + 8);
        puVar8 = (undefined4 *)FUN_0042d2f0();
        iVar3 = puVar6[1];
        *(undefined4 *)(iVar3 + 2) = *puVar8;
        *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar8 + 1);
        *puVar6 = &PTR_FUN_007e6e2c;
        *(float *)(puVar6[1] + 0xe) = param_1;
        *(undefined4 *)(puVar6[1] + 0x12) = uVar2;
        *(undefined1 *)(puVar6[1] + 0x16) = 1;
        *(undefined1 *)(puVar6[1] + 0x17) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00565bc0();
    }
  }
  ExceptionList = local_c;
  return;
}


