// FUN_0057b790 @ 57b790 size=987

undefined4 __thiscall FUN_0057b790(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_108 [66];
  
  if (*(int *)(param_1 + 0xbc4) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xb74);
    puVar4 = puVar1;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *puVar1 = 0x50;
    *(undefined4 *)(param_1 + 0xb78) = 0x40;
    *(undefined4 *)(param_1 + 0xb8c) = DAT_00857220;
    *(undefined4 *)(param_1 + 0xb90) = DAT_00857224;
    *(undefined4 *)(param_1 + 0xb94) = DAT_00857228;
    uVar2 = DAT_0085722c;
    *(undefined4 *)(param_1 + 0xb9c) = 0x20;
    *(undefined4 *)(param_1 + 0xb98) = uVar2;
    puVar4 = &DAT_00893640;
    puVar6 = local_108;
    for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 0xbb4) = local_108[1];
    puVar4 = &DAT_00893640;
    puVar6 = local_108;
    for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 3000) = local_108[0];
    if (param_2 == 0) {
      *(undefined **)(param_1 + 0xba4) = &DAT_00857230;
    }
    else {
      *(int *)(param_1 + 0xba4) = param_2;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x60))
                      (*(int **)(param_1 + 0xbc4),puVar1,0x82);
    *(int *)(param_1 + 0x3ac) = iVar3;
    if (iVar3 < 0) {
      if (iVar3 < -0x7788fed3) {
        if (iVar3 != -0x7788fed4) {
          if (-0x7788ff88 < iVar3) {
            switch(iVar3) {
            case -0x7788ff7e:
            case -0x7788ff6a:
            case -0x7788ff65:
            case -0x7788ff60:
            case -0x7788ff56:
            case -0x7788ff42:
            case -0x7788ff38:
            case -0x7788ff2e:
            case -0x7788ff24:
            case -0x7788ff1a:
            case -0x7788ff10:
            case -0x7788ff06:
            case -0x7788fef2:
            case -0x7788fee8:
            case -0x7788fede:
              goto switchD_0057b93d_caseD_8877001e;
            default:
              goto switchD_0057b93d_caseD_8877001f;
            }
          }
          if (iVar3 != -0x7788ff88) {
            if (-0x7788ffec < iVar3) {
              switch(iVar3) {
              case -0x7788ffe2:
              case -0x7788ffd8:
              case -0x7788ffce:
              case -0x7788ffc4:
              case -0x7788ffba:
              case -0x7788ffb0:
              case -0x7788ffa6:
                goto switchD_0057b93d_caseD_8877001e;
              default:
                goto switchD_0057b93d_caseD_8877001f;
              }
            }
            if (iVar3 != -0x7788ffec) {
              if (iVar3 < -0x7ff8fff1) {
                if (iVar3 != -0x7ff8fff2) {
                  if (iVar3 < -0x7fffbffd) {
                    if (iVar3 == -0x7fffbffe) {
                      return 0;
                    }
                    if (iVar3 == -0x7ffffff6) {
                      return 0;
                    }
                    if (iVar3 == -0x7fffbfff) {
                      return 0;
                    }
                  }
                  else if (iVar3 == -0x7fffbffb) {
                    return 0;
                  }
                  goto switchD_0057b93d_caseD_8877001f;
                }
              }
              else if ((iVar3 != -0x7ff8ffa9) && (iVar3 != -0x7788fffb)) {
                if (iVar3 == -0x7788fff6) {
                  return 0;
                }
                goto switchD_0057b93d_caseD_8877001f;
              }
            }
          }
        }
      }
      else if (iVar3 < -0x7788fbf9) {
        if (iVar3 != -0x7788fbfa) {
          if (iVar3 < -0x7788fe83) {
            if (iVar3 != -0x7788fe84) {
              switch(iVar3) {
              case -0x7788feca:
              case -0x7788fec0:
              case -0x7788feb6:
              case -0x7788feac:
              case -0x7788fea2:
              case -0x7788fe98:
              case -0x7788fe8e:
                break;
              default:
                goto switchD_0057b93d_caseD_8877001f;
              }
            }
          }
          else if (iVar3 < -0x7788fe5b) {
            if (((iVar3 != -0x7788fe5c) && (iVar3 != -0x7788fe7a)) && (iVar3 != -0x7788fe70)) {
              if (iVar3 == -0x7788fe66) {
                return 0;
              }
switchD_0057b93d_caseD_8877001f:
              *(undefined4 *)(param_1 + 0x288) = 0;
              return 0;
            }
          }
          else if ((iVar3 != -0x7788fc18) && (iVar3 != -0x7788fc0e)) {
            if (iVar3 == -0x7788fc04) {
              return 0;
            }
            goto switchD_0057b93d_caseD_8877001f;
          }
        }
      }
      else {
        if (-0x7788f826 < iVar3) {
          switch(iVar3) {
          case -0x7788f81c:
          case -0x7788f812:
          case -0x7788f808:
          case -0x7788f7fe:
          case -0x7788f7f4:
          case -0x7788f7ea:
          case -0x7788f7e0:
            goto switchD_0057b93d_caseD_8877001e;
          default:
            goto switchD_0057b93d_caseD_8877001f;
          }
        }
        if (iVar3 != -0x7788f826) {
          if (iVar3 < -0x7788fbc7) {
            if (((iVar3 != -0x7788fbc8) && (iVar3 != -0x7788fbf0)) && (iVar3 != -0x7788fbe6)) {
              if (iVar3 == -0x7788fbd2) {
                return 0;
              }
              goto switchD_0057b93d_caseD_8877001f;
            }
          }
          else if ((iVar3 != -0x7788fbbe) && (iVar3 != -0x7788fbb4)) {
            if (iVar3 == -0x7788f830) {
              return 0;
            }
            goto switchD_0057b93d_caseD_8877001f;
          }
        }
      }
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xbc4) + 0x18))
                        (*(int **)(param_1 + 0xbc4),param_1 + 0x380,&stack0xfffffedc,DAT_00bd0558,0,
                         0,0);
      if (iVar3 == 0) {
        piVar5 = (int *)(param_1 + 0x3c0);
        iVar3 = 0x20;
        do {
          piVar5[-4] = 0;
          piVar5[-2] = 0x10;
          if (*piVar5 != 0) {
            FUN_00796cd8(*piVar5);
            *piVar5 = 0;
          }
          piVar5[3] = -1;
          piVar5 = (int *)((int)piVar5 + 0x3e);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(undefined4 *)(param_1 + 0x374) = 0;
        *(undefined1 *)(param_1 + 0x37a) = 1;
        *(undefined1 *)(param_1 + 0x37b) = 1;
        return 1;
      }
      (**(code **)(**(int **)(param_1 + 0xbc4) + 0x10))(*(int **)(param_1 + 0xbc4));
    }
  }
switchD_0057b93d_caseD_8877001e:
  return 0;
}


