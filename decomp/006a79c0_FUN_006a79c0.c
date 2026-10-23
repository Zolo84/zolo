// FUN_006a79c0 @ 6a79c0 size=460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a79c0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined2 uStack_24;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5a26;
  local_c = ExceptionList;
  piVar1 = (int *)**(int **)(param_1 + 0x94);
  ExceptionList = &local_c;
  iVar4 = FUN_00527980();
  if (iVar4 == *(int *)(param_1 + 0xbc)) {
    uVar5 = (**(code **)(*piVar1 + 0x10))();
    cVar3 = FUN_0052b150(uVar5);
    if (cVar3 != '\0') {
      uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe) + 0xc))
                        (*(undefined4 *)((int)piVar1 + 0x1a));
      FUN_00458570(s_AITransport___d_of__s__Loads_Arm_00869374,*(undefined4 *)(param_1 + 6),uVar5);
      cVar3 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
      if (cVar3 != '\0') {
        puVar6 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x12);
          uStack_14 = uStack_14 & 0xff000000;
          pvVar7 = operator_new(0x1e);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)0x0;
          }
          else {
            FUN_0042d6c0();
            *(undefined2 *)((int)pvVar7 + 0xe) = 0;
            *(undefined4 *)((int)pvVar7 + 0x10) = 0;
            FUN_0042d2d0();
          }
          FUN_0042d320(pvVar7);
          *puVar6 = &PTR_FUN_007e77e4;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *(undefined2 *)puVar6[1] = 0x34;
          iVar4 = puVar6[1];
          *(undefined4 *)(iVar4 + 8) = _DAT_0088f24c;
          *(undefined2 *)(iVar4 + 0xc) = DAT_0088f24e._2_2_;
          puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar4 = puVar6[1];
          *(undefined4 *)(iVar4 + 2) = *puVar8;
          *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar8 + 1);
          iVar4 = puVar6[1];
          uStack_24 = (undefined2)uVar5;
          *puVar6 = &PTR_FUN_007e7804;
          *(undefined2 *)(iVar4 + 0x14) = uStack_24;
          *(int *)(iVar4 + 0xe) = piVar1[6];
          iVar2 = piVar1[7];
          *(undefined1 *)(iVar4 + 0x16) = 1;
          *(short *)(iVar4 + 0x12) = (short)iVar2;
          *(uint *)(iVar4 + 0x18) = uStack_14;
          *(undefined2 *)(iVar4 + 0x1c) = 0;
        }
        uStack_4 = 0xffffffff;
        FUN_00565c30(puVar6);
      }
      if (*(int **)(param_1 + 0x66) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x66) + 8))();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


