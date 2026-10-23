// FUN_006acce0 @ 6acce0 size=314

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006acce0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  int local_a0;
  undefined4 auStack_9c [20];
  undefined4 local_4a;
  undefined4 local_46;
  
  auStack_9c[2] = 0;
  auStack_9c[1] = param_3;
  auStack_9c[3] = 0xa4;
  piVar1 = (int *)(param_1 + param_4 * 0x5c);
  FUN_0042d2d0();
  FUN_005075f0();
  local_4a = 0;
  local_46 = 0xa4;
  FUN_0042d2d0();
  FUN_005075f0();
  (**(code **)(*piVar1 + 0x30))(&local_a0);
  for (; unaff_ESI != (int *)0x0; unaff_ESI = (int *)unaff_ESI[2]) {
    local_a0 = _rand();
    if ((float)local_a0 * _DAT_007e68c0 < _DAT_007e46cc) {
      iVar3 = *unaff_ESI;
      cVar2 = FUN_0044b300(*(undefined4 *)(iVar3 + 4));
      if ((cVar2 != '\0') || (cVar2 = FUN_0044b280(*(undefined4 *)(iVar3 + 4)), cVar2 != '\0')) {
        FUN_006ac630(iVar3);
      }
    }
  }
  cVar2 = FUN_0044b300(*(undefined4 *)((int)piVar1 + 0x16));
  if ((cVar2 != '\0') || (cVar2 = FUN_0044b280(*(undefined4 *)((int)piVar1 + 0x16)), cVar2 != '\0'))
  {
    FUN_006ac630((int)piVar1 + 0x12);
  }
  puVar4 = auStack_9c;
  for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_retaddr = *puVar4;
    puVar4 = puVar4 + 1;
    unaff_retaddr = unaff_retaddr + 1;
  }
  return;
}


