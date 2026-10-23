// FUN_0042a015 @ 42a015 size=233

char * __thiscall FUN_0042a015(int param_1,int param_2)

{
  char *pcVar1;
  undefined1 local_804 [1024];
  undefined1 local_404 [1024];
  
  if (param_2 == *(int *)(param_1 + 0x14)) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  else if (*(int *)(param_1 + 0x14) < param_2) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_007a630a(local_404,s_Unable_to_find_string_for_id___d_0083a760,param_2);
      FUN_00405ad0(local_404);
      pcVar1 = s_UNKNOWN_STRING_WANTED_0083a784;
    }
    else {
      pcVar1 = (char *)(**(code **)**(undefined4 **)(param_1 + 0x10))(param_2);
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    FUN_007a630a(local_804,s_Unable_to_find_string_for_id___d_0083a79c,param_2);
    FUN_00405ad0(local_804);
    pcVar1 = s_UNKNOWN_STRING_WANTED_0083a7c0;
  }
  else {
    pcVar1 = (char *)(**(code **)**(undefined4 **)(param_1 + 0xc))(param_2);
  }
  return pcVar1;
}


