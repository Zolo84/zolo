// FUN_00588400 @ 588400 size=161

void __fastcall FUN_00588400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x138c8) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar4 = (int *)(param_1 + 0x9c74);
    do {
      iVar1 = FUN_004e9370(piVar4[-10000]);
      if (*(char *)(param_1 + 0x138c3) == '\0') {
        uVar2 = (&DAT_0089cad8)[*piVar4];
      }
      else {
        uVar2 = *(undefined4 *)(iVar1 + 0x3d4);
      }
      FUN_004e4600(uVar2);
      iVar1 = __ftol();
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x138c8) = *(int *)(param_1 + 0x138c8) + iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  if (*(char *)(param_1 + 0x138d1) != '\0') {
    *(int *)(param_1 + 0x138c8) = *(int *)(param_1 + 0x138c8) + 0x14;
  }
  if (*(char *)(param_1 + 0x138d0) != '\0') {
    *(int *)(param_1 + 0x138c8) = *(int *)(param_1 + 0x138c8) + 0x46;
  }
  if (*(char *)(param_1 + 0x138d2) != '\0') {
    *(int *)(param_1 + 0x138c8) = *(int *)(param_1 + 0x138c8) + 0x32;
  }
  return;
}


