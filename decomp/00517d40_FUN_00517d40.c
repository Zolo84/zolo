// FUN_00517d40 @ 517d40 size=72

void __fastcall FUN_00517d40(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0051b230();
  if (*(int *)(iVar2 + 0x46a) != 0) {
    while( true ) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x2aa) + 8))();
      if (cVar1 != '\0') break;
      (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x2aa) + 4) + 0x10))();
      FUN_005088c0(*(undefined4 *)(param_1 + 0xc),param_1);
    }
  }
  FUN_0051be90();
  return;
}


