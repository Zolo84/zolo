// FUN_00712770 @ 712770 size=719

void FUN_00712770(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dbdac;
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
        iVar1 = *local_1c;
        if (iVar1 < 0xc) {
          if (*(int *)(iVar4 + 0xc) != 0) {
            if (0xb < iVar1) goto LAB_007127e0;
            goto LAB_007127f2;
          }
LAB_00712810:
          puVar6 = operator_new(0xc);
          local_4 = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            uVar2 = *(undefined4 *)(iVar4 + 8);
            iVar1 = *(int *)(iVar4 + 0x14);
            uVar3 = *(undefined4 *)(iVar4 + 0x10);
            FUN_0072aa10(0x16b,param_1 + 4);
            *puVar6 = &PTR_FUN_007e99fc;
            *(undefined4 *)(puVar6[1] + 0x1a) = param_3;
            *(int *)(puVar6[1] + 0x16) = param_2;
            *(undefined4 *)(puVar6[1] + 0x12) = uVar3;
            *(undefined4 *)(puVar6[1] + 0xe) = uVar2;
            *(bool *)(puVar6[1] + 0x1e) = iVar1 != 0;
          }
          local_4 = 0xffffffff;
          FUN_00565bc0(puVar6);
        }
        else {
LAB_007127e0:
          if (((iVar1 < 0x15) || (iVar1 == 0x8c)) && (*(int *)(iVar4 + 0xc) == 2))
          goto LAB_00712810;
LAB_007127f2:
          if (((0x14 < iVar1) && (iVar1 != 0x8c)) && (*(int *)(iVar4 + 0xc) == 1))
          goto LAB_00712810;
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
    puVar6 = operator_new(0xc);
    local_4 = 1;
    if (puVar6 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_2 + 8);
      iVar4 = *(int *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      FUN_0072aa10(0x16b,param_1 + 4);
      *puVar6 = &PTR_FUN_007e99fc;
      *(undefined4 *)(puVar6[1] + 0x1a) = param_3;
      *(undefined4 *)(puVar6[1] + 0x16) = uVar5;
      *(undefined4 *)(puVar6[1] + 0x12) = uVar3;
      *(undefined4 *)(puVar6[1] + 0xe) = uVar2;
      *(bool *)(puVar6[1] + 0x1e) = iVar4 != 0;
      goto LAB_00712a19;
    }
  }
  else {
    ExceptionList = &local_c;
    puVar6 = operator_new(0xc);
    local_4 = 2;
    if (puVar6 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(param_2 + 8);
      iVar4 = *(int *)(param_2 + 0x14);
      uVar3 = *(undefined4 *)(param_2 + 0x10);
      uVar5 = *(undefined4 *)(param_2 + 0xc);
      pvVar7 = operator_new(0x20);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
      }
      FUN_0042d320(pvVar7);
      *puVar6 = &PTR_FUN_007e9a1c;
      *(undefined1 *)((int)puVar6 + 10) = 0;
      *(undefined2 *)puVar6[1] = 0x16c;
      iVar1 = puVar6[1];
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
      puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar1 = puVar6[1];
      *(undefined4 *)(iVar1 + 2) = *puVar8;
      *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar8 + 1);
      *puVar6 = &PTR_FUN_007e99fc;
      *(undefined4 *)(puVar6[1] + 0x1a) = param_3;
      *(undefined4 *)(puVar6[1] + 0x16) = uVar5;
      *(undefined4 *)(puVar6[1] + 0x12) = uVar3;
      *(undefined4 *)(puVar6[1] + 0xe) = uVar2;
      *(bool *)(puVar6[1] + 0x1e) = iVar4 != 0;
      goto LAB_00712a19;
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_00712a19:
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar6);
  ExceptionList = local_c;
  return;
}


