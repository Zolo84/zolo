// FUN_00754428 @ 754428 size=409

int * __thiscall
FUN_00754428(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            undefined1 *param_7,int param_8)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  BOOL BVar7;
  undefined4 uVar8;
  
  param_1[1] = in_EAX;
  param_1[2] = DAT_00d4c214;
  *param_1 = (int)&PTR_FUN_007fa210;
  *(undefined1 *)(param_1 + 3) = *param_7;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00674710(param_7,0,DAT_007f33d8);
  param_1[8] = param_6;
  param_1[7] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_8;
  param_1[0xb] = 0;
  *param_1 = (int)&PTR_FUN_007fa2b0;
  iVar3 = FUN_0074b9e0(&stack0x00000000);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  (**(code **)(*param_1 + 4))(0xd06,uVar1);
  iVar3 = param_1[8];
  puVar5 = (undefined4 *)(iVar3 + 4);
  cVar2 = FUN_00745ec0(&DAT_00d4c210);
  if (cVar2 == '\0') {
    cVar2 = FUN_00745ec0(&DAT_00d4c210);
    if (cVar2 == '\0') {
      puVar4 = _malloc(0x1c);
      *puVar4 = 0x1c;
      if (iVar3 == 0) {
        puVar5 = &DAT_00d4c210;
      }
      puVar4[1] = *puVar5;
      puVar4[2] = puVar5[1];
      uVar8 = *(undefined4 *)(iVar3 + 4);
      puVar4[3] = uVar8;
      puVar5 = puVar4 + 6;
      puVar4[4] = *(undefined4 *)(iVar3 + 8);
      puVar4[5] = 0xe;
      FUN_007545d0(uVar1);
      FUN_00754610(uVar8,puVar5);
      FUN_007579c0(puVar4);
      FUN_007a77fa(puVar4);
    }
  }
  DVar6 = WaitForSingleObject(*(HANDLE *)(param_1[7] + 0x34),0xffffffff);
  if (DVar6 != 0) {
    GetLastError();
    FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
  }
  FUN_00755dc0();
  FUN_00755c10();
  BVar7 = ReleaseMutex(*(HANDLE *)(param_1[7] + 0x34));
  if (BVar7 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  return param_1;
}


