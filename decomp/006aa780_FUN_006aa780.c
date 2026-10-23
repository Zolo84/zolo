// FUN_006aa780 @ 6aa780 size=573

undefined4 __thiscall FUN_006aa780(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int unaff_retaddr;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051b230();
  if ((((param_3 == (int *)0x0) || (param_2[3] == 0)) || (cVar3 = FUN_004e46e0(), cVar3 != '\0')) ||
     (*(char *)((int)param_2 + 0x17b) != '\0')) {
    uVar5 = 0;
  }
  else {
    piVar1 = (int *)param_3[1];
    uVar5 = 0;
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      if ((piVar2 != param_2) && (piVar2[3] == param_2[3])) {
        cVar3 = (**(code **)(*piVar2 + 0x2c))();
        if (cVar3 != '\0') {
          (**(code **)(*piVar2 + 0x14))();
          iVar4 = FUN_00516cc0();
          if ((0 < iVar4) && ((int *)param_2[0x7d] != (int *)0x0)) {
            (**(code **)(*(int *)param_2[0x7d] + 0x104))();
          }
        }
        if (((int *)piVar2[0x7d] != (int *)0x0) &&
           (cVar3 = (**(code **)(*(int *)piVar2[0x7d] + 0xfc))(), cVar3 != '\0')) {
          (**(code **)(*param_1 + 0x1ac))(piVar2);
        }
        FUN_00524610(0);
        (**(code **)(*param_3 + 0x18))(piVar2);
        iVar4 = *(int *)((int)param_1 + 10);
        uVar5 = (**(code **)(*param_1 + 0xf0))
                          (*(undefined4 *)((int)piVar2 + 0x1a),*(undefined4 *)(unaff_retaddr + 0x1a)
                          );
        uVar5 = (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))(*(undefined4 *)((int)param_1 + 6),uVar5);
        FUN_00458570(s__s____d___s__merges_unit___d_int_008695e8,uVar5);
        puVar6 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar7 = operator_new(0x1a);
          if (puVar7 == (undefined2 *)0x0) {
            puVar7 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar7[4] = 0;
            *(undefined4 *)(puVar7 + 5) = 0;
            puVar7[7] = 0;
            *(undefined4 *)(puVar7 + 8) = 0;
            puVar7[10] = 0;
            *(undefined4 *)(puVar7 + 0xb) = 0;
          }
          puVar6[1] = puVar7;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)((int)puVar6 + 9) = 1;
          *puVar6 = &PTR_FUN_007e63c4;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *puVar7 = 0x49;
          iVar4 = puVar6[1];
          uStack_14 = uStack_14 & 0xff000000;
          *(undefined4 *)(iVar4 + 8) = DAT_0088f230;
          *(undefined2 *)(iVar4 + 0xc) = DAT_0088f234;
          iVar4 = puVar6[1];
          *(uint *)(iVar4 + 2) = uStack_14;
          *(undefined2 *)(iVar4 + 6) = 0;
          iVar4 = puVar6[1];
          *puVar6 = &PTR_FUN_007e63a4;
          *(int *)(iVar4 + 0xe) = param_2[6];
          *(short *)(iVar4 + 0x12) = (short)param_2[7];
          iVar4 = puVar6[1];
          *(int *)(iVar4 + 0x14) = piVar2[6];
          *(short *)(iVar4 + 0x18) = (short)piVar2[7];
        }
        uStack_4 = 0xffffffff;
        FUN_00565bf0(puVar6);
        uVar5 = 1;
      }
    }
  }
  ExceptionList = local_c;
  return uVar5;
}


