// FUN_005174f0 @ 5174f0 size=147

undefined4 __fastcall FUN_005174f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  cVar4 = (**(code **)(*(int *)(param_1 + 0x22e) + 8))();
  if (cVar4 != '\0') {
    iVar5 = 0;
    iVar1 = DAT_00ab27b4 + *(int *)(param_1 + 0xc) * 0x4b2;
    if (0 < *(int *)(DAT_00ab27b4 + 0x290 + *(int *)(param_1 + 0xc) * 0x4b2)) {
      iVar6 = 0;
      do {
        iVar2 = DAT_00ab27b4 + *(int *)(iVar6 + *(int *)(iVar1 + 0x298)) * 0x4b2;
        iVar3 = *(int *)(iVar2 + 0x254);
        if ((iVar3 != 8) && (iVar3 != 9)) {
          cVar4 = FUN_00517740(iVar2);
          if (cVar4 != '\0') {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < *(int *)(iVar1 + 0x290));
    }
  }
  return 0;
}


