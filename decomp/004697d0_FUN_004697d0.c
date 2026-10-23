// FUN_004697d0 @ 4697d0 size=330

undefined4 __fastcall FUN_004697d0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int *local_8;
  undefined4 local_4;
  
  local_4 = 0xa4;
  local_c = -100000;
  local_8 = &DAT_0089cad8;
  do {
    iVar1 = *local_8;
    if (iVar1 != 0) {
      FUN_005885d0();
      iVar3 = __ftol();
      iVar4 = FUN_0044d810();
      iVar5 = FUN_0044d810();
      uVar6 = iVar5 - iVar4 >> 0x1f;
      iVar3 = iVar3 + ((iVar5 - iVar4 ^ uVar6) - uVar6) * 0x96;
      cVar2 = FUN_0044d840();
      if (cVar2 == '\0') {
LAB_00469862:
        cVar2 = FUN_0044d840();
        if (cVar2 != '\0') {
          cVar2 = FUN_0044d840();
          if (cVar2 != '\0') {
            iVar3 = iVar3 + -3000;
          }
        }
      }
      else {
        cVar2 = FUN_0044d840();
        if (cVar2 != '\0') goto LAB_00469862;
        iVar3 = iVar3 + 500;
      }
      if (*(char *)(*(int *)(param_1 + 0x12da) + (*(int *)(iVar1 + 6) + 1) * 0x2c) != '\0') {
        iVar4 = FUN_00527b40();
        iVar3 = iVar3 + 1000 + iVar4;
      }
      if (*(char *)(*(int *)(iVar1 + 6) + 0xe8d6 + param_1) == '\0') {
        cVar2 = FUN_004a0a80();
        if (cVar2 == '\0') {
          iVar3 = iVar3 + -3000;
        }
        else {
          iVar3 = iVar3 + -0x5dc;
        }
      }
      iVar4 = FUN_006b5820(*(undefined4 *)(iVar1 + 6));
      iVar3 = iVar3 + iVar4 * 0x1e;
      if (local_c < iVar3) {
        local_4 = *(undefined4 *)(iVar1 + 6);
        local_c = iVar3;
      }
    }
    local_8 = local_8 + 1;
    if (0x89d037 < (int)local_8) {
      return local_4;
    }
  } while( true );
}


