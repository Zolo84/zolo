// FUN_0075a150 @ 75a150 size=184

int __fastcall FUN_0075a150(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined2 *puVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    piVar5 = &DAT_00d4c3fe;
    do {
      iVar1 = *piVar5;
joined_r0x0075a16e:
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        piVar3 = (int *)FUN_00642470(*(undefined2 *)(param_1 + 0xc),
                                     (short)((uint)*(undefined4 *)(param_1 + 0xe) >> 0x10));
        cVar2 = (**(code **)(*piVar3 + 0x24))();
        if (cVar2 == '\0') goto code_r0x0075a19b;
        goto LAB_0075a1bf;
      }
      piVar5 = piVar5 + 0x15;
    } while ((int)piVar5 < 0xd4c6f2);
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  return param_1 + 0x82;
code_r0x0075a19b:
  piVar3 = (int *)FUN_00642480(*(undefined2 *)(param_1 + 0xc),
                               (short)((uint)*(undefined4 *)(param_1 + 0xe) >> 0x10));
  cVar2 = (**(code **)(*piVar3 + 0x24))();
  if (cVar2 != '\0') {
LAB_0075a1bf:
    puVar4 = (undefined2 *)FUN_0044df10();
    FUN_004739f0(*puVar4,(short)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10));
  }
  goto joined_r0x0075a16e;
}


