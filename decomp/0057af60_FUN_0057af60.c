// FUN_0057af60 @ 57af60 size=564

undefined4 * __fastcall FUN_0057af60(undefined4 *param_1)

{
  LPVOID *ppv;
  int *piVar1;
  HRESULT HVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c89d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057f0c0();
  local_4 = 0;
  param_1[0xe1] = 0;
  FUN_007a8800(param_1 + 0xec,0x3e,0x20,&LAB_0057b1d0,&LAB_0057b1f0);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007ead80;
  CoInitialize((LPVOID)0x0);
  ppv = (LPVOID *)(param_1 + 0x2f1);
  HVar2 = CoCreateInstance((IID *)&DAT_007fecf0,(LPUNKNOWN)0x0,1,(IID *)&DAT_007fed00,ppv);
  param_1[0xa2] = HVar2;
  if (HVar2 < 0) {
    ExceptionList = local_c;
    return param_1;
  }
  HVar2 = CoCreateInstance((IID *)&DAT_007fec30,(LPUNKNOWN)0x0,1,(IID *)&DAT_007fec40,
                           (LPVOID *)(param_1 + 0x2f2));
  param_1[0xa2] = HVar2;
  piVar1 = *ppv;
  if (HVar2 < 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    ExceptionList = local_c;
    return param_1;
  }
  if (piVar1 == (int *)0x0) {
LAB_0057b172:
    FUN_0057c550();
    *(undefined1 *)(param_1 + 0xde) = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x37b) = 0;
    param_1[0x2f3] = 0;
    *(undefined1 *)((int)param_1 + 0x37a) = 0;
    param_1[0xdf] = 0;
    param_1[0xe2] = 0;
    param_1[0xe6] = 0;
    param_1[0xe5] = 0;
    param_1[0xe4] = 0;
    param_1[0xe3] = 0;
    param_1[0xea] = 0;
    param_1[0xe9] = 0;
    param_1[0xe8] = 0;
    param_1[0xe7] = 0;
    param_1[1] = 0;
    puVar3 = param_1 + 0xe;
    iVar5 = 8;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 0x14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = param_1 + 0xee;
    iVar5 = 0x20;
    do {
      puVar3[-2] = 0;
      *puVar3 = 0x10;
      puVar3[2] = 0;
      puVar3[5] = 0xffffffff;
      puVar3[8] = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 0x3e);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1[0x2dc] = 1;
    param_1[0xe3] = 0;
    param_1[0xe4] = 0;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0;
    param_1[0x2de] = 0x41;
    (**(code **)(*(int *)*ppv + 0x7c))(*ppv,param_1 + 0x2dd,0);
    puVar3 = param_1 + 0xc3;
    puVar4 = param_1 + 0xa3;
    iVar5 = 0x20;
    do {
      *puVar4 = 0;
      *(undefined2 *)puVar3 = 0;
      puVar4 = puVar4 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = param_1 + 0xd3;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_00bd0558 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    if (DAT_00bd0558 != (HANDLE)0x0) {
      DAT_00bd0554 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      if (DAT_00bd0554 != (HANDLE)0x0) goto LAB_0057b172;
      CloseHandle(DAT_00bd0558);
      DAT_00bd0558 = (HANDLE)0x0;
    }
    piVar1 = *ppv;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)param_1[0x2f2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    CoUninitialize();
    param_1[0xa2] = 0;
  }
  ExceptionList = local_c;
  return param_1;
}


