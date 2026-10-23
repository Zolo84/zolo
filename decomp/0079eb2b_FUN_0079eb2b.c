// FUN_0079eb2b @ 79eb2b size=843

int FUN_0079eb2b(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_c;
  int local_8;
  
  sVar3 = FUN_0079c11f(0x30);
  piVar5 = (int *)FUN_007a10f1(param_4,0,1);
  cVar2 = FUN_007a1c0a(param_3);
  puVar9 = param_1;
  if (cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    sVar4 = FUN_0079c11f(0x2b);
    if (*(short *)(param_2 + 6) == sVar4) {
      *param_1 = 0x2b;
    }
    else {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      sVar4 = FUN_0079c11f(0x2d);
      if (*(short *)(param_2 + 6) != sVar4) goto LAB_0079ebb0;
      *param_1 = 0x2d;
    }
    FUN_007a06e5();
    puVar9 = param_1 + 1;
  }
LAB_0079ebb0:
  bVar1 = false;
  cVar2 = FUN_007a1c0a(param_3);
  if (cVar2 == '\0') {
    do {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_2 + 6) != sVar3) break;
      bVar1 = true;
      FUN_007a06e5();
      cVar2 = FUN_007a1c0a(param_3);
    } while (cVar2 == '\0');
    if (bVar1) {
      *puVar9 = 0x30;
      puVar9 = puVar9 + 1;
    }
  }
  local_c = 0;
  local_8 = 0;
  while( true ) {
    cVar2 = FUN_007a1c0a(param_3);
    if (cVar2 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar6 = FUN_007a5796(*(undefined2 *)(param_2 + 6));
    *puVar9 = (char)uVar6;
    cVar2 = FUN_0079bcb2(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (local_c < 0x24) {
      puVar9 = puVar9 + 1;
      local_c = local_c + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    bVar1 = true;
    FUN_007a06e5();
  }
  cVar2 = FUN_007a1c0a(param_3);
  if (cVar2 == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    sVar4 = (**(code **)(*piVar5 + 4))();
    if (*(short *)(param_2 + 6) == sVar4) {
      puVar7 = (undefined4 *)FUN_007a9a85();
      *puVar9 = *(undefined1 *)*puVar7;
      puVar9 = puVar9 + 1;
      FUN_007a06e5();
    }
  }
  if (local_c == 0) {
    while( true ) {
      cVar2 = FUN_007a1c0a(param_3);
      if (cVar2 != '\0') break;
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_2 + 6) != sVar3) break;
      local_8 = local_8 + -1;
      bVar1 = true;
      FUN_007a06e5();
    }
    if (local_8 < 0) {
      *puVar9 = 0x30;
      puVar9 = puVar9 + 1;
      local_8 = local_8 + 1;
    }
  }
  while( true ) {
    cVar2 = FUN_007a1c0a(param_3);
    if (cVar2 != '\0') break;
    if (*(char *)(param_2 + 4) == '\0') {
      Peek();
    }
    uVar6 = FUN_007a5796(*(undefined2 *)(param_2 + 6));
    *puVar9 = (char)uVar6;
    cVar2 = FUN_0079bcb2(uVar6,param_4);
    if (cVar2 == '\0') break;
    if (local_c < 0x24) {
      puVar9 = puVar9 + 1;
      local_c = local_c + 1;
    }
    bVar1 = true;
    FUN_007a06e5();
  }
  if (bVar1) {
    cVar2 = FUN_007a1c0a(param_3);
    bVar1 = true;
    puVar10 = puVar9;
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 4) == '\0') {
        Peek();
      }
      sVar4 = FUN_0079c11f(0x65);
      if (*(short *)(param_2 + 6) != sVar4) {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        sVar4 = FUN_0079c11f(0x45);
        if (*(short *)(param_2 + 6) != sVar4) goto LAB_0079ee62;
      }
      *puVar9 = 0x65;
      puVar10 = puVar9 + 1;
      FUN_007a06e5();
      bVar1 = false;
      iVar8 = 0;
      cVar2 = FUN_007a1c0a(param_3);
      if (cVar2 == '\0') {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        sVar4 = FUN_0079c11f(0x2b);
        if (*(short *)(param_2 + 6) == sVar4) {
          *puVar10 = 0x2b;
        }
        else {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          sVar4 = FUN_0079c11f(0x2d);
          if (*(short *)(param_2 + 6) != sVar4) goto LAB_0079edd0;
          *puVar10 = 0x2d;
        }
        puVar10 = puVar9 + 2;
        FUN_007a06e5();
      }
LAB_0079edd0:
      cVar2 = FUN_007a1c0a(param_3);
      if (cVar2 == '\0') {
        do {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          if (*(short *)(param_2 + 6) != sVar3) break;
          bVar1 = true;
          FUN_007a06e5();
          cVar2 = FUN_007a1c0a(param_3);
        } while (cVar2 == '\0');
        if (bVar1) {
          *puVar10 = 0x30;
          puVar10 = puVar10 + 1;
        }
      }
      while( true ) {
        cVar2 = FUN_007a1c0a(param_3);
        if (cVar2 != '\0') break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        uVar6 = FUN_007a5796(*(undefined2 *)(param_2 + 6));
        *puVar10 = (char)uVar6;
        cVar2 = FUN_0079bcb2(uVar6,param_4);
        if (cVar2 == '\0') break;
        if (iVar8 < 8) {
          puVar10 = puVar10 + 1;
          iVar8 = iVar8 + 1;
        }
        bVar1 = true;
        FUN_007a06e5();
      }
    }
LAB_0079ee62:
    if (bVar1) goto LAB_0079ee6b;
  }
  puVar10 = param_1;
LAB_0079ee6b:
  *puVar10 = 0;
  return local_8;
}


