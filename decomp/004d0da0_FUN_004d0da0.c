// FUN_004d0da0 @ 4d0da0 size=613

undefined4 __thiscall FUN_004d0da0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007bf488;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    while (iVar2 = FUN_00535490(), iVar2 != 1) {
      if (iVar2 == 2) {
        while (local_1c != (int *)0x0) {
          piVar5 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar5;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar5 = (int *)FUN_00534391();
      if (*piVar5 == 4) {
        FUN_005343dc();
        if (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0x14)) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
        }
        while (local_1c != (int *)0x0) {
          piVar5 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar5;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar5 = local_1c;
    piVar3 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar2 = param_2[1];
      for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar5,iVar2);
        if (cVar1 != '\0') {
          if (piVar5 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar2 = param_2[1];
      piVar3 = operator_new(0xe);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar2;
        piVar3[1] = (int)local_18;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = local_14 + 1;
      bVar6 = local_14 != 0;
      piVar5 = piVar3;
      local_14 = iVar2;
      if (bVar6) {
        local_18[2] = (int)piVar3;
        piVar5 = local_1c;
      }
    }
    local_18 = piVar3;
    local_1c = piVar5;
    iVar2 = param_2[1];
    if (iVar2 < 0x23d) {
      if (iVar2 == 0x23c) {
        fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x10) = (float)fVar7;
      }
      else if (iVar2 == 0xf4) {
        uVar4 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      else if (iVar2 == 0x141) {
        iVar2 = FUN_004f55b0(param_2 + 0x103);
        *(int *)(param_1 + 0x18) = iVar2;
        if (iVar2 == 0) {
          FUN_00429a00(s_ERROR___Invalid_building_type____008474b4,param_2 + 0x104,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
    }
    else if (iVar2 == 0x23d) {
      fVar7 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x14) = (float)fVar7;
    }
    else if (iVar2 == 0x523) {
      FUN_00427ed0(param_2);
    }
  } while( true );
}


