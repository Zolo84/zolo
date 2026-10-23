// FUN_005e5440 @ 5e5440 size=123

int __fastcall FUN_005e5440(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  piVar5 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar5[2];
    iVar3 = *piVar5;
    if (*(int *)(*(int *)(param_1 + 100) + 0x10) == 3) {
      uVar6 = *(undefined4 *)(param_1 + 0x58);
      FUN_00522770(iVar3,uVar6);
      iVar3 = FUN_0044e580(iVar3,uVar6);
joined_r0x005e54a6:
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
    }
    else {
      cVar2 = FUN_00525660();
      if (cVar2 == '\0') {
        iVar3 = FUN_005bc744(iVar3,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(param_1 + 0x58));
        goto joined_r0x005e54a6;
      }
    }
    piVar5 = piVar1;
    if (piVar1 == (int *)0x0) {
      return iVar4;
    }
  } while( true );
}


