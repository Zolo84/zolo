// FUN_004b8eb0 @ 4b8eb0 size=57

uint __fastcall FUN_004b8eb0(int param_1)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x74) != 1) {
LAB_004b8eb9:
    return (uint)in_EAX & 0xffffff00;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
  if (*(int **)(iVar1 + 4) != (int *)0x0) {
    piVar2 = *(int **)(iVar1 + 4);
    do {
      in_EAX = (int *)piVar2[2];
      if (*(int *)(*piVar2 + 0xc) == *(int *)(*(int *)(param_1 + 0x78) + 0x12)) goto LAB_004b8eb9;
      piVar2 = in_EAX;
    } while (in_EAX != (int *)0x0);
  }
  return 1;
}


