// FUN_004bed30 @ 4bed30 size=1065

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bed30(int *param_1)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  int *piVar11;
  float10 fVar12;
  int iStack_28;
  float afStack_24 [2];
  float local_1c;
  undefined2 uStack_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bed66;
  local_c = ExceptionList;
  if ((*(int *)(param_1[0x10] + 0x5e) == 0) && ((&DAT_0089cad8)[*(int *)((int)param_1 + 0x4a)] != 0)
     ) {
    ExceptionList = &local_c;
    fVar12 = (float10)FUN_00509fb0();
    bVar2 = false;
    local_14 = (undefined4 *)0x3f800000;
    local_1c = (float)(fVar12 * fVar12);
    iVar5 = (**(code **)(*param_1 + 0xc))();
    iStack_28 = 0;
    afStack_24[0] = 0.0;
    piVar11 = *(int **)(iVar5 + 4);
    if (*(int **)(iVar5 + 4) != (int *)0x0) {
      do {
        piVar1 = (int *)piVar11[2];
        piVar11 = (int *)*piVar11;
        if (piVar11 != (int *)0x0) {
          cVar4 = FUN_0051cb20();
          if (cVar4 != '\0') {
            bVar2 = true;
            local_14 = *(undefined4 **)(piVar11[0x92] + 0xe2fa);
          }
          iVar5 = *piVar11;
          uVar6 = FUN_0051b230();
          fVar12 = (float10)(**(code **)(iVar5 + 0x78))(uVar6);
          iStack_28 = iStack_28 + 1;
          afStack_24[0] = (float)(fVar12 + (float10)afStack_24[0]);
        }
        piVar11 = piVar1;
      } while (piVar1 != (int *)0x0);
      if (0 < iStack_28) {
        afStack_24[0] = afStack_24[0] / (float)iStack_28;
      }
      if (bVar2) {
        local_1c = (float)local_14 * local_1c;
      }
    }
    uVar6 = 0;
    iVar5 = _rand();
    local_14 = (undefined4 *)(iVar5 % 1000);
    if ((float)(int)local_14 < local_1c) {
      iVar5 = 0;
      do {
        cVar4 = FUN_004c12e0(iVar5);
        if ((*(char *)((int)param_1 + 0x4e) == '\0') == (bool)cVar4) {
          iVar7 = _rand();
          iVar8 = __ftol();
          if (iVar7 % 100 < iVar8) {
            local_14 = operator_new(10);
            fVar3 = local_1c;
            uStack_4 = 0;
            if (local_14 != (void *)0x0) {
              uStack_18 = 0;
              local_1c._0_2_ = (ushort)(byte)DAT_00877380;
              local_1c = (float)(CONCAT22((short)((uint)fVar3 >> 0x10),local_1c._0_2_) & 0xff00ffff)
              ;
              uVar6 = FUN_0042df90(afStack_24,&local_1c);
              uVar6 = FUN_004c12b0(iVar5,uVar6);
            }
            iVar7 = param_1[0x10];
            uStack_4 = 0xffffffff;
            FUN_00796cd8(*(undefined4 *)(iVar7 + 0x5e));
            *(undefined4 *)(iVar7 + 0x5e) = uVar6;
            puVar9 = operator_new(0xc);
            uStack_4 = 1;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
              local_14 = (undefined4 *)0x0;
            }
            else {
              iVar7 = param_1[0x10];
              local_14 = puVar9;
              puVar10 = operator_new(0x12);
              if (puVar10 == (undefined2 *)0x0) {
                puVar10 = (undefined2 *)0x0;
              }
              else {
                puVar10[3] = 0;
                *(undefined1 *)(puVar10 + 2) = 0;
                *(undefined1 *)((int)puVar10 + 3) = 0;
                *(undefined1 *)(puVar10 + 1) = 0;
                puVar10[4] = 0;
                *(undefined4 *)(puVar10 + 5) = 0;
              }
              puVar9[1] = puVar10;
              *(undefined1 *)(puVar9 + 2) = 0;
              *(undefined1 *)((int)puVar9 + 9) = 1;
              *puVar9 = &PTR_FUN_007e5f80;
              *(undefined1 *)((int)puVar9 + 10) = 0;
              *puVar10 = 0x7a;
              iVar8 = puVar9[1];
              *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 0xc);
              *(undefined2 *)(iVar8 + 0xc) = *(undefined2 *)(iVar7 + 0x10);
              iVar7 = puVar9[1];
              local_14 = (undefined4 *)((uint)local_14 & 0xff000000);
              *(undefined4 **)(iVar7 + 2) = local_14;
              *(undefined2 *)(iVar7 + 6) = 0;
              *puVar9 = &PTR_FUN_007e5f60;
              *(int *)(puVar9[1] + 0xe) = iVar5;
            }
            uStack_4 = 0xffffffff;
            FUN_00565c70(puVar9);
            ExceptionList = local_c;
            return;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


