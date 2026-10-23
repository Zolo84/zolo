// FUN_0044b590 @ 44b590 size=124

int __fastcall FUN_0044b590(int param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1 + 0x12e2) + 0x10))();
  iVar2 = 1;
  do {
    if (((&DAT_0089cad8)[iVar2] != 0) && (iVar2 != *(int *)(param_1 + 6))) {
      if ((iVar2 != 0x157) && (*(int *)(param_1 + 6) != 0x157)) {
        cVar1 = FUN_005861e0(iVar2);
        if ((cVar1 != '\0') || (*(char *)(*(int *)(param_1 + 0x12da) + iVar2 * 0x2c + 0x2c) == '\0')
           ) goto LAB_0044b5fd;
      }
      FUN_00459f50(iVar2);
    }
LAB_0044b5fd:
    iVar2 = iVar2 + 1;
    if (0x157 < iVar2) {
      return param_1 + 0x12e2;
    }
  } while( true );
}


