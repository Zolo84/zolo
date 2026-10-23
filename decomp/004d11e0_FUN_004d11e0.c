// FUN_004d11e0 @ 4d11e0 size=195

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004d11e0(int param_1,float param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar2 = 1;
    if (1 < DAT_00877690) {
      piVar4 = (int *)(param_1 + 0x46);
      do {
        *piVar4 = iVar2;
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar2 < DAT_00877690);
    }
    DAT_008effac = *(undefined4 *)(param_1 + 0xc);
    FUN_007a78e3(param_1 + 0x46,DAT_00877690 + -1,4,&LAB_004d12b0);
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  param_2 = param_2 * _DAT_007e543c;
  iVar3 = DAT_00877690 >> 1;
  *param_3 = iVar3;
  iVar2 = DAT_00877690 >> 2;
  fVar5 = (float10)FUN_0044a9c0(*(undefined4 *)(param_1 + 0xc),
                                *(undefined4 *)(param_1 + 0x42 + iVar3 * 4));
  for (; 1 < iVar2; iVar2 = iVar2 >> 1) {
    iVar3 = *param_3;
    iVar1 = iVar2;
    if ((float10)param_2 < fVar5) {
      iVar1 = -iVar2;
    }
    *param_3 = iVar3 + iVar1;
    fVar5 = (float10)FUN_0044a9c0(*(undefined4 *)(param_1 + 0xc),
                                  *(undefined4 *)(param_1 + 0x42 + (iVar3 + iVar1) * 4));
  }
  return param_1 + 0x46;
}


