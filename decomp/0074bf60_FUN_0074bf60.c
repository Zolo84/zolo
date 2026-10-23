// FUN_0074bf60 @ 74bf60 size=378

int * __thiscall FUN_0074bf60(int *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined **local_44 [3];
  uint local_38 [2];
  char local_30;
  int *local_2c;
  void *local_28;
  int local_24 [2];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007df793;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_18 = param_1;
  local_30 = FUN_007428a0();
  local_8 = 0;
  uVar5 = 0;
  local_2c = param_1;
  if (local_30 != '\0') {
    FUN_0074c2a0(local_24);
    local_8._0_1_ = 1;
    FUN_00798acc();
    local_8._0_1_ = 2;
    uVar2 = FUN_0074c210();
    piVar3 = (int *)FUN_00799548(uVar2,1);
    if (piVar3 == (int *)0x0) {
      cVar1 = FUN_0079959e();
      if (cVar1 == '\0') {
        param_2 = s_missing_locale_facet_0087486c;
        FUN_007a982d(&param_2);
        local_44[0] = &PTR_FUN_0080014c;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_44,&DAT_00826e30);
      }
      piVar3 = DAT_00d4c24c;
      if (DAT_00d4c24c == (int *)0x0) {
        local_28 = operator_new(8);
        local_8._0_1_ = 3;
        if (local_28 == (void *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0074c570(0);
        }
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_0074dba0(uVar2);
        DAT_00d4c24c = piVar3;
      }
    }
    local_8._0_1_ = 1;
    FUN_00798b68();
    local_8._0_1_ = 0;
    if ((local_24[0] != 0) && (puVar4 = (undefined4 *)FUN_0074c240(), puVar4 != (undefined4 *)0x0))
    {
      (**(code **)*puVar4)(1);
    }
    iVar6 = *param_1;
    local_8 = CONCAT31(local_8._1_3_,4);
    if (param_1 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar6 + 4) + (int)param_1;
    }
    local_28 = (void *)(CONCAT31((int3)((uint)*(undefined4 *)
                                               (*(int *)(iVar6 + 4) + 0xc + (int)param_1) >> 8),
                                 *(undefined1 *)(*(int *)(iVar6 + 4) + 0x30 + (int)param_1)) & 0xeff
                       );
    local_38[0] = local_38[0] & 0xffffff00;
    (**(code **)(*piVar3 + 0x14))
              (local_38,local_38[0],*(undefined4 *)((int)param_1 + *(int *)(iVar6 + 4) + 0x28),iVar7
               ,local_28,param_2);
    uVar5 = local_1c;
    if ((char)local_38[0] != '\0') {
      local_1c = 4;
      piVar3 = (int *)FUN_0074c0db();
      return piVar3;
    }
  }
  local_8 = 0;
  if (uVar5 != 0) {
    uVar5 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar5;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_00798ed3(uVar5,0);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_007994bd();
  if ((cVar1 == '\0') &&
     (iVar6 = *(int *)(*param_1 + 4), (*(byte *)((int)param_1 + iVar6 + 0xc) & 2) != 0)) {
    uVar5 = 0;
    if (((*(byte *)((int)param_1 + iVar6 + 4) & 6) == 0) &&
       (iVar6 = (**(code **)(**(int **)((int)param_1 + iVar6 + 0x28) + 0x2c))(), iVar6 == -1)) {
      uVar5 = 4;
    }
    if (uVar5 != 0) {
      uVar5 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uVar5;
      if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
        uVar5 = uVar5 | 4;
      }
      FUN_00798ed3(uVar5,0);
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


