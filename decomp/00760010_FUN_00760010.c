// FUN_00760010 @ 760010 size=100

undefined4 * __thiscall FUN_00760010(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 10) = param_2;
  *param_1 = &PTR_FUN_007fa4d0;
  puVar2 = (undefined4 *)((int)param_1 + 0x2a);
  puVar3 = (undefined4 *)((int)param_1 + 0xe);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 4;
    puVar3 = puVar3 + 1;
  }
  iVar1 = 0;
  do {
    switch(iVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 0xe:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      *puVar2 = 0;
      break;
    default:
      *puVar2 = 0x3f800000;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x24);
  return param_1;
}


