// FUN_0040cb20 @ 40cb20 size=99

void __fastcall FUN_0040cb20(int *param_1)

{
  if ((char)param_1[0x3d] == '\0') {
    (**(code **)(*param_1 + 0x38))(*(int *)((int)param_1 + 0x4e) + -1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 2;
    *(undefined1 *)((int)param_1 + 0x67) = 0;
  }
  if ((char)param_1[0x25] != '\0') {
    FUN_0040fd60(param_1,0x15e,0);
    FUN_0040fd60(param_1,0x5a,1);
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  return;
}


