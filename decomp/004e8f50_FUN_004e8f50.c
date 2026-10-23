// FUN_004e8f50 @ 4e8f50 size=1045

void __thiscall FUN_004e8f50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c011f;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) {
    if ((*(int *)(param_1 + 0x3d8) != 0) &&
       (((*(int *)(param_1 + 0x3d4) != 0 && (param_2 != *(int *)(param_1 + 0x3d8))) &&
        (param_2 != 0)))) {
      ExceptionList = &local_c;
      puVar6 = operator_new(0xc);
      local_4 = 0;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar10 = *(undefined4 *)(param_1 + 0x12);
        FUN_00498e40(0x7c,param_2 + 4);
        *puVar6 = &PTR_FUN_007e6b4c;
        *(undefined4 *)(puVar6[1] + 0xe) = uVar10;
        *(undefined1 *)(puVar6[1] + 0x12) = 0;
      }
      local_4 = 0xffffffff;
      FUN_00565bc0(puVar6);
      piVar1 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
      while (piVar1 != (int *)0x0) {
        piVar2 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar5 = (**(code **)(*piVar2 + 0x30))();
        if (((cVar5 != '\0') &&
            (iVar7 = (**(code **)(*piVar2 + 0x18))(),
            *(int *)(iVar7 + 0x212) == *(int *)(param_1 + 0x12))) &&
           ((iVar7 = (**(code **)(piVar2[0x47] + 4))(), iVar7 == 0 &&
            ((*(int *)((int)piVar2 + 0x176) == 0 &&
             (cVar5 = (**(code **)(*(int *)((int)piVar2 + 0x22e) + 8))(), cVar5 != '\0')))))) {
          uVar10 = *(undefined4 *)(param_2 + 6);
          FUN_00522770(uVar10);
          cVar5 = FUN_0049ed40(uVar10);
          if (cVar5 == '\0') {
            cVar5 = FUN_0044a690(*(undefined4 *)(param_2 + 6));
            if (cVar5 == '\0') {
              if (DAT_00dc191b == '\0') {
                puVar6 = operator_new(0xc);
                uVar4 = DAT_0088f28c;
                local_4 = 3;
                if (puVar6 == (undefined4 *)0x0) goto LAB_004e9333;
                iVar7 = piVar2[0x92];
                uStack_1a = (undefined2)DAT_0088f28e;
                uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                pvVar8 = operator_new(0x20);
                local_4._0_1_ = 4;
                if (pvVar8 == (void *)0x0) {
                  pvVar8 = (void *)0x0;
                }
                else {
                  FUN_0042d6c0();
                  *(undefined2 *)((int)pvVar8 + 0xe) = 0;
                  *(undefined4 *)((int)pvVar8 + 0x10) = 0;
                  *(undefined2 *)((int)pvVar8 + 0x1a) = 0;
                  *(undefined4 *)((int)pvVar8 + 0x1c) = 0;
                }
                local_4._0_1_ = 3;
                FUN_0042d320(pvVar8);
                *puVar6 = &PTR_FUN_007e5e5c;
                *(undefined1 *)((int)puVar6 + 10) = 0;
                *(undefined2 *)puVar6[1] = 0x35;
                iVar3 = puVar6[1];
                *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar7 + 4);
                local_4 = CONCAT31(local_4._1_3_,5);
                *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar7 + 8);
                puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
                iVar7 = puVar6[1];
                *(undefined4 *)(iVar7 + 2) = *puVar9;
                *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar9 + 1);
                iVar7 = puVar6[1];
                *puVar6 = &PTR_FUN_007e5370;
                *(int *)(iVar7 + 0xe) = piVar2[6];
                *(short *)(iVar7 + 0x12) = (short)piVar2[7];
                *(undefined1 *)(puVar6[1] + 0x14) = 1;
                *(undefined1 *)(puVar6[1] + 0x15) = 0;
                *(undefined4 *)(puVar6[1] + 0x16) = 0;
                iVar7 = puVar6[1];
                *(uint *)(iVar7 + 0x1a) = CONCAT22(uStack_1a,uVar4);
                *(undefined2 *)(iVar7 + 0x1e) = uStack_18;
              }
              else {
                puVar6 = operator_new(0xc);
                uVar4 = DAT_0088f28c;
                local_4 = 2;
                if (puVar6 == (undefined4 *)0x0) {
LAB_004e9333:
                  puVar6 = (undefined4 *)0x0;
                }
                else {
                  uVar10 = *(undefined4 *)(param_2 + 6);
                  uStack_22 = (undefined2)DAT_0088f28e;
                  uStack_20 = (undefined2)((uint)DAT_0088f28e >> 0x10);
                  FUN_00458490(0x35,piVar2[0x92] + 4);
                  iVar7 = puVar6[1];
                  *puVar6 = &PTR_FUN_007e5370;
                  *(int *)(iVar7 + 0xe) = piVar2[6];
                  *(short *)(iVar7 + 0x12) = (short)piVar2[7];
                  *(undefined1 *)(puVar6[1] + 0x14) = 1;
                  *(undefined1 *)(puVar6[1] + 0x15) = 0;
                  *(undefined4 *)(puVar6[1] + 0x16) = uVar10;
                  iVar7 = puVar6[1];
                  *(uint *)(iVar7 + 0x1a) = CONCAT22(uStack_22,uVar4);
                  *(undefined2 *)(iVar7 + 0x1e) = uStack_20;
                }
              }
              local_4 = 0xffffffff;
              FUN_00565bc0(puVar6);
            }
          }
          else {
            puVar6 = operator_new(0xc);
            uVar4 = DAT_0088f28c;
            local_4 = 1;
            if (puVar6 == (undefined4 *)0x0) {
              local_4 = 0xffffffff;
              FUN_00565ca0(0);
            }
            else {
              uStack_2a = (undefined2)DAT_0088f28e;
              uStack_28 = (undefined2)((uint)DAT_0088f28e >> 0x10);
              FUN_00458490(0xa8,param_2 + 4);
              iVar7 = puVar6[1];
              *puVar6 = &PTR_FUN_007e5370;
              *(int *)(iVar7 + 0xe) = piVar2[6];
              local_4 = 0xffffffff;
              *(short *)(iVar7 + 0x12) = (short)piVar2[7];
              *(undefined1 *)(puVar6[1] + 0x14) = 0;
              *(undefined1 *)(puVar6[1] + 0x15) = 1;
              *(undefined4 *)(puVar6[1] + 0x16) = 0;
              iVar7 = puVar6[1];
              *(uint *)(iVar7 + 0x1a) = CONCAT22(uStack_2a,uVar4);
              *(undefined2 *)(iVar7 + 0x1e) = uStack_28;
              FUN_00565ca0(puVar6);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


