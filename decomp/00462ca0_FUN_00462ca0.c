// FUN_00462ca0 @ 462ca0 size=438

void __thiscall
FUN_00462ca0(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc8c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00428ee0(&param_2);
  iVar2 = (int)param_4;
  if (((iVar3 != 0) && (iVar3 != 8)) &&
     ((((param_5 < 0 ||
        ((*(char *)(iVar3 + 0x157) != '\0' && ((int)(&DAT_00dbd1a2)[(int)param_4] < 0xc)))) ||
       ((*(char *)(iVar3 + 0x158) != '\0' &&
        ((iVar1 = (&DAT_00dbd1a2)[(int)param_4], 0xb < iVar1 && ((iVar1 < 0x15 || (iVar1 == 0x8c))))
        )))) || ((*(char *)(iVar3 + 0x159) != '\0' &&
                 ((0x14 < (int)(&DAT_00dbd1a2)[(int)param_4] &&
                  ((&DAT_00dbd1a2)[(int)param_4] != 0x8c)))))))) {
    puVar4 = operator_new(0xc);
    local_4 = 0;
    param_4 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      pvVar5 = operator_new(0x26);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
        *(undefined2 *)((int)pvVar5 + 0xe) = 0;
        *(undefined4 *)((int)pvVar5 + 0x10) = 0;
      }
      FUN_0042d320(pvVar5);
      *puVar4 = &PTR_FUN_007e6514;
      *(undefined1 *)((int)puVar4 + 10) = 0;
      *(undefined2 *)puVar4[1] = 0x1fe;
      iVar3 = puVar4[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(param_1 + 8);
      puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar3 = puVar4[1];
      *(undefined4 *)(iVar3 + 2) = *puVar6;
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar6 + 1);
      iVar3 = puVar4[1];
      *puVar4 = &PTR_FUN_007e64f4;
      *(undefined4 *)(iVar3 + 0xe) = param_2;
      *(undefined2 *)(iVar3 + 0x12) = param_3;
      *(int *)(puVar4[1] + 0x14) = iVar2;
      *(int *)(puVar4[1] + 0x18) = param_5;
      *(undefined4 *)(puVar4[1] + 0x1c) = param_6;
      *(undefined4 *)(puVar4[1] + 0x20) = param_7;
      *(undefined1 *)(puVar4[1] + 0x24) = param_8;
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar4);
  }
  ExceptionList = local_c;
  return;
}


