// FUN_0069b360 @ 69b360 size=124

undefined4 __thiscall FUN_0069b360(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    piVar2 = (int *)(param_1 + 0x50 + iVar1 * 4);
    do {
      if (*(float *)(*(int *)(param_2 + 0x40) + 0x44) <= *(float *)(*(int *)(*piVar2 + 0x40) + 0x44)
         ) break;
      piVar2[1] = *piVar2;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (0 < iVar1);
  }
  if (iVar1 < 2) {
    *(int *)(param_1 + 0x54 + iVar1 * 4) = param_2;
    uVar3 = 1;
    if (*(undefined4 **)(param_1 + 0x5c) == (undefined4 *)0x0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(char *)(param_1 + 100) == '\0') {
      *(undefined1 *)(param_1 + 100) = 1;
      FUN_006adfb0(1,0);
    }
  }
  return uVar3;
}


