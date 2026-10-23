// FUN_006fe220 @ 6fe220 size=425

void __fastcall FUN_006fe220(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *(int *)(param_1 + 0x2c);
  local_c = *(int *)(param_1 + 0x30);
  local_8 = *(int *)(param_1 + 0x14) + local_10;
  local_4 = *(int *)(param_1 + 0x34) + local_c;
  FUN_004045f0(&local_10);
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x30) + -2;
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3e);
  FUN_004012e0(iVar1 + -2,iVar3,iVar2 + 1 + iVar1,iVar3);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x30) + -1;
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3c);
  FUN_004012e0(iVar2 + -1,iVar1,iVar3 + iVar2,iVar1);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x14) + 1 + *(int *)(param_1 + 0x2c);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3e);
  FUN_004012e0(iVar1,iVar2 + -2,iVar1,iVar3 + 1 + iVar2);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x14) + 2 + *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3c);
  FUN_004012e0(iVar1,iVar3 + -2,iVar1,iVar2 + 2 + iVar3);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x30) + 1 + *(int *)(param_1 + 0x34);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3e);
  FUN_004012e0(iVar3 + 1 + iVar2,iVar1,iVar2,iVar1);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x30) + 2 + *(int *)(param_1 + 0x34);
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3c);
  FUN_004012e0(iVar3 + 2 + iVar2,iVar1,iVar2 + -1,iVar1);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x2c) + -2;
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3e);
  FUN_004012e0(iVar3,iVar2 + 2 + iVar1,iVar3,iVar1 + -2);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x2c) + -1;
  *(undefined2 *)(*(int *)(param_1 + 0xc) + 0x25a) = *(undefined2 *)(param_1 + 0x3c);
  FUN_004012e0(iVar3,iVar2 + 2 + iVar1,iVar3,iVar1 + -1);
  return;
}


