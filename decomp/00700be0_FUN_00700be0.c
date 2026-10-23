// FUN_00700be0 @ 700be0 size=624

void __thiscall FUN_00700be0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  float local_2c;
  int local_24;
  undefined4 *local_18;
  undefined2 local_14;
  undefined4 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  fVar3 = DAT_00d7d068;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db856;
  local_c = ExceptionList;
  iVar1 = (&DAT_0089cad8)[param_2];
  if ((*(int *)(param_1 + 0x1d4ce) != 0) &&
     (ExceptionList = &local_c, iVar5 = _rand(), (float)(iVar5 % 0x168) <= fVar3)) {
    local_2c = -1.0;
    param_2 = 0;
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x1d4ce)) {
      puVar9 = (undefined2 *)(param_1 + 0xea70);
      do {
        local_14 = *puVar9;
        local_12 = *(undefined4 *)(puVar9 + 1);
        iVar5 = FUN_00428460();
        if (((iVar5 != 0) && (iVar5 + -8 != 0)) && (*(char *)(iVar5 + 0x122c) == '\0')) {
          piVar6 = (int *)FUN_00700e50();
          piVar6 = (int *)(**(code **)(*piVar6 + 0x28))(&local_18);
          if (*piVar6 == 0) {
            uVar7 = _rand();
            uVar7 = uVar7 & 0x800003ff;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffc00) + 1;
            }
            if (local_2c < (float)(int)uVar7) {
              *(int *)(iVar5 + 0x1c) = iVar1;
              cVar4 = FUN_0070d430();
              if (cVar4 != '\0') {
                param_2 = iVar5 + -8;
                local_2c = (float)(int)uVar7;
              }
            }
          }
        }
        local_24 = local_24 + 1;
        puVar9 = puVar9 + 3;
      } while (local_24 < *(int *)(param_1 + 0x1d4ce));
      if (param_2 != 0) {
        *(int *)(param_2 + 0x24) = iVar1;
        puVar8 = operator_new(0xc);
        uStack_4 = 0;
        local_18 = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          iVar5 = _rand();
          puVar9 = operator_new(0x1e);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (puVar9 == (undefined2 *)0x0) {
            puVar9 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d6c0();
            puVar9[7] = 0;
            *(undefined4 *)(puVar9 + 8) = 0;
            puVar9[10] = 0;
            *(undefined4 *)(puVar9 + 0xb) = 0;
          }
          puVar8[1] = puVar9;
          *(undefined1 *)(puVar8 + 2) = 0;
          *(undefined1 *)((int)puVar8 + 9) = 1;
          *puVar8 = &PTR_FUN_007e52f0;
          *(undefined1 *)((int)puVar8 + 10) = 0;
          *puVar9 = 0xa0;
          iVar2 = puVar8[1];
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 0xc);
          *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_2 + 0x10);
          puVar10 = (undefined4 *)FUN_0042d2f0(0,0);
          iVar2 = puVar8[1];
          *(undefined4 *)(iVar2 + 2) = *puVar10;
          *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar10 + 1);
          iVar2 = puVar8[1];
          *puVar8 = &PTR_FUN_007e52d0;
          *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_2 + 0xc);
          *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
          iVar2 = puVar8[1];
          *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 4);
          *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(iVar1 + 8);
          *(int *)(puVar8[1] + 0x1a) = iVar5;
        }
        uStack_4 = 0xffffffff;
        FUN_00565bc0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


