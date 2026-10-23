// FUN_00479c40 @ 479c40 size=541

undefined4 __thiscall FUN_00479c40(int param_1,int param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd0ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00428ee0(*(int *)(param_2 + 4) + 0xe);
  if ((iVar3 != 0) && (puVar4 = (undefined4 *)(iVar3 + -8), puVar4 != (undefined4 *)0x0)) {
    switch(*(undefined4 *)(iVar3 + 300)) {
    case 0x16:
      *(float *)(param_1 + 0x3a14) = (float)DAT_00dc187c + *(float *)(param_1 + 0x3a14);
      break;
    case 0x19:
      *(float *)(param_1 + 0x3a14) = (float)DAT_00dc1878 + *(float *)(param_1 + 0x3a14);
      break;
    case 0x1b:
      *(float *)(param_1 + 0x3a14) = (float)DAT_00dc1880 + *(float *)(param_1 + 0x3a14);
      break;
    case 0x1e:
      *(float *)(param_1 + 0x3a10) = (float)DAT_00dc1874 + *(float *)(param_1 + 0x3a10);
    }
    piVar1 = *(int **)(iVar3 + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*(int *)((int)piVar1 + 0x22) + 0x18))(puVar4);
      (**(code **)(*piVar1 + 0x94))();
      *(undefined4 *)(iVar3 + 100) = 0;
      (**(code **)*puVar4)(1);
      iVar3 = (**(code **)(*(int *)((int)piVar1 + 0x22) + 4))();
      if (iVar3 == 0) {
        *(undefined1 *)(piVar1 + 0x61) = 1;
        puVar4 = operator_new(0xc);
        uVar2 = DAT_0088f28c;
        uStack_4 = 0;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uStack_12 = (undefined2)DAT_0088f28e;
          uStack_10 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          puVar5 = operator_new(0x20);
          uStack_4._0_1_ = 1;
          if (puVar5 == (undefined2 *)0x0) {
            puVar5 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d6c0();
            puVar5[7] = 0;
            *(undefined4 *)(puVar5 + 8) = 0;
            puVar5[0xd] = 0;
            *(undefined4 *)(puVar5 + 0xe) = 0;
          }
          puVar4[1] = puVar5;
          *(undefined1 *)(puVar4 + 2) = 0;
          *(undefined1 *)((int)puVar4 + 9) = 1;
          *puVar4 = &PTR_FUN_007e5e5c;
          *(undefined1 *)((int)puVar4 + 10) = 0;
          *puVar5 = 0x35;
          iVar3 = puVar4[1];
          *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
          *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar3 = puVar4[1];
          *(undefined4 *)(iVar3 + 2) = *puVar6;
          *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar6 + 1);
          iVar3 = puVar4[1];
          *puVar4 = &PTR_FUN_007e5370;
          *(int *)(iVar3 + 0xe) = piVar1[6];
          *(short *)(iVar3 + 0x12) = (short)piVar1[7];
          *(undefined1 *)(puVar4[1] + 0x14) = 1;
          *(undefined1 *)(puVar4[1] + 0x15) = 0;
          *(undefined4 *)(puVar4[1] + 0x16) = 0;
          iVar3 = puVar4[1];
          *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_12,uVar2);
          *(undefined2 *)(iVar3 + 0x1e) = uStack_10;
        }
        uStack_4 = 0xffffffff;
        FUN_00565c50(puVar4);
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


