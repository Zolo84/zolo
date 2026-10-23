// FUN_0076c850 @ 76c850 size=147

void __thiscall FUN_0076c850(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined2 *puVar7;
  
  iVar4 = param_2;
  piVar3 = *(int **)(param_1 + 0x167d0);
  while (piVar3 != (int *)0x0) {
    piVar6 = (int *)piVar3[2];
    iVar1 = *piVar3;
    iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 200)];
    piVar3 = piVar6;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 6) == iVar4)) {
      piVar6 = (int *)(**(code **)(*(int *)(iVar2 + 0x3662) + 0x28))((short)&param_2,(short)iVar1);
      if (*piVar6 == 0) {
        FUN_0078eab0((short)iVar1);
        puVar7 = (undefined2 *)FUN_00447250();
        piVar6 = (int *)FUN_0048c9c0(*puVar7,(short)((uint)*(undefined4 *)(puVar7 + 1) >> 0x10));
        cVar5 = (**(code **)(*piVar6 + 0x24))();
        if (cVar5 != '\0') {
          *(undefined1 *)(iVar1 + 0xdc) = 1;
        }
      }
    }
  }
  return;
}


