// FUN_00747770 @ 747770 size=175

void __thiscall FUN_00747770(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (*(int *)(param_1 + 0x74) != 0) {
    DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x68),0xffffffff);
    if (DVar3 != 0) {
      GetLastError();
      FUN_0074bc80(s_WaitForSingleObject__mutex__INFI_0087460c,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x80);
    }
    iVar1 = **(int **)(param_1 + 0x70);
    piVar2 = (int *)**(int **)(param_1 + 0x70);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_00796cd8(piVar2);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    BVar4 = ReleaseMutex(*(HANDLE *)(param_1 + 0x68));
    if (BVar4 == 0) {
      FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                   s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
    }
  }
  *param_2 = uVar6;
  param_2[1] = uVar5;
  return;
}


