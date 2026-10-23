// FUN_007579c0 @ 7579c0 size=388

void __thiscall FUN_007579c0(int param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  DWORD DVar3;
  int *piVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar2 = param_2;
  param_2 = operator_new(*param_2);
  uVar7 = *puVar2;
  puVar10 = puVar2;
  puVar11 = param_2;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar11 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar11 = (uint *)((int)puVar11 + 1);
  }
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xd0),0xffffffff);
  if (DVar3 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  piVar1 = *(int **)(param_1 + 0xd8);
  uVar7 = *puVar2;
  piVar9 = (int *)piVar1[1];
  piVar4 = operator_new(0x10);
  piVar8 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar8 = piVar4;
  }
  *piVar4 = (int)piVar8;
  if (piVar9 == (int *)0x0) {
    piVar9 = piVar4;
  }
  piVar4[1] = (int)piVar9;
  piVar1[1] = (int)piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (int)param_2;
    piVar4[3] = uVar7;
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  BVar5 = ReleaseMutex(*(HANDLE *)(param_1 + 0xd0));
  if (BVar5 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10c),0xffffffff);
  if (DVar3 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  BVar5 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0x110),1,(LPLONG)&param_2);
  if (BVar5 == 0) {
    FUN_0074bc80(s_ReleaseSemaphore_008745d8,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874508,0xbb);
  }
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  BVar5 = ReleaseMutex(*(HANDLE *)(param_1 + 0x10c));
  if (BVar5 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return;
}


