// FUN_007a0b95 @ 7a0b95 size=235

void __fastcall FUN_007a0b95(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int3 iVar7;
  int iVar6;
  
  iVar3 = FUN_007a9a85();
  uVar2 = FUN_0079c11f((int)**(char **)(iVar3 + 0x14));
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_0079c11f((int)**(char **)(iVar3 + 0x18));
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  uVar4 = FUN_0079bcd3(*(undefined4 *)(iVar3 + 0x1c),0);
  *(undefined4 *)(param_1 + 8) = uVar4;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
  }
  uVar4 = FUN_007a1aff(uVar4,0);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  if ((*(char *)(iVar3 + 0x2e) < '\0') || ('\x04' < *(char *)(iVar3 + 0x2e))) {
    puVar5 = &DAT_0088ebf8;
  }
  else {
    puVar5 = *(undefined1 **)(iVar3 + 0x20);
  }
  uVar4 = FUN_007a1aff(puVar5,0);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  if ((*(char *)(iVar3 + 0x2f) < '\0') || ('\x04' < *(char *)(iVar3 + 0x2f))) {
    puVar5 = &DAT_0083d364;
  }
  else {
    puVar5 = *(undefined1 **)(iVar3 + 0x24);
  }
  uVar4 = FUN_007a1aff(puVar5,0);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (*(char *)(param_1 + 0x28) == '\0') {
    cVar1 = *(char *)(iVar3 + 0x29);
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x28);
  }
  iVar6 = (int)cVar1;
  *(int *)(param_1 + 0x1c) = iVar6;
  if ((iVar6 < 0) || (0x7e < iVar6)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar7 = (int3)(cVar1 >> 7);
  FUN_007a0e14(param_1 + 0x20,CONCAT31(iVar7,*(undefined1 *)(iVar3 + 0x2b)),
               CONCAT31(iVar7,*(undefined1 *)(iVar3 + 0x2a)),
               CONCAT31(iVar7,*(undefined1 *)(iVar3 + 0x2e)));
  FUN_007a0e14(param_1 + 0x24,*(undefined1 *)(iVar3 + 0x2d),*(undefined1 *)(iVar3 + 0x2c),
               *(undefined1 *)(iVar3 + 0x2f));
  return;
}


