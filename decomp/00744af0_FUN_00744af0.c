// FUN_00744af0 @ 744af0 size=374

undefined4 * __thiscall FUN_00744af0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  HANDLE pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df36b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar7 = DAT_007f33d8;
  uVar3 = param_2[2];
  uVar6 = uVar3;
  if (DAT_007f33d8 < uVar3) {
    uVar6 = DAT_007f33d8;
  }
  if (param_1 + 1 == param_2) {
    if (uVar6 != 0) {
      FUN_00798da9();
    }
    FUN_00675ee0();
    uVar3 = param_1[3] - uVar6;
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    if (uVar7 != 0) {
      FUN_007a9270(uVar6 + param_1[2],uVar6 + param_1[2] + uVar7,uVar3 - uVar7);
      iVar1 = param_1[3];
      cVar2 = FUN_00674e40(iVar1 - uVar7,0);
      if (cVar2 != '\0') {
        FUN_00674e20(iVar1 - uVar7);
      }
    }
    FUN_00675ee0();
  }
  else {
    if ((uVar6 != 0) && (uVar6 == uVar3)) {
      puVar4 = (undefined4 *)param_2[1];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_007f0c98;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        FUN_00674910(1);
        puVar4 = (undefined4 *)param_2[1];
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = &DAT_007f0c98;
        }
        param_1[2] = puVar4;
        param_1[3] = param_2[2];
        param_1[4] = param_2[3];
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_00744c18;
      }
    }
    cVar2 = FUN_00674e40(uVar6,1);
    if (cVar2 != '\0') {
      puVar4 = (undefined4 *)param_2[1];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_007f0c98;
      }
      puVar8 = (undefined4 *)param_1[2];
      for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[3] = uVar6;
      *(undefined1 *)(uVar6 + param_1[2]) = 0;
    }
  }
LAB_00744c18:
  local_4 = 0;
  *param_1 = &PTR_FUN_007fa1d8;
  pvVar5 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[5] = pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


