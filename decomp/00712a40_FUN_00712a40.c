// FUN_00712a40 @ 712a40 size=709

void FUN_00712a40(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar8 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dbdec;
  local_c = ExceptionList;
  if (*(char *)(param_2 + 0x13c) == '\0') {
    if (*(char *)(param_2 + 0x13d) != '\0') {
      param_2 = 0;
      if (DAT_0087769c < 1) {
        return;
      }
      local_1c = &DAT_00dbd1a2;
      ExceptionList = &local_c;
      do {
        iVar7 = *local_1c;
        if (iVar7 < 0xc) {
          if (*(int *)(iVar8 + 0xc) != 0) {
            if (0xb < iVar7) goto LAB_00712ab0;
            goto LAB_00712ac2;
          }
LAB_00712ae0:
          puVar4 = operator_new(0xc);
          local_4 = 0;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            fVar1 = *(float *)(iVar8 + 8);
            iVar7 = *(int *)(iVar8 + 0x14);
            uVar2 = *(undefined4 *)(iVar8 + 0x10);
            FUN_0072aa10(0x16b,param_1 + 4);
            *puVar4 = &PTR_FUN_007e99fc;
            *(undefined4 *)(puVar4[1] + 0x1a) = param_3;
            *(int *)(puVar4[1] + 0x16) = param_2;
            *(undefined4 *)(puVar4[1] + 0x12) = uVar2;
            *(float *)(puVar4[1] + 0xe) = -fVar1;
            *(bool *)(puVar4[1] + 0x1e) = iVar7 != 0;
          }
          local_4 = 0xffffffff;
          FUN_00565bc0(puVar4);
        }
        else {
LAB_00712ab0:
          if (((iVar7 < 0x15) || (iVar7 == 0x8c)) && (*(int *)(iVar8 + 0xc) == 2))
          goto LAB_00712ae0;
LAB_00712ac2:
          if (((0x14 < iVar7) && (iVar7 != 0x8c)) && (*(int *)(iVar8 + 0xc) == 1))
          goto LAB_00712ae0;
        }
        param_2 = param_2 + 1;
        local_1c = local_1c + 1;
        if (DAT_0087769c <= param_2) {
          ExceptionList = local_c;
          return;
        }
      } while( true );
    }
    ExceptionList = &local_c;
    puVar4 = operator_new(0xc);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
LAB_00712cdd:
      puVar4 = (undefined4 *)0x0;
      goto LAB_00712cdf;
    }
    fVar1 = *(float *)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    FUN_0072aa10(0x16b,param_1 + 4);
    *puVar4 = &PTR_FUN_007e99fc;
    *(undefined4 *)(puVar4[1] + 0x1a) = param_3;
    *(undefined4 *)(puVar4[1] + 0x16) = uVar3;
    *(undefined4 *)(puVar4[1] + 0x12) = uVar2;
    iVar7 = puVar4[1];
  }
  else {
    ExceptionList = &local_c;
    puVar4 = operator_new(0xc);
    local_4 = 2;
    if (puVar4 == (undefined4 *)0x0) goto LAB_00712cdd;
    fVar1 = *(float *)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    pvVar5 = operator_new(0x20);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      FUN_0042d6c0();
    }
    FUN_0042d320(pvVar5);
    *puVar4 = &PTR_FUN_007e9a1c;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *(undefined2 *)puVar4[1] = 0x16c;
    iVar7 = puVar4[1];
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar7 + 0xc) = *(undefined2 *)(param_1 + 8);
    puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar7 = puVar4[1];
    *(undefined4 *)(iVar7 + 2) = *puVar6;
    *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar6 + 1);
    *puVar4 = &PTR_FUN_007e99fc;
    *(undefined4 *)(puVar4[1] + 0x1a) = param_3;
    *(undefined4 *)(puVar4[1] + 0x16) = uVar3;
    *(undefined4 *)(puVar4[1] + 0x12) = uVar2;
    iVar7 = puVar4[1];
  }
  *(float *)(iVar7 + 0xe) = -fVar1;
  *(bool *)(puVar4[1] + 0x1e) = iVar8 != 0;
LAB_00712cdf:
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar4);
  ExceptionList = local_c;
  return;
}


