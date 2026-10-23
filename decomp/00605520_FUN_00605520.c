// FUN_00605520 @ 605520 size=554

undefined4 * __thiscall
FUN_00605520(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined4 uVar12;
  char cStack_13;
  char cStack_12;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfb5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f83d0(param_2,param_3,param_4);
  local_4 = 0;
  *param_1 = &PTR_FUN_007eed54;
  param_1[2] = &PTR_LAB_007eed50;
  puVar7 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_00434930(0xe0,0xaa,0,0);
    *puVar7 = &PTR_FUN_007eed0c;
    *(undefined ***)((int)puVar7 + 0x12) = &PTR_LAB_007eecf8;
    *(undefined ***)((int)puVar7 + 0x1a) = &PTR_LAB_007eecf4;
    *(undefined ***)((int)puVar7 + 0x1e) = &PTR_LAB_007eecf0;
  }
  *(undefined4 **)((int)param_1 + 0x86) = puVar7;
  *(undefined1 *)((int)puVar7 + 0x5e) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  piVar8 = DAT_00d615f6;
  if (DAT_00d615f6 == (int *)0x0) {
    ExceptionList = local_c;
    return param_1;
  }
  do {
    iVar5 = *piVar8;
    piVar8 = (int *)piVar8[2];
    iVar10 = (&DAT_0089cad8)[*(int *)(iVar5 + 0x16)];
    iVar6 = (&DAT_0089cad8)[*(int *)(iVar5 + 0x1a)];
    if ((((iVar10 != 0) && (iVar6 != 0)) && (*(int *)(iVar5 + 0x1e) == 0)) &&
       (((iVar10 == DAT_00d0ca90 || (iVar6 == DAT_00d0ca90)) &&
        ((iVar9 = FUN_005f8440(), iVar10 == iVar9 || (iVar10 = FUN_005f8440(), iVar6 == iVar10))))))
    {
      if (*(char *)(iVar5 + 0x4b) == '\0') {
        if (DAT_00877560 != '\0') {
          sVar3 = *(short *)(iVar5 + 0x26);
          sVar4 = *(short *)(DAT_00893530 + 0x18);
          cVar1 = *(char *)(DAT_00893530 + 0x16);
          cStack_12 = (char)((uint)*(undefined4 *)(iVar5 + 0x22) >> 0x10);
          cVar2 = *(char *)(DAT_00893530 + 0x15);
          cStack_13 = (char)((uint)*(undefined4 *)(iVar5 + 0x22) >> 8);
          iVar10 = __ftol();
          if (iVar10 < (((((int)sVar3 - (int)sVar4) * 0xc - (int)cVar1) + (int)cStack_12) * 0x1e -
                       (int)cVar2) + (int)cStack_13) goto LAB_006056a6;
        }
      }
      else {
LAB_006056a6:
        pvVar11 = operator_new(0x42);
        local_4._0_1_ = 2;
        if (pvVar11 == (void *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_00620ec0(iVar5);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar5 = *(int *)((int)param_1 + 0x86);
        iVar10 = *(int *)(iVar5 + 8);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = uVar12;
          puVar7[1] = iVar10;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar6 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 8) = puVar7;
        *(int *)(iVar5 + 0xc) = iVar6 + 1;
        if (iVar6 == 0) {
          *(undefined4 **)(iVar5 + 4) = puVar7;
        }
        else {
          *(undefined4 **)(iVar10 + 8) = puVar7;
        }
      }
    }
    if (piVar8 == (int *)0x0) {
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}


