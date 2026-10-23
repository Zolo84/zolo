// thunk_FUN_006ad200 @ 6adf00 size=5

undefined4 thunk_FUN_006ad200(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_00d12700;
  do {
    iVar2 = *(int *)(puVar3 + 4);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_00796cd8(iVar2);
      iVar2 = iVar1;
    }
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3 = puVar3 + 0x12;
  } while ((int)puVar3 < 0xd1299a);
  return 1;
}


