// FUN_004d9300 @ 4d9300 size=95

int __thiscall FUN_004d9300(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_00877690 <= param_4) {
    param_4 = 0;
  }
  iVar2 = 0;
  piVar1 = (int *)((((int)(param_3 + (param_3 >> 0x1f & 0x7ffU)) >> 0xb) +
                   ((int)(param_2 + (param_2 >> 0x1f & 0x7ffU)) >> 0xb) * 6) * 0x800 + 6 + param_1);
  do {
    if (*piVar1 == param_4) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x200);
  return 0;
}


