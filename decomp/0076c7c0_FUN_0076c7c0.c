// FUN_0076c7c0 @ 76c7c0 size=136

void __fastcall FUN_0076c7c0(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined2 *puVar5;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 0x167d0);
  local_4 = param_1;
  while (piVar2 != (int *)0x0) {
    piVar4 = (int *)piVar2[2];
    iVar1 = *piVar2;
    piVar2 = piVar4;
    if ((&DAT_0089cad8)[*(int *)(iVar1 + 200)] != 0) {
      piVar4 = (int *)(**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(iVar1 + 200)] + 0x3662) + 0x28)
                      )((short)&local_4,(short)iVar1);
      if (*piVar4 == 0) {
        FUN_0078eab0((short)iVar1);
        puVar5 = (undefined2 *)FUN_00447250();
        piVar4 = (int *)FUN_0048c9c0(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
        cVar3 = (**(code **)(*piVar4 + 0x24))();
        if (cVar3 != '\0') {
          *(undefined1 *)(iVar1 + 0xdc) = 1;
        }
      }
    }
  }
  return;
}


