// FUN_00428600 @ 428600 size=521

void FUN_00428600(short *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar4 = DAT_0088f2cc;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9fa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 1) == CONCAT22(DAT_0088f28e._2_2_,(undefined2)DAT_0088f28e)) &&
     (ExceptionList = &local_c, *param_1 == DAT_0088f28c)) {
    ExceptionList = &local_c;
    if (DAT_0088f2d4 == '\x01') {
      ExceptionList = &local_c;
      if (DAT_0088f2cc != (undefined4 *)0x0) {
        uVar6 = 0;
        ExceptionList = &local_c;
        ppvVar3 = &local_c;
        if (DAT_0088f2cc[1] != 0) {
          do {
            iVar2 = *(int *)(puVar4[2] + uVar6 * 4);
            while (iVar2 != 0) {
              iVar1 = *(int *)(iVar2 + 4);
              FUN_00796cd8(iVar2);
              iVar2 = iVar1;
            }
            uVar6 = uVar6 + 1;
            *(undefined4 *)(puVar4[2] + -4 + uVar6 * 4) = 0;
            ppvVar3 = ExceptionList;
          } while (uVar6 < (uint)puVar4[1]);
        }
        ExceptionList = ppvVar3;
        *puVar4 = 0;
        puVar4 = DAT_0088f2cc;
        if (DAT_0088f2cc != (undefined4 *)0x0) {
          FUN_004291d0();
          FUN_00796cd8(puVar4);
        }
        DAT_0088f2cc = (undefined4 *)0x0;
      }
      if (DAT_0088f2d0 != (undefined4 *)0x0) {
        FUN_00429360();
        puVar4 = DAT_0088f2d0;
        if (DAT_0088f2d0 != (undefined4 *)0x0) {
          FUN_00429360();
          FUN_00796cd8(puVar4[2]);
          FUN_00796cd8(puVar4);
        }
        DAT_0088f2d0 = (undefined4 *)0x0;
      }
      DAT_0088f2d4 = '\0';
    }
    DAT_0088f2ae._0_2_ = 0;
    DAT_0088f2ae._2_2_ = 0;
    DAT_0088f2ac = param_2 + 0x1268;
  }
  if (DAT_0088f2cc == (undefined4 *)0x0) {
    puVar4 = operator_new(0xc);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0x1fff;
      pvVar5 = operator_new(0x7ffc);
      puVar4[2] = pvVar5;
      uVar6 = 0;
      if (puVar4[1] != 0) {
        do {
          uVar6 = uVar6 + 1;
          *(undefined4 *)(puVar4[2] + -4 + uVar6 * 4) = 0;
        } while (uVar6 < (uint)puVar4[1]);
      }
    }
    local_4 = 0xffffffff;
    DAT_0088f2cc = puVar4;
    puVar4 = operator_new(0xc);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0x1fff;
      pvVar5 = operator_new(0x7ffc);
      puVar4[2] = pvVar5;
      uVar6 = 0;
      if (puVar4[1] != 0) {
        do {
          uVar6 = uVar6 + 1;
          *(undefined4 *)(puVar4[2] + -4 + uVar6 * 4) = 0;
        } while (uVar6 < (uint)puVar4[1]);
      }
    }
    DAT_0088f2d4 = '\x01';
    DAT_0088f2d0 = puVar4;
  }
  if (DAT_0088f2ac == *param_1) {
    DAT_0088f2ae._0_2_ = (undefined2)*(undefined4 *)(param_1 + 1);
    DAT_0088f2ae._2_2_ = (undefined2)((uint)*(undefined4 *)(param_1 + 1) >> 0x10);
  }
  ExceptionList = local_c;
  return;
}


