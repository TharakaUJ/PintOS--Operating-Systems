/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 4779:  /* atomic_xorsi */
    case 4778:  /* atomic_orsi */
    case 4777:  /* atomic_andsi */
    case 4776:  /* atomic_xorhi */
    case 4775:  /* atomic_orhi */
    case 4774:  /* atomic_andhi */
    case 4773:  /* atomic_xorqi */
    case 4772:  /* atomic_orqi */
    case 4771:  /* atomic_andqi */
    case 4770:  /* atomic_subsi */
    case 4769:  /* atomic_subhi */
    case 4768:  /* atomic_subqi */
    case 4767:  /* atomic_addsi */
    case 4766:  /* atomic_addhi */
    case 4765:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4764:  /* atomic_exchangesi */
    case 4763:  /* atomic_exchangehi */
    case 4762:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4761:  /* *atomic_fetch_add_cmpsi */
    case 4760:  /* *atomic_fetch_add_cmphi */
    case 4759:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 4758:  /* atomic_fetch_addsi */
    case 4757:  /* atomic_fetch_addhi */
    case 4756:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4755:  /* atomic_compare_and_swapsi_1 */
    case 4754:  /* atomic_compare_and_swaphi_1 */
    case 4753:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4752:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4744:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4645:  /* avx512dq_vmfpclassv2df */
    case 4644:  /* avx512dq_vmfpclassv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 4599:  /* avx512vl_compressstorev2df_mask */
    case 4598:  /* avx512vl_compressstorev2di_mask */
    case 4597:  /* avx512vl_compressstorev4sf_mask */
    case 4596:  /* avx512vl_compressstorev4si_mask */
    case 4595:  /* avx512vl_compressstorev4df_mask */
    case 4594:  /* avx512vl_compressstorev4di_mask */
    case 4593:  /* avx512vl_compressstorev8sf_mask */
    case 4592:  /* avx512vl_compressstorev8si_mask */
    case 4591:  /* avx512f_compressstorev8df_mask */
    case 4590:  /* avx512f_compressstorev8di_mask */
    case 4589:  /* avx512f_compressstorev16sf_mask */
    case 4588:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4575:  /* *avx512f_scatterdiv2df */
    case 4574:  /* *avx512f_scatterdiv2df */
    case 4573:  /* *avx512f_scatterdiv2di */
    case 4572:  /* *avx512f_scatterdiv2di */
    case 4571:  /* *avx512f_scatterdiv4sf */
    case 4570:  /* *avx512f_scatterdiv4sf */
    case 4569:  /* *avx512f_scatterdiv4si */
    case 4568:  /* *avx512f_scatterdiv4si */
    case 4567:  /* *avx512f_scatterdiv4df */
    case 4566:  /* *avx512f_scatterdiv4df */
    case 4565:  /* *avx512f_scatterdiv4di */
    case 4564:  /* *avx512f_scatterdiv4di */
    case 4563:  /* *avx512f_scatterdiv8sf */
    case 4562:  /* *avx512f_scatterdiv8sf */
    case 4561:  /* *avx512f_scatterdiv8si */
    case 4560:  /* *avx512f_scatterdiv8si */
    case 4559:  /* *avx512f_scatterdiv8df */
    case 4558:  /* *avx512f_scatterdiv8df */
    case 4557:  /* *avx512f_scatterdiv8di */
    case 4556:  /* *avx512f_scatterdiv8di */
    case 4555:  /* *avx512f_scatterdiv16sf */
    case 4554:  /* *avx512f_scatterdiv16sf */
    case 4553:  /* *avx512f_scatterdiv16si */
    case 4552:  /* *avx512f_scatterdiv16si */
    case 4551:  /* *avx512f_scattersiv2df */
    case 4550:  /* *avx512f_scattersiv2df */
    case 4549:  /* *avx512f_scattersiv2di */
    case 4548:  /* *avx512f_scattersiv2di */
    case 4547:  /* *avx512f_scattersiv4sf */
    case 4546:  /* *avx512f_scattersiv4sf */
    case 4545:  /* *avx512f_scattersiv4si */
    case 4544:  /* *avx512f_scattersiv4si */
    case 4543:  /* *avx512f_scattersiv4df */
    case 4542:  /* *avx512f_scattersiv4df */
    case 4541:  /* *avx512f_scattersiv4di */
    case 4540:  /* *avx512f_scattersiv4di */
    case 4539:  /* *avx512f_scattersiv8sf */
    case 4538:  /* *avx512f_scattersiv8sf */
    case 4537:  /* *avx512f_scattersiv8si */
    case 4536:  /* *avx512f_scattersiv8si */
    case 4535:  /* *avx512f_scattersiv8df */
    case 4534:  /* *avx512f_scattersiv8df */
    case 4533:  /* *avx512f_scattersiv8di */
    case 4532:  /* *avx512f_scattersiv8di */
    case 4531:  /* *avx512f_scattersiv16sf */
    case 4530:  /* *avx512f_scattersiv16sf */
    case 4529:  /* *avx512f_scattersiv16si */
    case 4528:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4527:  /* *avx512f_gatherdiv2df_2 */
    case 4526:  /* *avx512f_gatherdiv2df_2 */
    case 4525:  /* *avx512f_gatherdiv2di_2 */
    case 4524:  /* *avx512f_gatherdiv2di_2 */
    case 4523:  /* *avx512f_gatherdiv4sf_2 */
    case 4522:  /* *avx512f_gatherdiv4sf_2 */
    case 4521:  /* *avx512f_gatherdiv4si_2 */
    case 4520:  /* *avx512f_gatherdiv4si_2 */
    case 4519:  /* *avx512f_gatherdiv4df_2 */
    case 4518:  /* *avx512f_gatherdiv4df_2 */
    case 4517:  /* *avx512f_gatherdiv4di_2 */
    case 4516:  /* *avx512f_gatherdiv4di_2 */
    case 4515:  /* *avx512f_gatherdiv8sf_2 */
    case 4514:  /* *avx512f_gatherdiv8sf_2 */
    case 4513:  /* *avx512f_gatherdiv8si_2 */
    case 4512:  /* *avx512f_gatherdiv8si_2 */
    case 4511:  /* *avx512f_gatherdiv8df_2 */
    case 4510:  /* *avx512f_gatherdiv8df_2 */
    case 4509:  /* *avx512f_gatherdiv8di_2 */
    case 4508:  /* *avx512f_gatherdiv8di_2 */
    case 4507:  /* *avx512f_gatherdiv16sf_2 */
    case 4506:  /* *avx512f_gatherdiv16sf_2 */
    case 4505:  /* *avx512f_gatherdiv16si_2 */
    case 4504:  /* *avx512f_gatherdiv16si_2 */
    case 4479:  /* *avx512f_gathersiv2df_2 */
    case 4478:  /* *avx512f_gathersiv2df_2 */
    case 4477:  /* *avx512f_gathersiv2di_2 */
    case 4476:  /* *avx512f_gathersiv2di_2 */
    case 4475:  /* *avx512f_gathersiv4sf_2 */
    case 4474:  /* *avx512f_gathersiv4sf_2 */
    case 4473:  /* *avx512f_gathersiv4si_2 */
    case 4472:  /* *avx512f_gathersiv4si_2 */
    case 4471:  /* *avx512f_gathersiv4df_2 */
    case 4470:  /* *avx512f_gathersiv4df_2 */
    case 4469:  /* *avx512f_gathersiv4di_2 */
    case 4468:  /* *avx512f_gathersiv4di_2 */
    case 4467:  /* *avx512f_gathersiv8sf_2 */
    case 4466:  /* *avx512f_gathersiv8sf_2 */
    case 4465:  /* *avx512f_gathersiv8si_2 */
    case 4464:  /* *avx512f_gathersiv8si_2 */
    case 4463:  /* *avx512f_gathersiv8df_2 */
    case 4462:  /* *avx512f_gathersiv8df_2 */
    case 4461:  /* *avx512f_gathersiv8di_2 */
    case 4460:  /* *avx512f_gathersiv8di_2 */
    case 4459:  /* *avx512f_gathersiv16sf_2 */
    case 4458:  /* *avx512f_gathersiv16sf_2 */
    case 4457:  /* *avx512f_gathersiv16si_2 */
    case 4456:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4503:  /* *avx512f_gatherdiv2df */
    case 4502:  /* *avx512f_gatherdiv2df */
    case 4501:  /* *avx512f_gatherdiv2di */
    case 4500:  /* *avx512f_gatherdiv2di */
    case 4499:  /* *avx512f_gatherdiv4sf */
    case 4498:  /* *avx512f_gatherdiv4sf */
    case 4497:  /* *avx512f_gatherdiv4si */
    case 4496:  /* *avx512f_gatherdiv4si */
    case 4495:  /* *avx512f_gatherdiv4df */
    case 4494:  /* *avx512f_gatherdiv4df */
    case 4493:  /* *avx512f_gatherdiv4di */
    case 4492:  /* *avx512f_gatherdiv4di */
    case 4491:  /* *avx512f_gatherdiv8sf */
    case 4490:  /* *avx512f_gatherdiv8sf */
    case 4489:  /* *avx512f_gatherdiv8si */
    case 4488:  /* *avx512f_gatherdiv8si */
    case 4487:  /* *avx512f_gatherdiv8df */
    case 4486:  /* *avx512f_gatherdiv8df */
    case 4485:  /* *avx512f_gatherdiv8di */
    case 4484:  /* *avx512f_gatherdiv8di */
    case 4483:  /* *avx512f_gatherdiv16sf */
    case 4482:  /* *avx512f_gatherdiv16sf */
    case 4481:  /* *avx512f_gatherdiv16si */
    case 4480:  /* *avx512f_gatherdiv16si */
    case 4455:  /* *avx512f_gathersiv2df */
    case 4454:  /* *avx512f_gathersiv2df */
    case 4453:  /* *avx512f_gathersiv2di */
    case 4452:  /* *avx512f_gathersiv2di */
    case 4451:  /* *avx512f_gathersiv4sf */
    case 4450:  /* *avx512f_gathersiv4sf */
    case 4449:  /* *avx512f_gathersiv4si */
    case 4448:  /* *avx512f_gathersiv4si */
    case 4447:  /* *avx512f_gathersiv4df */
    case 4446:  /* *avx512f_gathersiv4df */
    case 4445:  /* *avx512f_gathersiv4di */
    case 4444:  /* *avx512f_gathersiv4di */
    case 4443:  /* *avx512f_gathersiv8sf */
    case 4442:  /* *avx512f_gathersiv8sf */
    case 4441:  /* *avx512f_gathersiv8si */
    case 4440:  /* *avx512f_gathersiv8si */
    case 4439:  /* *avx512f_gathersiv8df */
    case 4438:  /* *avx512f_gathersiv8df */
    case 4437:  /* *avx512f_gathersiv8di */
    case 4436:  /* *avx512f_gathersiv8di */
    case 4435:  /* *avx512f_gathersiv16sf */
    case 4434:  /* *avx512f_gathersiv16sf */
    case 4433:  /* *avx512f_gathersiv16si */
    case 4432:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4431:  /* *avx2_gatherdiv8sf_4 */
    case 4430:  /* *avx2_gatherdiv8sf_4 */
    case 4429:  /* *avx2_gatherdiv8si_4 */
    case 4428:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4427:  /* *avx2_gatherdiv8sf_3 */
    case 4426:  /* *avx2_gatherdiv8sf_3 */
    case 4425:  /* *avx2_gatherdiv8si_3 */
    case 4424:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4423:  /* *avx2_gatherdiv8sf_2 */
    case 4422:  /* *avx2_gatherdiv8sf_2 */
    case 4421:  /* *avx2_gatherdiv8si_2 */
    case 4420:  /* *avx2_gatherdiv8si_2 */
    case 4419:  /* *avx2_gatherdiv4sf_2 */
    case 4418:  /* *avx2_gatherdiv4sf_2 */
    case 4417:  /* *avx2_gatherdiv4si_2 */
    case 4416:  /* *avx2_gatherdiv4si_2 */
    case 4415:  /* *avx2_gatherdiv4df_2 */
    case 4414:  /* *avx2_gatherdiv4df_2 */
    case 4413:  /* *avx2_gatherdiv4di_2 */
    case 4412:  /* *avx2_gatherdiv4di_2 */
    case 4411:  /* *avx2_gatherdiv2df_2 */
    case 4410:  /* *avx2_gatherdiv2df_2 */
    case 4409:  /* *avx2_gatherdiv2di_2 */
    case 4408:  /* *avx2_gatherdiv2di_2 */
    case 4391:  /* *avx2_gathersiv8sf_2 */
    case 4390:  /* *avx2_gathersiv8sf_2 */
    case 4389:  /* *avx2_gathersiv8si_2 */
    case 4388:  /* *avx2_gathersiv8si_2 */
    case 4387:  /* *avx2_gathersiv4sf_2 */
    case 4386:  /* *avx2_gathersiv4sf_2 */
    case 4385:  /* *avx2_gathersiv4si_2 */
    case 4384:  /* *avx2_gathersiv4si_2 */
    case 4383:  /* *avx2_gathersiv4df_2 */
    case 4382:  /* *avx2_gathersiv4df_2 */
    case 4381:  /* *avx2_gathersiv4di_2 */
    case 4380:  /* *avx2_gathersiv4di_2 */
    case 4379:  /* *avx2_gathersiv2df_2 */
    case 4378:  /* *avx2_gathersiv2df_2 */
    case 4377:  /* *avx2_gathersiv2di_2 */
    case 4376:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4407:  /* *avx2_gatherdiv8sf */
    case 4406:  /* *avx2_gatherdiv8sf */
    case 4405:  /* *avx2_gatherdiv8si */
    case 4404:  /* *avx2_gatherdiv8si */
    case 4403:  /* *avx2_gatherdiv4sf */
    case 4402:  /* *avx2_gatherdiv4sf */
    case 4401:  /* *avx2_gatherdiv4si */
    case 4400:  /* *avx2_gatherdiv4si */
    case 4399:  /* *avx2_gatherdiv4df */
    case 4398:  /* *avx2_gatherdiv4df */
    case 4397:  /* *avx2_gatherdiv4di */
    case 4396:  /* *avx2_gatherdiv4di */
    case 4395:  /* *avx2_gatherdiv2df */
    case 4394:  /* *avx2_gatherdiv2df */
    case 4393:  /* *avx2_gatherdiv2di */
    case 4392:  /* *avx2_gatherdiv2di */
    case 4375:  /* *avx2_gathersiv8sf */
    case 4374:  /* *avx2_gathersiv8sf */
    case 4373:  /* *avx2_gathersiv8si */
    case 4372:  /* *avx2_gathersiv8si */
    case 4371:  /* *avx2_gathersiv4sf */
    case 4370:  /* *avx2_gathersiv4sf */
    case 4369:  /* *avx2_gathersiv4si */
    case 4368:  /* *avx2_gathersiv4si */
    case 4367:  /* *avx2_gathersiv4df */
    case 4366:  /* *avx2_gathersiv4df */
    case 4365:  /* *avx2_gathersiv4di */
    case 4364:  /* *avx2_gathersiv4di */
    case 4363:  /* *avx2_gathersiv2df */
    case 4362:  /* *avx2_gathersiv2df */
    case 4361:  /* *avx2_gathersiv2di */
    case 4360:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4354:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4273:  /* avx2_maskstoreq256 */
    case 4272:  /* avx2_maskstored256 */
    case 4271:  /* avx2_maskstoreq */
    case 4270:  /* avx2_maskstored */
    case 4269:  /* avx_maskstorepd256 */
    case 4268:  /* avx_maskstoreps256 */
    case 4267:  /* avx_maskstorepd */
    case 4266:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4265:  /* avx2_maskloadq256 */
    case 4264:  /* avx2_maskloadd256 */
    case 4263:  /* avx2_maskloadq */
    case 4262:  /* avx2_maskloadd */
    case 4261:  /* avx_maskloadpd256 */
    case 4260:  /* avx_maskloadps256 */
    case 4259:  /* avx_maskloadpd */
    case 4258:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4231:  /* *avx_vperm2f128v4df_nozero */
    case 4230:  /* *avx_vperm2f128v8sf_nozero */
    case 4229:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4225:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4224:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4223:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4222:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4221:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4220:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4219:  /* avx512vl_vpermt2varv2df3_mask */
    case 4218:  /* avx512vl_vpermt2varv2di3_mask */
    case 4217:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4216:  /* avx512vl_vpermt2varv4si3_mask */
    case 4215:  /* avx512vl_vpermt2varv4df3_mask */
    case 4214:  /* avx512vl_vpermt2varv4di3_mask */
    case 4213:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4212:  /* avx512vl_vpermt2varv8si3_mask */
    case 4211:  /* avx512f_vpermt2varv8df3_mask */
    case 4210:  /* avx512f_vpermt2varv8di3_mask */
    case 4209:  /* avx512f_vpermt2varv16sf3_mask */
    case 4208:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4171:  /* avx512bw_vpermi2varv32hi3_mask */
    case 4170:  /* avx512vl_vpermi2varv16hi3_mask */
    case 4169:  /* avx512vl_vpermi2varv8hi3_mask */
    case 4168:  /* avx512vl_vpermi2varv32qi3_mask */
    case 4167:  /* avx512vl_vpermi2varv16qi3_mask */
    case 4166:  /* avx512bw_vpermi2varv64qi3_mask */
    case 4165:  /* avx512vl_vpermi2varv2df3_mask */
    case 4164:  /* avx512vl_vpermi2varv2di3_mask */
    case 4163:  /* avx512vl_vpermi2varv4sf3_mask */
    case 4162:  /* avx512vl_vpermi2varv4si3_mask */
    case 4161:  /* avx512vl_vpermi2varv4df3_mask */
    case 4160:  /* avx512vl_vpermi2varv4di3_mask */
    case 4159:  /* avx512vl_vpermi2varv8sf3_mask */
    case 4158:  /* avx512vl_vpermi2varv8si3_mask */
    case 4157:  /* avx512f_vpermi2varv8df3_mask */
    case 4156:  /* avx512f_vpermi2varv8di3_mask */
    case 4155:  /* avx512f_vpermi2varv16sf3_mask */
    case 4154:  /* avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4105:  /* *avx_vpermilpv2df_mask */
    case 4103:  /* *avx_vpermilpv4df_mask */
    case 4101:  /* *avx512f_vpermilpv8df_mask */
    case 4099:  /* *avx_vpermilpv4sf_mask */
    case 4097:  /* *avx_vpermilpv8sf_mask */
    case 4095:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4237:  /* *ssse3_palignrv2df_perm */
    case 4236:  /* *ssse3_palignrv4sf_perm */
    case 4235:  /* *ssse3_palignrv2di_perm */
    case 4234:  /* *ssse3_palignrv4si_perm */
    case 4233:  /* *ssse3_palignrv8hi_perm */
    case 4232:  /* *ssse3_palignrv16qi_perm */
    case 4104:  /* *avx_vpermilpv2df */
    case 4102:  /* *avx_vpermilpv4df */
    case 4100:  /* *avx512f_vpermilpv8df */
    case 4098:  /* *avx_vpermilpv4sf */
    case 4096:  /* *avx_vpermilpv8sf */
    case 4094:  /* *avx512f_vpermilpv16sf */
    case 4093:  /* *avx_vperm_broadcast_v4df */
    case 4092:  /* *avx_vperm_broadcast_v8sf */
    case 4091:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4058:  /* avx_vbroadcastf128_v4df */
    case 4057:  /* avx_vbroadcastf128_v8sf */
    case 4056:  /* avx_vbroadcastf128_v4di */
    case 4055:  /* avx_vbroadcastf128_v8si */
    case 4054:  /* avx_vbroadcastf128_v16hi */
    case 4053:  /* avx_vbroadcastf128_v32qi */
    case 4042:  /* avx2_vbroadcasti128_v4di */
    case 4041:  /* avx2_vbroadcasti128_v8si */
    case 4040:  /* avx2_vbroadcasti128_v16hi */
    case 4039:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3880:  /* xop_maskcmp_uns2v2di3 */
    case 3879:  /* xop_maskcmp_uns2v4si3 */
    case 3878:  /* xop_maskcmp_uns2v8hi3 */
    case 3877:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 3876:  /* xop_maskcmp_unsv2di3 */
    case 3875:  /* xop_maskcmp_unsv4si3 */
    case 3874:  /* xop_maskcmp_unsv8hi3 */
    case 3873:  /* xop_maskcmp_unsv16qi3 */
    case 3872:  /* xop_maskcmpv2di3 */
    case 3871:  /* xop_maskcmpv4si3 */
    case 3870:  /* xop_maskcmpv8hi3 */
    case 3869:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3860:  /* xop_shlv2di3 */
    case 3859:  /* xop_shlv4si3 */
    case 3858:  /* xop_shlv8hi3 */
    case 3857:  /* xop_shlv16qi3 */
    case 3856:  /* xop_shav2di3 */
    case 3855:  /* xop_shav4si3 */
    case 3854:  /* xop_shav8hi3 */
    case 3853:  /* xop_shav16qi3 */
    case 3852:  /* xop_vrotlv2di3 */
    case 3851:  /* xop_vrotlv4si3 */
    case 3850:  /* xop_vrotlv8hi3 */
    case 3849:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 3840:  /* xop_pperm_pack_v8hi_v16qi */
    case 3839:  /* xop_pperm_pack_v4si_v8hi */
    case 3838:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3827:  /* xop_phaddubq */
    case 3826:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 3831:  /* xop_phadduwq */
    case 3830:  /* xop_phaddwq */
    case 3825:  /* xop_phaddubd */
    case 3824:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3836:  /* xop_phsubdq */
    case 3835:  /* xop_phsubwd */
    case 3834:  /* xop_phsubbw */
    case 3833:  /* xop_phaddudq */
    case 3832:  /* xop_phadddq */
    case 3829:  /* xop_phadduwd */
    case 3828:  /* xop_phaddwd */
    case 3823:  /* xop_phaddubw */
    case 3822:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3821:  /* xop_pcmov_v2df */
    case 3820:  /* xop_pcmov_v4df256 */
    case 3819:  /* xop_pcmov_v8df512 */
    case 3818:  /* xop_pcmov_v4sf */
    case 3817:  /* xop_pcmov_v8sf256 */
    case 3816:  /* xop_pcmov_v16sf512 */
    case 3815:  /* xop_pcmov_v2di */
    case 3814:  /* xop_pcmov_v4di256 */
    case 3813:  /* xop_pcmov_v8di512 */
    case 3812:  /* xop_pcmov_v4si */
    case 3811:  /* xop_pcmov_v8si256 */
    case 3810:  /* xop_pcmov_v16si512 */
    case 3809:  /* xop_pcmov_v8hi */
    case 3808:  /* xop_pcmov_v16hi256 */
    case 3807:  /* xop_pcmov_v16qi */
    case 3806:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3805:  /* xop_pmadcsswd */
    case 3804:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3803:  /* xop_pmacsswd */
    case 3802:  /* xop_pmacswd */
    case 3801:  /* xop_pmacssdqh */
    case 3800:  /* xop_pmacsdqh */
    case 3799:  /* xop_pmacssdql */
    case 3798:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3793:  /* avx512er_vmrsqrt28v2df_round */
    case 3791:  /* avx512er_vmrsqrt28v4sf_round */
    case 3781:  /* avx512er_vmrcp28v2df_round */
    case 3779:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 3761:  /* *avx512pf_scatterpfv8didf_mask */
    case 3760:  /* *avx512pf_scatterpfv8didf_mask */
    case 3759:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3758:  /* *avx512pf_scatterpfv8sidf_mask */
    case 3757:  /* *avx512pf_scatterpfv8disf_mask */
    case 3756:  /* *avx512pf_scatterpfv8disf_mask */
    case 3755:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3754:  /* *avx512pf_scatterpfv16sisf_mask */
    case 3753:  /* *avx512pf_gatherpfv8didf_mask */
    case 3752:  /* *avx512pf_gatherpfv8didf_mask */
    case 3751:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3750:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3749:  /* *avx512pf_gatherpfv8disf_mask */
    case 3748:  /* *avx512pf_gatherpfv8disf_mask */
    case 3747:  /* *avx512pf_gatherpfv16sisf_mask */
    case 3746:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 3745:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 3744:  /* sse4_2_pcmpistrm */
    case 3743:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3742:  /* *sse4_2_pcmpistr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1), 0, 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3741:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3740:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 3739:  /* sse4_2_pcmpestrm */
    case 3738:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 3737:  /* *sse4_2_pcmpestr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2), 0, 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0, 0);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3736:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3735:  /* sse4_1_roundsd */
    case 3734:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3729:  /* avx_ptestv4df */
    case 3728:  /* avx_ptestv8sf */
    case 3727:  /* avx_ptestv4di */
    case 3726:  /* avx_ptestv8si */
    case 3725:  /* avx_ptestv16hi */
    case 3724:  /* avx_ptestv32qi */
    case 3723:  /* sse4_1_ptestv2df */
    case 3722:  /* sse4_1_ptestv4sf */
    case 3721:  /* sse4_1_ptestv2di */
    case 3720:  /* sse4_1_ptestv4si */
    case 3719:  /* sse4_1_ptestv8hi */
    case 3718:  /* sse4_1_ptestv16qi */
    case 3717:  /* avx_vtestpd */
    case 3716:  /* avx_vtestpd256 */
    case 3715:  /* avx_vtestps */
    case 3714:  /* avx_vtestps256 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3552:  /* *ssse3_pmulhrswv8hi3_mask */
    case 3550:  /* *avx2_pmulhrswv16hi3_mask */
    case 3548:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3553:  /* *ssse3_pmulhrswv4hi3 */
    case 3551:  /* *ssse3_pmulhrswv8hi3 */
    case 3549:  /* *avx2_pmulhrswv16hi3 */
    case 3547:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3544:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3543:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 3531:  /* avx2_phsubdv8si3 */
    case 3530:  /* avx2_phadddv8si3 */
    case 3525:  /* ssse3_phsubswv8hi3 */
    case 3524:  /* ssse3_phsubwv8hi3 */
    case 3523:  /* ssse3_phaddswv8hi3 */
    case 3522:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3521:  /* avx2_phsubswv16hi3 */
    case 3520:  /* avx2_phsubwv16hi3 */
    case 3519:  /* avx2_phaddswv16hi3 */
    case 3518:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 3500:  /* *sse2_uavgv8hi3_mask */
    case 3498:  /* *avx2_uavgv16hi3_mask */
    case 3496:  /* *avx512bw_uavgv32hi3_mask */
    case 3494:  /* *sse2_uavgv16qi3_mask */
    case 3492:  /* *avx2_uavgv32qi3_mask */
    case 3490:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3499:  /* *sse2_uavgv8hi3 */
    case 3497:  /* *avx2_uavgv16hi3 */
    case 3495:  /* *avx512bw_uavgv32hi3 */
    case 3493:  /* *sse2_uavgv16qi3 */
    case 3491:  /* *avx2_uavgv32qi3 */
    case 3489:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3472:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3471:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3470:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3469:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3464:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3463:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 3458:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3457:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3456:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3455:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4249:  /* vec_set_lo_v8sf_mask */
    case 4247:  /* vec_set_lo_v8si_mask */
    case 4241:  /* vec_set_lo_v4df_mask */
    case 4239:  /* vec_set_lo_v4di_mask */
    case 3434:  /* vec_set_lo_v8di_mask */
    case 3432:  /* vec_set_lo_v8df_mask */
    case 3426:  /* vec_set_lo_v16si_mask */
    case 3424:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3422:  /* avx512f_vinserti32x4_1_mask */
    case 3420:  /* avx512f_vinsertf32x4_1_mask */
    case 3418:  /* avx512dq_vinserti64x2_1_mask */
    case 3416:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3421:  /* *avx512f_vinserti32x4_1 */
    case 3419:  /* *avx512f_vinsertf32x4_1 */
    case 3417:  /* *avx512dq_vinserti64x2_1 */
    case 3415:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3634:  /* sse4_1_packusdw_mask */
    case 3632:  /* avx2_packusdw_mask */
    case 3630:  /* avx512bw_packusdw_mask */
    case 3374:  /* sse2_packuswb_mask */
    case 3372:  /* avx2_packuswb_mask */
    case 3370:  /* avx512bw_packuswb_mask */
    case 3368:  /* sse2_packssdw_mask */
    case 3366:  /* avx2_packssdw_mask */
    case 3364:  /* avx512bw_packssdw_mask */
    case 3362:  /* sse2_packsswb_mask */
    case 3360:  /* avx2_packsswb_mask */
    case 3358:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4643:  /* avx512dq_fpclassv2df_mask */
    case 4641:  /* avx512dq_fpclassv4df_mask */
    case 4639:  /* avx512dq_fpclassv8df_mask */
    case 4637:  /* avx512dq_fpclassv4sf_mask */
    case 4635:  /* avx512dq_fpclassv8sf_mask */
    case 4633:  /* avx512dq_fpclassv16sf_mask */
    case 4353:  /* *vcvtps2ph */
    case 3356:  /* avx512vl_testnmv2di3_mask */
    case 3354:  /* avx512vl_testnmv4di3_mask */
    case 3352:  /* avx512f_testnmv8di3_mask */
    case 3350:  /* avx512vl_testnmv4si3_mask */
    case 3348:  /* avx512vl_testnmv8si3_mask */
    case 3346:  /* avx512f_testnmv16si3_mask */
    case 3344:  /* avx512vl_testnmv8hi3_mask */
    case 3342:  /* avx512vl_testnmv16hi3_mask */
    case 3340:  /* avx512bw_testnmv32hi3_mask */
    case 3338:  /* avx512vl_testnmv32qi3_mask */
    case 3336:  /* avx512vl_testnmv16qi3_mask */
    case 3334:  /* avx512bw_testnmv64qi3_mask */
    case 3332:  /* avx512vl_testmv2di3_mask */
    case 3330:  /* avx512vl_testmv4di3_mask */
    case 3328:  /* avx512f_testmv8di3_mask */
    case 3326:  /* avx512vl_testmv4si3_mask */
    case 3324:  /* avx512vl_testmv8si3_mask */
    case 3322:  /* avx512f_testmv16si3_mask */
    case 3320:  /* avx512vl_testmv8hi3_mask */
    case 3318:  /* avx512vl_testmv16hi3_mask */
    case 3316:  /* avx512bw_testmv32hi3_mask */
    case 3314:  /* avx512vl_testmv32qi3_mask */
    case 3312:  /* avx512vl_testmv16qi3_mask */
    case 3310:  /* avx512bw_testmv64qi3_mask */
    case 3215:  /* avx512vl_gtv8hi3_mask */
    case 3213:  /* avx512vl_gtv16hi3_mask */
    case 3211:  /* avx512bw_gtv32hi3_mask */
    case 3209:  /* avx512vl_gtv32qi3_mask */
    case 3207:  /* avx512vl_gtv16qi3_mask */
    case 3205:  /* avx512bw_gtv64qi3_mask */
    case 3203:  /* avx512vl_gtv2di3_mask */
    case 3201:  /* avx512vl_gtv4di3_mask */
    case 3199:  /* avx512f_gtv8di3_mask */
    case 3197:  /* avx512vl_gtv4si3_mask */
    case 3195:  /* avx512vl_gtv8si3_mask */
    case 3193:  /* avx512f_gtv16si3_mask */
    case 3182:  /* avx512vl_eqv2di3_mask_1 */
    case 3180:  /* avx512vl_eqv4di3_mask_1 */
    case 3178:  /* avx512f_eqv8di3_mask_1 */
    case 3176:  /* avx512vl_eqv4si3_mask_1 */
    case 3174:  /* avx512vl_eqv8si3_mask_1 */
    case 3172:  /* avx512f_eqv16si3_mask_1 */
    case 3170:  /* avx512vl_eqv8hi3_mask_1 */
    case 3168:  /* avx512vl_eqv16hi3_mask_1 */
    case 3166:  /* avx512bw_eqv32hi3_mask_1 */
    case 3164:  /* avx512vl_eqv32qi3_mask_1 */
    case 3162:  /* avx512vl_eqv16qi3_mask_1 */
    case 3160:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2894:  /* *sse4_1_mulv2siv2di3_mask */
    case 2892:  /* *vec_widen_smult_even_v8si_mask */
    case 2890:  /* *vec_widen_smult_even_v16si_mask */
    case 2888:  /* *vec_widen_umult_even_v4si_mask */
    case 2886:  /* *vec_widen_umult_even_v8si_mask */
    case 2884:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2882:  /* *umulv8hi3_highpart_mask */
    case 2880:  /* *smulv8hi3_highpart_mask */
    case 2878:  /* *umulv16hi3_highpart_mask */
    case 2876:  /* *smulv16hi3_highpart_mask */
    case 2874:  /* *umulv32hi3_highpart_mask */
    case 2872:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2744:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 2743:  /* avx512f_truncatev8div16qi2_mask_store */
    case 2742:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 2729:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 2728:  /* avx512vl_truncatev2div2si2_mask_store */
    case 2727:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 2714:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 2713:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 2712:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 2702:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 2701:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 2700:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 2699:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 2698:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 2697:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 2669:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 2668:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 2667:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 2666:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 2665:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 2664:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 2645:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 2644:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 2643:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 2642:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 2641:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 2640:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 2621:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 2620:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 2619:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2735:  /* *avx512f_us_truncatev8div16qi2_store */
    case 2734:  /* *avx512f_truncatev8div16qi2_store */
    case 2733:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 2720:  /* *avx512vl_us_truncatev2div2si2_store */
    case 2719:  /* *avx512vl_truncatev2div2si2_store */
    case 2718:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 2705:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 2704:  /* *avx512vl_truncatev2div2hi2_store */
    case 2703:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 2684:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 2683:  /* *avx512vl_truncatev4div4hi2_store */
    case 2682:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 2681:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 2680:  /* *avx512vl_truncatev4siv4hi2_store */
    case 2679:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 2651:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 2650:  /* *avx512vl_truncatev8siv8qi2_store */
    case 2649:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 2648:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 2647:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 2646:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 2627:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 2626:  /* *avx512vl_truncatev4div4qi2_store */
    case 2625:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 2624:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 2623:  /* *avx512vl_truncatev4siv4qi2_store */
    case 2622:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 2612:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 2611:  /* *avx512vl_truncatev2div2qi2_store */
    case 2610:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2536:  /* sse2_shufpd_v2df */
    case 2535:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2522:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3454:  /* avx512f_shuf_i32x4_1_mask */
    case 3452:  /* avx512f_shuf_f32x4_1_mask */
    case 2517:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3453:  /* avx512f_shuf_i32x4_1 */
    case 3451:  /* avx512f_shuf_f32x4_1 */
    case 2516:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4673:  /* avx512f_vgetmantv2df_round */
    case 4671:  /* avx512f_vgetmantv4sf_round */
    case 4631:  /* avx512dq_rangesv2df_round */
    case 4629:  /* avx512dq_rangesv4sf_round */
    case 2515:  /* avx512f_rndscalev2df_round */
    case 2513:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2487:  /* avx512f_sfixupimmv2df_mask_round */
    case 2485:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2486:  /* avx512f_sfixupimmv2df_mask */
    case 2484:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2483:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2479:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2482:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2478:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2481:  /* avx512f_sfixupimmv2df_round */
    case 2477:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2480:  /* avx512f_sfixupimmv2df */
    case 2476:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2475:  /* avx512vl_fixupimmv2df_mask_round */
    case 2473:  /* avx512vl_fixupimmv4df_mask_round */
    case 2471:  /* avx512f_fixupimmv8df_mask_round */
    case 2469:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2467:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2465:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2463:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2459:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2455:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2451:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2447:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2443:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2461:  /* avx512vl_fixupimmv2df_round */
    case 2457:  /* avx512vl_fixupimmv4df_round */
    case 2453:  /* avx512f_fixupimmv8df_round */
    case 2449:  /* avx512vl_fixupimmv4sf_round */
    case 2445:  /* avx512vl_fixupimmv8sf_round */
    case 2441:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2474:  /* avx512vl_fixupimmv2df_mask */
    case 2472:  /* avx512vl_fixupimmv4df_mask */
    case 2470:  /* avx512f_fixupimmv8df_mask */
    case 2468:  /* avx512vl_fixupimmv4sf_mask */
    case 2466:  /* avx512vl_fixupimmv8sf_mask */
    case 2464:  /* avx512f_fixupimmv16sf_mask */
    case 2399:  /* avx512vl_vternlogv2di_mask */
    case 2398:  /* avx512vl_vternlogv4di_mask */
    case 2397:  /* avx512f_vternlogv8di_mask */
    case 2396:  /* avx512vl_vternlogv4si_mask */
    case 2395:  /* avx512vl_vternlogv8si_mask */
    case 2394:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2462:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2458:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2454:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2450:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2446:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2442:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2393:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2391:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2389:  /* avx512f_vternlogv8di_maskz_1 */
    case 2387:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2385:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2383:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3888:  /* xop_vpermil2v2df3 */
    case 3887:  /* xop_vpermil2v4df3 */
    case 3886:  /* xop_vpermil2v4sf3 */
    case 3885:  /* xop_vpermil2v8sf3 */
    case 3610:  /* sse4a_insertqi */
    case 2460:  /* avx512vl_fixupimmv2df */
    case 2456:  /* avx512vl_fixupimmv4df */
    case 2452:  /* avx512f_fixupimmv8df */
    case 2448:  /* avx512vl_fixupimmv4sf */
    case 2444:  /* avx512vl_fixupimmv8sf */
    case 2440:  /* avx512f_fixupimmv16sf */
    case 2392:  /* avx512vl_vternlogv2di */
    case 2390:  /* avx512vl_vternlogv4di */
    case 2388:  /* avx512f_vternlogv8di */
    case 2386:  /* avx512vl_vternlogv4si */
    case 2384:  /* avx512vl_vternlogv8si */
    case 2382:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 4669:  /* avx512vl_getmantv2df_mask_round */
    case 4665:  /* avx512vl_getmantv4df_mask_round */
    case 4661:  /* avx512f_getmantv8df_mask_round */
    case 4657:  /* avx512vl_getmantv4sf_mask_round */
    case 4653:  /* avx512vl_getmantv8sf_mask_round */
    case 4649:  /* avx512f_getmantv16sf_mask_round */
    case 2511:  /* avx512vl_rndscalev2df_mask_round */
    case 2507:  /* avx512vl_rndscalev4df_mask_round */
    case 2503:  /* avx512f_rndscalev8df_mask_round */
    case 2499:  /* avx512vl_rndscalev4sf_mask_round */
    case 2495:  /* avx512vl_rndscalev8sf_mask_round */
    case 2491:  /* avx512f_rndscalev16sf_mask_round */
    case 2381:  /* avx512vl_scalefv2df_mask_round */
    case 2377:  /* avx512vl_scalefv4df_mask_round */
    case 2373:  /* avx512f_scalefv8df_mask_round */
    case 2369:  /* avx512vl_scalefv4sf_mask_round */
    case 2365:  /* avx512vl_scalefv8sf_mask_round */
    case 2361:  /* avx512f_scalefv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4667:  /* avx512vl_getmantv2df_round */
    case 4663:  /* avx512vl_getmantv4df_round */
    case 4659:  /* avx512f_getmantv8df_round */
    case 4655:  /* avx512vl_getmantv4sf_round */
    case 4651:  /* avx512vl_getmantv8sf_round */
    case 4647:  /* avx512f_getmantv16sf_round */
    case 2509:  /* avx512vl_rndscalev2df_round */
    case 2505:  /* avx512vl_rndscalev4df_round */
    case 2501:  /* avx512f_rndscalev8df_round */
    case 2497:  /* avx512vl_rndscalev4sf_round */
    case 2493:  /* avx512vl_rndscalev8sf_round */
    case 2489:  /* avx512f_rndscalev16sf_round */
    case 2379:  /* avx512vl_scalefv2df_round */
    case 2375:  /* avx512vl_scalefv4df_round */
    case 2371:  /* avx512f_scalefv8df_round */
    case 2367:  /* avx512vl_scalefv4sf_round */
    case 2363:  /* avx512vl_scalefv8sf_round */
    case 2359:  /* avx512f_scalefv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2427:  /* avx512f_sgetexpv2df_round */
    case 2425:  /* avx512f_sgetexpv4sf_round */
    case 2357:  /* avx512f_vmscalefv2df_round */
    case 2355:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2426:  /* avx512f_sgetexpv2df */
    case 2424:  /* avx512f_sgetexpv4sf */
    case 2356:  /* avx512f_vmscalefv2df */
    case 2354:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2286:  /* *avx512dq_vextracti64x2_1 */
    case 2284:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 3949:  /* avx512f_permv8df_1_mask */
    case 3947:  /* avx512f_permv8di_1_mask */
    case 3945:  /* avx2_permv4df_1_mask */
    case 3943:  /* avx2_permv4di_1_mask */
    case 3466:  /* sse2_pshuflw_1_mask */
    case 3460:  /* sse2_pshufd_1_mask */
    case 2291:  /* avx512f_vextracti32x4_1_mask */
    case 2289:  /* avx512f_vextractf32x4_1_mask */
    case 2283:  /* avx512f_vextracti32x4_1_maskm */
    case 2282:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2287:  /* avx512dq_vextracti64x2_1_mask */
    case 2285:  /* avx512dq_vextractf64x2_1_mask */
    case 2281:  /* avx512dq_vextracti64x2_1_maskm */
    case 2280:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3483:  /* *vec_extractv4si_mem */
    case 3482:  /* *vec_extractv4si */
    case 3479:  /* *vec_extractv8hi_mem */
    case 3478:  /* *vec_extractv16qi_mem */
    case 3475:  /* *vec_extractv8hi */
    case 3474:  /* *vec_extractv16qi */
    case 2279:  /* *vec_extractv4sf_mem */
    case 2278:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 2276:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3473:  /* sse2_loadld */
    case 2274:  /* vec_setv4sf_0 */
    case 2273:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2543:  /* sse2_movsd */
    case 2264:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4256:  /* vec_set_lo_v32qi */
    case 4254:  /* vec_set_lo_v16hi */
    case 4248:  /* vec_set_lo_v8sf */
    case 4246:  /* vec_set_lo_v8si */
    case 4240:  /* vec_set_lo_v4df */
    case 4238:  /* vec_set_lo_v4di */
    case 3433:  /* vec_set_lo_v8di */
    case 3431:  /* vec_set_lo_v8df */
    case 3425:  /* vec_set_lo_v16si */
    case 3423:  /* vec_set_lo_v16sf */
    case 2542:  /* sse2_loadlpd */
    case 2263:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3441:  /* *avx512dq_shuf_f64x2_1 */
    case 3439:  /* *avx512dq_shuf_i64x2_1 */
    case 2520:  /* avx_shufpd256_1 */
    case 2259:  /* sse_shufps_v4sf */
    case 2258:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3442:  /* avx512dq_shuf_f64x2_1_mask */
    case 3440:  /* avx512dq_shuf_i64x2_1_mask */
    case 2521:  /* avx_shufpd256_1_mask */
    case 2257:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3450:  /* avx512vl_shuf_f32x4_1_mask */
    case 3448:  /* avx512vl_shuf_i32x4_1_mask */
    case 3446:  /* avx512f_shuf_i64x2_1_mask */
    case 3444:  /* avx512f_shuf_f64x2_1_mask */
    case 2519:  /* avx512f_shufpd512_1_mask */
    case 2256:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3449:  /* *avx512vl_shuf_f32x4_1 */
    case 3447:  /* *avx512vl_shuf_i32x4_1 */
    case 3445:  /* avx512f_shuf_i64x2_1 */
    case 3443:  /* avx512f_shuf_f64x2_1 */
    case 2518:  /* avx512f_shufpd512_1 */
    case 2255:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2254:  /* avx512f_movsldup512_mask */
    case 2252:  /* sse3_movsldup_mask */
    case 2250:  /* avx_movsldup256_mask */
    case 2248:  /* avx512f_movshdup512_mask */
    case 2246:  /* sse3_movshdup_mask */
    case 2244:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2253:  /* *avx512f_movsldup512 */
    case 2251:  /* sse3_movsldup */
    case 2249:  /* avx_movsldup256 */
    case 2247:  /* *avx512f_movshdup512 */
    case 2245:  /* sse3_movshdup */
    case 2243:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3410:  /* vec_interleave_lowv4si_mask */
    case 3408:  /* avx512f_interleave_lowv16si_mask */
    case 3406:  /* avx2_interleave_lowv8si_mask */
    case 3404:  /* vec_interleave_highv4si_mask */
    case 3402:  /* avx512f_interleave_highv16si_mask */
    case 3400:  /* avx2_interleave_highv8si_mask */
    case 3398:  /* vec_interleave_lowv8hi_mask */
    case 3396:  /* avx2_interleave_lowv16hi_mask */
    case 3394:  /* avx512bw_interleave_lowv32hi_mask */
    case 3392:  /* vec_interleave_highv8hi_mask */
    case 3390:  /* avx2_interleave_highv16hi_mask */
    case 3388:  /* avx512bw_interleave_highv32hi_mask */
    case 3386:  /* vec_interleave_lowv16qi_mask */
    case 3384:  /* avx2_interleave_lowv32qi_mask */
    case 3382:  /* avx512bw_interleave_lowv64qi_mask */
    case 3380:  /* vec_interleave_highv16qi_mask */
    case 3378:  /* avx2_interleave_highv32qi_mask */
    case 3376:  /* avx512bw_interleave_highv64qi_mask */
    case 2534:  /* vec_interleave_lowv2di_mask */
    case 2532:  /* avx512f_interleave_lowv8di_mask */
    case 2530:  /* avx2_interleave_lowv4di_mask */
    case 2528:  /* vec_interleave_highv2di_mask */
    case 2526:  /* avx512f_interleave_highv8di_mask */
    case 2524:  /* avx2_interleave_highv4di_mask */
    case 2352:  /* avx512vl_unpcklpd128_mask */
    case 2351:  /* *avx_unpcklpd256_mask */
    case 2349:  /* *avx512f_unpcklpd512_mask */
    case 2346:  /* avx512vl_unpckhpd128_mask */
    case 2345:  /* avx_unpckhpd256_mask */
    case 2343:  /* avx512f_unpckhpd512_mask */
    case 2241:  /* unpcklps128_mask */
    case 2240:  /* avx_unpcklps256_mask */
    case 2238:  /* avx512f_unpcklps512_mask */
    case 2236:  /* vec_interleave_highv4sf_mask */
    case 2234:  /* avx_unpckhps256_mask */
    case 2232:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2226:  /* *avx512vl_cvtmask2qv2di */
    case 2225:  /* *avx512vl_cvtmask2qv4di */
    case 2224:  /* *avx512f_cvtmask2qv8di */
    case 2223:  /* *avx512vl_cvtmask2dv4si */
    case 2222:  /* *avx512vl_cvtmask2dv8si */
    case 2221:  /* *avx512f_cvtmask2dv16si */
    case 2220:  /* *avx512vl_cvtmask2wv8hi */
    case 2219:  /* *avx512vl_cvtmask2wv16hi */
    case 2218:  /* *avx512bw_cvtmask2wv32hi */
    case 2217:  /* *avx512vl_cvtmask2bv32qi */
    case 2216:  /* *avx512vl_cvtmask2bv16qi */
    case 2215:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4344:  /* vcvtph2ps_mask */
    case 2114:  /* ufix_notruncv2dfv2si2_mask */
    case 2104:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4068:  /* avx512dq_broadcastv8sf_mask */
    case 4066:  /* avx512dq_broadcastv16sf_mask */
    case 4064:  /* avx512dq_broadcastv4si_mask */
    case 4062:  /* avx512dq_broadcastv8si_mask */
    case 4060:  /* avx512dq_broadcastv16si_mask */
    case 3991:  /* avx512vl_vec_dupv8hi_mask */
    case 3989:  /* avx512vl_vec_dupv16hi_mask */
    case 3987:  /* avx512bw_vec_dupv32hi_mask */
    case 3985:  /* avx512vl_vec_dupv32qi_mask */
    case 3983:  /* avx512vl_vec_dupv16qi_mask */
    case 3981:  /* avx512bw_vec_dupv64qi_mask */
    case 3979:  /* avx512vl_vec_dupv2df_mask */
    case 3977:  /* avx512vl_vec_dupv4df_mask */
    case 3975:  /* avx512f_vec_dupv8df_mask */
    case 3973:  /* avx512vl_vec_dupv4sf_mask */
    case 3971:  /* avx512vl_vec_dupv8sf_mask */
    case 3969:  /* avx512f_vec_dupv16sf_mask */
    case 3967:  /* avx512vl_vec_dupv2di_mask */
    case 3965:  /* avx512vl_vec_dupv4di_mask */
    case 3963:  /* avx512f_vec_dupv8di_mask */
    case 3961:  /* avx512vl_vec_dupv4si_mask */
    case 3959:  /* avx512vl_vec_dupv8si_mask */
    case 3957:  /* avx512f_vec_dupv16si_mask */
    case 3713:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 3711:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 3701:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 3699:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 3697:  /* avx2_zero_extendv4hiv4di2_mask */
    case 3695:  /* avx2_sign_extendv4hiv4di2_mask */
    case 3689:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 3687:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 3685:  /* avx2_zero_extendv4qiv4di2_mask */
    case 3683:  /* avx2_sign_extendv4qiv4di2_mask */
    case 3681:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 3679:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 3677:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 3675:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 3665:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 3663:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 3661:  /* avx2_zero_extendv8qiv8si2_mask */
    case 3659:  /* avx2_sign_extendv8qiv8si2_mask */
    case 3653:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 3651:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2228:  /* sse2_cvtps2pd_mask */
    case 2182:  /* sse2_cvttpd2dq_mask */
    case 2176:  /* ufix_truncv2sfv2di2_mask */
    case 2174:  /* fix_truncv2sfv2di2_mask */
    case 2124:  /* ufix_truncv2dfv2si2_mask */
    case 2095:  /* sse2_cvtdq2pd_mask */
    case 2091:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2741:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 2740:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 2739:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 2726:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 2725:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 2724:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 2711:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 2710:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 2709:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 2696:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 2695:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 2694:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 2693:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 2692:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 2691:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2663:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2662:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2661:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2660:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2659:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2658:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2639:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2638:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2637:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2636:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2635:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2634:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2618:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2617:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2616:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2085:  /* *ufloatv2div2sf2_mask_1 */
    case 2084:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2738:  /* avx512f_us_truncatev8div16qi2_mask */
    case 2737:  /* avx512f_truncatev8div16qi2_mask */
    case 2736:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 2723:  /* avx512vl_us_truncatev2div2si2_mask */
    case 2722:  /* avx512vl_truncatev2div2si2_mask */
    case 2721:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 2708:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 2707:  /* avx512vl_truncatev2div2hi2_mask */
    case 2706:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 2690:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 2689:  /* avx512vl_truncatev4div4hi2_mask */
    case 2688:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 2687:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 2686:  /* avx512vl_truncatev4siv4hi2_mask */
    case 2685:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2657:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2656:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2655:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2654:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2653:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2652:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2633:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2632:  /* avx512vl_truncatev4div4qi2_mask */
    case 2631:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2630:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2629:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2628:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2615:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2614:  /* avx512vl_truncatev2div2qi2_mask */
    case 2613:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2083:  /* ufloatv2div2sf2_mask */
    case 2082:  /* floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2010:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2002:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4352:  /* avx512f_vcvtph2ps512_mask_round */
    case 3789:  /* avx512er_rsqrt28v8df_mask_round */
    case 3785:  /* avx512er_rsqrt28v16sf_mask_round */
    case 3777:  /* avx512er_rcp28v8df_mask_round */
    case 3773:  /* avx512er_rcp28v16sf_mask_round */
    case 3769:  /* avx512er_exp2v8df_mask_round */
    case 3765:  /* avx512er_exp2v16sf_mask_round */
    case 2423:  /* avx512vl_getexpv2df_mask_round */
    case 2419:  /* avx512vl_getexpv4df_mask_round */
    case 2415:  /* avx512f_getexpv8df_mask_round */
    case 2411:  /* avx512vl_getexpv4sf_mask_round */
    case 2407:  /* avx512vl_getexpv8sf_mask_round */
    case 2403:  /* avx512f_getexpv16sf_mask_round */
    case 2156:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2148:  /* fix_notruncv8dfv8di2_mask_round */
    case 2112:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2108:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2099:  /* avx512f_cvtpd2dq512_mask_round */
    case 2006:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 1998:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 1994:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 1990:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 1986:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 1982:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4350:  /* *avx512f_vcvtph2ps512_round */
    case 3787:  /* *avx512er_rsqrt28v8df_round */
    case 3783:  /* *avx512er_rsqrt28v16sf_round */
    case 3775:  /* *avx512er_rcp28v8df_round */
    case 3771:  /* *avx512er_rcp28v16sf_round */
    case 3767:  /* avx512er_exp2v8df_round */
    case 3763:  /* avx512er_exp2v16sf_round */
    case 2421:  /* avx512vl_getexpv2df_round */
    case 2417:  /* avx512vl_getexpv4df_round */
    case 2413:  /* avx512f_getexpv8df_round */
    case 2409:  /* avx512vl_getexpv4sf_round */
    case 2405:  /* avx512vl_getexpv8sf_round */
    case 2401:  /* avx512f_getexpv16sf_round */
    case 2154:  /* ufix_notruncv8dfv8di2_round */
    case 2146:  /* fix_notruncv8dfv8di2_round */
    case 2110:  /* ufix_notruncv4dfv4si2_round */
    case 2106:  /* ufix_notruncv8dfv8si2_round */
    case 2097:  /* avx512f_cvtpd2dq512_round */
    case 2004:  /* *avx512dq_cvtps2uqqv8di_round */
    case 1996:  /* *avx512dq_cvtps2qqv8di_round */
    case 1992:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 1988:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 1984:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 1980:  /* avx512f_fix_notruncv16sfv16si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2039:  /* sse2_cvttsd2si_round */
    case 2034:  /* avx512f_vcvttsd2usi_round */
    case 2030:  /* avx512f_vcvttss2usi_round */
    case 1951:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2036:  /* sse2_cvtsd2si_round */
    case 2032:  /* avx512f_vcvtsd2usi_round */
    case 2028:  /* avx512f_vcvtss2usi_round */
    case 1948:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2186:  /* sse2_cvtss2sd_round */
    case 2184:  /* sse2_cvtsd2ss_round */
    case 1953:  /* cvtusi2ss32_round */
    case 1946:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4343:  /* vcvtph2ps */
    case 2113:  /* ufix_notruncv2dfv2si2 */
    case 2103:  /* sse2_cvtpd2dq */
    case 1943:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2185:  /* sse2_cvtss2sd */
    case 2183:  /* sse2_cvtsd2ss */
    case 2026:  /* sse2_cvtsi2sd */
    case 1954:  /* cvtusi2sd32 */
    case 1952:  /* cvtusi2ss32 */
    case 1945:  /* sse_cvtsi2ss */
    case 1942:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1941:  /* *fma4i_vmfnmsub_v2df */
    case 1940:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1939:  /* *fma4i_vmfnmadd_v2df */
    case 1938:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1937:  /* *fma4i_vmfmsub_v2df */
    case 1936:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1935:  /* *fma4i_vmfmadd_v2df */
    case 1934:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1933:  /* *fmai_fnmsub_v2df_round */
    case 1931:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1932:  /* *fmai_fnmsub_v2df */
    case 1930:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1929:  /* *fmai_fnmadd_v2df_round */
    case 1927:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1928:  /* *fmai_fnmadd_v2df */
    case 1926:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1925:  /* *fmai_fmsub_v2df */
    case 1923:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1924:  /* *fmai_fmsub_v2df */
    case 1922:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1921:  /* *fmai_fmadd_v2df */
    case 1919:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1920:  /* *fmai_fmadd_v2df */
    case 1918:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1917:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 1915:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 1913:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 1911:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 1909:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 1907:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1916:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 1914:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 1912:  /* avx512f_fmsubadd_v8df_mask3 */
    case 1910:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 1908:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 1906:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1905:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 1903:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 1901:  /* avx512f_fmsubadd_v8df_mask_round */
    case 1899:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 1897:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 1895:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1904:  /* avx512vl_fmsubadd_v2df_mask */
    case 1902:  /* avx512vl_fmsubadd_v4df_mask */
    case 1900:  /* avx512f_fmsubadd_v8df_mask */
    case 1898:  /* avx512vl_fmsubadd_v4sf_mask */
    case 1896:  /* avx512vl_fmsubadd_v8sf_mask */
    case 1894:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1889:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 1880:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1893:  /* fma_fmsubadd_v2df_maskz_1 */
    case 1891:  /* fma_fmsubadd_v4df_maskz_1 */
    case 1888:  /* fma_fmsubadd_v8df_maskz_1 */
    case 1884:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 1882:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 1879:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1887:  /* *fma_fmsubadd_v8df_round */
    case 1878:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1892:  /* *fma_fmsubadd_v2df */
    case 1890:  /* *fma_fmsubadd_v4df */
    case 1886:  /* *fma_fmsubadd_v8df */
    case 1885:  /* *fma_fmsubadd_df */
    case 1883:  /* *fma_fmsubadd_v4sf */
    case 1881:  /* *fma_fmsubadd_v8sf */
    case 1877:  /* *fma_fmsubadd_v16sf */
    case 1876:  /* *fma_fmsubadd_sf */
    case 1875:  /* *fma_fmsubadd_v2df */
    case 1874:  /* *fma_fmsubadd_v4df */
    case 1873:  /* *fma_fmsubadd_v4sf */
    case 1872:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1871:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 1869:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 1867:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 1865:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 1863:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 1861:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1870:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 1868:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 1866:  /* avx512f_fmaddsub_v8df_mask3 */
    case 1864:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 1862:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 1860:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1859:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 1857:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 1855:  /* avx512f_fmaddsub_v8df_mask_round */
    case 1853:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 1851:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 1849:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4734:  /* vpamdd52huqv2di_mask */
    case 4733:  /* vpamdd52luqv2di_mask */
    case 4732:  /* vpamdd52huqv4di_mask */
    case 4731:  /* vpamdd52luqv4di_mask */
    case 4730:  /* vpamdd52huqv8di_mask */
    case 4729:  /* vpamdd52luqv8di_mask */
    case 1858:  /* avx512vl_fmaddsub_v2df_mask */
    case 1856:  /* avx512vl_fmaddsub_v4df_mask */
    case 1854:  /* avx512f_fmaddsub_v8df_mask */
    case 1852:  /* avx512vl_fmaddsub_v4sf_mask */
    case 1850:  /* avx512vl_fmaddsub_v8sf_mask */
    case 1848:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4623:  /* avx512dq_rangepv8df_mask_round */
    case 4615:  /* avx512dq_rangepv16sf_mask_round */
    case 1843:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 1834:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4728:  /* vpamdd52huqv2di_maskz_1 */
    case 4726:  /* vpamdd52luqv2di_maskz_1 */
    case 4724:  /* vpamdd52huqv4di_maskz_1 */
    case 4722:  /* vpamdd52luqv4di_maskz_1 */
    case 4720:  /* vpamdd52huqv8di_maskz_1 */
    case 4718:  /* vpamdd52luqv8di_maskz_1 */
    case 4679:  /* avx512bw_dbpsadbwv32hi_mask */
    case 4677:  /* avx512bw_dbpsadbwv16hi_mask */
    case 4675:  /* avx512bw_dbpsadbwv8hi_mask */
    case 4627:  /* avx512dq_rangepv2df_mask */
    case 4625:  /* avx512dq_rangepv4df_mask */
    case 4622:  /* avx512dq_rangepv8df_mask */
    case 4619:  /* avx512dq_rangepv4sf_mask */
    case 4617:  /* avx512dq_rangepv8sf_mask */
    case 4614:  /* avx512dq_rangepv16sf_mask */
    case 4207:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4205:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4203:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4201:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4199:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4197:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4195:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4193:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4191:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4189:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4187:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4185:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4183:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4181:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4179:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4177:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4175:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4173:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 4153:  /* avx512bw_vpermi2varv32hi3_maskz_1 */
    case 4151:  /* avx512vl_vpermi2varv16hi3_maskz_1 */
    case 4149:  /* avx512vl_vpermi2varv8hi3_maskz_1 */
    case 4147:  /* avx512vl_vpermi2varv32qi3_maskz_1 */
    case 4145:  /* avx512vl_vpermi2varv16qi3_maskz_1 */
    case 4143:  /* avx512bw_vpermi2varv64qi3_maskz_1 */
    case 4141:  /* avx512vl_vpermi2varv2df3_maskz_1 */
    case 4139:  /* avx512vl_vpermi2varv2di3_maskz_1 */
    case 4137:  /* avx512vl_vpermi2varv4sf3_maskz_1 */
    case 4135:  /* avx512vl_vpermi2varv4si3_maskz_1 */
    case 4133:  /* avx512vl_vpermi2varv4df3_maskz_1 */
    case 4131:  /* avx512vl_vpermi2varv4di3_maskz_1 */
    case 4129:  /* avx512vl_vpermi2varv8sf3_maskz_1 */
    case 4127:  /* avx512vl_vpermi2varv8si3_maskz_1 */
    case 4125:  /* avx512f_vpermi2varv8df3_maskz_1 */
    case 4123:  /* avx512f_vpermi2varv8di3_maskz_1 */
    case 4121:  /* avx512f_vpermi2varv16sf3_maskz_1 */
    case 4119:  /* avx512f_vpermi2varv16si3_maskz_1 */
    case 3572:  /* ssse3_palignrv16qi_mask */
    case 3571:  /* avx2_palignrv32qi_mask */
    case 3570:  /* avx512bw_palignrv64qi_mask */
    case 2439:  /* avx512vl_alignv2di_mask */
    case 2437:  /* avx512vl_alignv4di_mask */
    case 2435:  /* avx512f_alignv8di_mask */
    case 2433:  /* avx512vl_alignv4si_mask */
    case 2431:  /* avx512vl_alignv8si_mask */
    case 2429:  /* avx512f_alignv16si_mask */
    case 1847:  /* fma_fmaddsub_v2df_maskz_1 */
    case 1845:  /* fma_fmaddsub_v4df_maskz_1 */
    case 1842:  /* fma_fmaddsub_v8df_maskz_1 */
    case 1838:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 1836:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 1833:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1825:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 1823:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 1821:  /* avx512f_fnmsub_v8df_mask3_round */
    case 1819:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 1817:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 1815:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1824:  /* avx512vl_fnmsub_v2df_mask3 */
    case 1822:  /* avx512vl_fnmsub_v4df_mask3 */
    case 1820:  /* avx512f_fnmsub_v8df_mask3 */
    case 1818:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 1816:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 1814:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1811:  /* avx512f_fnmsub_v8df_mask_round */
    case 1807:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1813:  /* avx512vl_fnmsub_v2df_mask */
    case 1812:  /* avx512vl_fnmsub_v4df_mask */
    case 1810:  /* avx512f_fnmsub_v8df_mask */
    case 1809:  /* avx512vl_fnmsub_v4sf_mask */
    case 1808:  /* avx512vl_fnmsub_v8sf_mask */
    case 1806:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1801:  /* fma_fnmsub_v8df_maskz_1_round */
    case 1792:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 1787:  /* *fma_fnmsub_v4df */
    case 1783:  /* *fma_fnmsub_v8sf */
    case 1779:  /* *fma_fnmsub_v2df */
    case 1775:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1805:  /* fma_fnmsub_v2df_maskz_1 */
    case 1803:  /* fma_fnmsub_v4df_maskz_1 */
    case 1800:  /* fma_fnmsub_v8df_maskz_1 */
    case 1796:  /* fma_fnmsub_v4sf_maskz_1 */
    case 1794:  /* fma_fnmsub_v8sf_maskz_1 */
    case 1791:  /* fma_fnmsub_v16sf_maskz_1 */
    case 1786:  /* *fma_fnmsub_v4df */
    case 1782:  /* *fma_fnmsub_v8sf */
    case 1778:  /* *fma_fnmsub_v2df */
    case 1774:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1799:  /* *fma_fnmsub_v8df_round */
    case 1790:  /* *fma_fnmsub_v16sf_round */
    case 1785:  /* *fma_fnmsub_v4df */
    case 1781:  /* *fma_fnmsub_v8sf */
    case 1777:  /* *fma_fnmsub_v2df */
    case 1773:  /* *fma_fnmsub_v4sf */
    case 1771:  /* *fma_fnmsub_df */
    case 1769:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1804:  /* *fma_fnmsub_v2df */
    case 1802:  /* *fma_fnmsub_v4df */
    case 1798:  /* *fma_fnmsub_v8df */
    case 1797:  /* *fma_fnmsub_df */
    case 1795:  /* *fma_fnmsub_v4sf */
    case 1793:  /* *fma_fnmsub_v8sf */
    case 1789:  /* *fma_fnmsub_v16sf */
    case 1788:  /* *fma_fnmsub_sf */
    case 1784:  /* *fma_fnmsub_v4df */
    case 1780:  /* *fma_fnmsub_v8sf */
    case 1776:  /* *fma_fnmsub_v2df */
    case 1772:  /* *fma_fnmsub_v4sf */
    case 1770:  /* *fma_fnmsub_df */
    case 1768:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1765:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1761:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1767:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1766:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1764:  /* avx512f_fnmadd_v8df_mask3 */
    case 1763:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1762:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1760:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1757:  /* avx512f_fnmadd_v8df_mask_round */
    case 1753:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1759:  /* avx512vl_fnmadd_v2df_mask */
    case 1758:  /* avx512vl_fnmadd_v4df_mask */
    case 1756:  /* avx512f_fnmadd_v8df_mask */
    case 1755:  /* avx512vl_fnmadd_v4sf_mask */
    case 1754:  /* avx512vl_fnmadd_v8sf_mask */
    case 1752:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1747:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1738:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1751:  /* fma_fnmadd_v2df_maskz_1 */
    case 1749:  /* fma_fnmadd_v4df_maskz_1 */
    case 1746:  /* fma_fnmadd_v8df_maskz_1 */
    case 1742:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1740:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1737:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1725:  /* avx512f_fmsub_v8df_mask3_round */
    case 1721:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1727:  /* avx512vl_fmsub_v2df_mask3 */
    case 1726:  /* avx512vl_fmsub_v4df_mask3 */
    case 1724:  /* avx512f_fmsub_v8df_mask3 */
    case 1723:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1722:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1720:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1719:  /* avx512vl_fmsub_v2df_mask_round */
    case 1717:  /* avx512vl_fmsub_v4df_mask_round */
    case 1715:  /* avx512f_fmsub_v8df_mask_round */
    case 1713:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1711:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1709:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1718:  /* avx512vl_fmsub_v2df_mask */
    case 1716:  /* avx512vl_fmsub_v4df_mask */
    case 1714:  /* avx512f_fmsub_v8df_mask */
    case 1712:  /* avx512vl_fmsub_v4sf_mask */
    case 1710:  /* avx512vl_fmsub_v8sf_mask */
    case 1708:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1703:  /* fma_fmsub_v8df_maskz_1_round */
    case 1694:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1707:  /* fma_fmsub_v2df_maskz_1 */
    case 1705:  /* fma_fmsub_v4df_maskz_1 */
    case 1702:  /* fma_fmsub_v8df_maskz_1 */
    case 1698:  /* fma_fmsub_v4sf_maskz_1 */
    case 1696:  /* fma_fmsub_v8sf_maskz_1 */
    case 1693:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1701:  /* *fma_fmsub_v8df_round */
    case 1692:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1706:  /* *fma_fmsub_v2df */
    case 1704:  /* *fma_fmsub_v4df */
    case 1700:  /* *fma_fmsub_v8df */
    case 1699:  /* *fma_fmsub_df */
    case 1697:  /* *fma_fmsub_v4sf */
    case 1695:  /* *fma_fmsub_v8sf */
    case 1691:  /* *fma_fmsub_v16sf */
    case 1690:  /* *fma_fmsub_sf */
    case 1689:  /* *fma_fmsub_v4df */
    case 1688:  /* *fma_fmsub_v8sf */
    case 1687:  /* *fma_fmsub_v2df */
    case 1686:  /* *fma_fmsub_v4sf */
    case 1685:  /* *fma_fmsub_df */
    case 1684:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1683:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1681:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1679:  /* avx512f_fmadd_v8df_mask3_round */
    case 1677:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1675:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1673:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1682:  /* avx512vl_fmadd_v2df_mask3 */
    case 1680:  /* avx512vl_fmadd_v4df_mask3 */
    case 1678:  /* avx512f_fmadd_v8df_mask3 */
    case 1676:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1674:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1672:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1669:  /* avx512f_fmadd_v8df_mask_round */
    case 1665:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1671:  /* avx512vl_fmadd_v2df_mask */
    case 1670:  /* avx512vl_fmadd_v4df_mask */
    case 1668:  /* avx512f_fmadd_v8df_mask */
    case 1667:  /* avx512vl_fmadd_v4sf_mask */
    case 1666:  /* avx512vl_fmadd_v8sf_mask */
    case 1664:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1659:  /* fma_fmadd_v8df_maskz_1_round */
    case 1650:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1663:  /* fma_fmadd_v2df_maskz_1 */
    case 1661:  /* fma_fmadd_v4df_maskz_1 */
    case 1658:  /* fma_fmadd_v8df_maskz_1 */
    case 1654:  /* fma_fmadd_v4sf_maskz_1 */
    case 1652:  /* fma_fmadd_v8sf_maskz_1 */
    case 1649:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1657:  /* *fma_fmadd_v8df_round */
    case 1648:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4253:  /* vec_set_hi_v8sf_mask */
    case 4251:  /* vec_set_hi_v8si_mask */
    case 4245:  /* vec_set_hi_v4df_mask */
    case 4243:  /* vec_set_hi_v4di_mask */
    case 3438:  /* vec_set_hi_v8di_mask */
    case 3436:  /* vec_set_hi_v8df_mask */
    case 3430:  /* vec_set_hi_v16si_mask */
    case 3428:  /* vec_set_hi_v16sf_mask */
    case 3236:  /* *andnotv2di3_mask */
    case 3235:  /* *andnotv4di3_mask */
    case 3234:  /* *andnotv8di3_mask */
    case 3233:  /* *andnotv4si3_mask */
    case 3232:  /* *andnotv8si3_mask */
    case 3231:  /* *andnotv16si3_mask */
    case 2194:  /* *sse2_cvtpd2ps_mask */
    case 1591:  /* avx512f_andnotv8df3_mask */
    case 1589:  /* avx512f_andnotv16sf3_mask */
    case 1587:  /* sse2_andnotv2df3_mask */
    case 1585:  /* avx_andnotv4df3_mask */
    case 1583:  /* sse_andnotv4sf3_mask */
    case 1581:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1579:  /* sse2_ucomi_round */
    case 1577:  /* sse_ucomi_round */
    case 1575:  /* sse2_comi_round */
    case 1573:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1578:  /* sse2_ucomi */
    case 1576:  /* sse_ucomi */
    case 1574:  /* sse2_comi */
    case 1572:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1565:  /* avx512f_vmcmpv2df3_mask_round */
    case 1563:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1564:  /* avx512f_vmcmpv2df3_mask */
    case 1562:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1561:  /* avx512f_vmcmpv2df3_round */
    case 1559:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1560:  /* avx512f_vmcmpv2df3 */
    case 1558:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1517:  /* avx512f_cmpv8df3_mask_round */
    case 1509:  /* avx512f_cmpv16sf3_mask_round */
    case 1501:  /* avx512f_cmpv8di3_mask_round */
    case 1493:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4621:  /* avx512dq_rangepv8df_round */
    case 4613:  /* avx512dq_rangepv16sf_round */
    case 1841:  /* *fma_fmaddsub_v8df_round */
    case 1832:  /* *fma_fmaddsub_v16sf_round */
    case 1516:  /* avx512f_cmpv8df3_round */
    case 1508:  /* avx512f_cmpv16sf3_round */
    case 1500:  /* avx512f_cmpv8di3_round */
    case 1492:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1557:  /* avx512vl_ucmpv2di3_mask */
    case 1555:  /* avx512vl_ucmpv4di3_mask */
    case 1553:  /* avx512f_ucmpv8di3_mask */
    case 1551:  /* avx512vl_ucmpv4si3_mask */
    case 1549:  /* avx512vl_ucmpv8si3_mask */
    case 1547:  /* avx512f_ucmpv16si3_mask */
    case 1545:  /* avx512vl_ucmpv8hi3_mask */
    case 1543:  /* avx512vl_ucmpv16hi3_mask */
    case 1541:  /* avx512bw_ucmpv32hi3_mask */
    case 1539:  /* avx512vl_ucmpv32qi3_mask */
    case 1537:  /* avx512vl_ucmpv16qi3_mask */
    case 1535:  /* avx512bw_ucmpv64qi3_mask */
    case 1533:  /* avx512vl_cmpv8hi3_mask */
    case 1531:  /* avx512vl_cmpv16hi3_mask */
    case 1529:  /* avx512bw_cmpv32hi3_mask */
    case 1527:  /* avx512vl_cmpv32qi3_mask */
    case 1525:  /* avx512vl_cmpv16qi3_mask */
    case 1523:  /* avx512bw_cmpv64qi3_mask */
    case 1521:  /* avx512vl_cmpv2df3_mask */
    case 1519:  /* avx512vl_cmpv4df3_mask */
    case 1515:  /* avx512f_cmpv8df3_mask */
    case 1513:  /* avx512vl_cmpv4sf3_mask */
    case 1511:  /* avx512vl_cmpv8sf3_mask */
    case 1507:  /* avx512f_cmpv16sf3_mask */
    case 1505:  /* avx512vl_cmpv2di3_mask */
    case 1503:  /* avx512vl_cmpv4di3_mask */
    case 1499:  /* avx512f_cmpv8di3_mask */
    case 1497:  /* avx512vl_cmpv4si3_mask */
    case 1495:  /* avx512vl_cmpv8si3_mask */
    case 1491:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1489:  /* sse2_vmmaskcmpv2df3 */
    case 1488:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4672:  /* avx512f_vgetmantv2df */
    case 4670:  /* avx512f_vgetmantv4sf */
    case 4630:  /* avx512dq_rangesv2df */
    case 4628:  /* avx512dq_rangesv4sf */
    case 2514:  /* avx512f_rndscalev2df */
    case 2512:  /* avx512f_rndscalev4sf */
    case 1479:  /* avx_vmcmpv2df3 */
    case 1478:  /* avx_vmcmpv4sf3 */
    case 1473:  /* reducesv2df */
    case 1472:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4740:  /* vpmultishiftqbv32qi_mask */
    case 4738:  /* vpmultishiftqbv16qi_mask */
    case 4736:  /* vpmultishiftqbv64qi_mask */
    case 4668:  /* avx512vl_getmantv2df_mask */
    case 4664:  /* avx512vl_getmantv4df_mask */
    case 4660:  /* avx512f_getmantv8df_mask */
    case 4656:  /* avx512vl_getmantv4sf_mask */
    case 4652:  /* avx512vl_getmantv8sf_mask */
    case 4648:  /* avx512f_getmantv16sf_mask */
    case 4359:  /* avx512f_vcvtps2ph512_mask */
    case 4357:  /* vcvtps2ph256_mask */
    case 4117:  /* avx_vpermilvarv2df3_mask */
    case 4115:  /* avx_vpermilvarv4df3_mask */
    case 4113:  /* avx512f_vpermilvarv8df3_mask */
    case 4111:  /* avx_vpermilvarv4sf3_mask */
    case 4109:  /* avx_vpermilvarv8sf3_mask */
    case 4107:  /* avx512f_vpermilvarv16sf3_mask */
    case 3941:  /* avx512bw_permvarv32hi_mask */
    case 3939:  /* avx512vl_permvarv16hi_mask */
    case 3937:  /* avx512vl_permvarv8hi_mask */
    case 3935:  /* avx512vl_permvarv32qi_mask */
    case 3933:  /* avx512vl_permvarv16qi_mask */
    case 3931:  /* avx512bw_permvarv64qi_mask */
    case 3929:  /* avx2_permvarv4df_mask */
    case 3927:  /* avx2_permvarv4di_mask */
    case 3925:  /* avx512f_permvarv8df_mask */
    case 3923:  /* avx512f_permvarv8di_mask */
    case 3921:  /* avx512f_permvarv16sf_mask */
    case 3919:  /* avx512f_permvarv16si_mask */
    case 3917:  /* avx2_permvarv8sf_mask */
    case 3915:  /* avx2_permvarv8si_mask */
    case 3559:  /* ssse3_pshufbv16qi3_mask */
    case 3557:  /* avx2_pshufbv32qi3_mask */
    case 3555:  /* avx512bw_pshufbv64qi3_mask */
    case 3542:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 3540:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 3538:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3468:  /* avx512bw_pshufhwv32hi_mask */
    case 3462:  /* avx512bw_pshuflwv32hi_mask */
    case 2900:  /* avx512bw_pmaddwd512v8hi_mask */
    case 2898:  /* avx512bw_pmaddwd512v16hi_mask */
    case 2896:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2510:  /* avx512vl_rndscalev2df_mask */
    case 2506:  /* avx512vl_rndscalev4df_mask */
    case 2502:  /* avx512f_rndscalev8df_mask */
    case 2498:  /* avx512vl_rndscalev4sf_mask */
    case 2494:  /* avx512vl_rndscalev8sf_mask */
    case 2490:  /* avx512f_rndscalev16sf_mask */
    case 2380:  /* avx512vl_scalefv2df_mask */
    case 2376:  /* avx512vl_scalefv4df_mask */
    case 2372:  /* avx512f_scalefv8df_mask */
    case 2368:  /* avx512vl_scalefv4sf_mask */
    case 2364:  /* avx512vl_scalefv8sf_mask */
    case 2360:  /* avx512f_scalefv16sf_mask */
    case 1471:  /* reducepv2df_mask */
    case 1469:  /* reducepv4df_mask */
    case 1467:  /* reducepv8df_mask */
    case 1465:  /* reducepv4sf_mask */
    case 1463:  /* reducepv8sf_mask */
    case 1461:  /* reducepv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3533:  /* ssse3_phsubdv4si3 */
    case 3532:  /* ssse3_phadddv4si3 */
    case 3529:  /* ssse3_phsubswv4hi3 */
    case 3528:  /* ssse3_phsubwv4hi3 */
    case 3527:  /* ssse3_phaddswv4hi3 */
    case 3526:  /* ssse3_phaddwv4hi3 */
    case 1459:  /* sse3_hsubv4sf3 */
    case 1458:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1457:  /* avx_hsubv8sf3 */
    case 1456:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1455:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1454:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1452:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1451:  /* avx_hsubv4df3 */
    case 1450:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1328:  /* sse2_vmsqrtv2df2_round */
    case 1326:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 2198:  /* avx512f_cvtps2pd512_mask_round */
    case 2190:  /* avx512f_cvtpd2ps512_mask_round */
    case 2168:  /* ufix_truncv8sfv8di2_mask_round */
    case 2164:  /* fix_truncv8sfv8di2_mask_round */
    case 2136:  /* ufix_truncv8dfv8di2_mask_round */
    case 2132:  /* fix_truncv8dfv8di2_mask_round */
    case 2122:  /* ufix_truncv8dfv8si2_mask_round */
    case 2118:  /* fix_truncv8dfv8si2_mask_round */
    case 2075:  /* ufloatv8div8sf2_mask_round */
    case 2071:  /* floatv8div8sf2_mask_round */
    case 2067:  /* ufloatv2div2df2_mask_round */
    case 2063:  /* floatv2div2df2_mask_round */
    case 2059:  /* ufloatv4div4df2_mask_round */
    case 2055:  /* floatv4div4df2_mask_round */
    case 2051:  /* ufloatv8div8df2_mask_round */
    case 2047:  /* floatv8div8df2_mask_round */
    case 2018:  /* ufix_truncv16sfv16si2_mask_round */
    case 2014:  /* fix_truncv16sfv16si2_mask_round */
    case 1974:  /* ufloatv4siv4sf2_mask_round */
    case 1970:  /* ufloatv8siv8sf2_mask_round */
    case 1966:  /* ufloatv16siv16sf2_mask_round */
    case 1958:  /* floatv16siv16sf2_mask_round */
    case 1745:  /* *fma_fnmadd_v8df_round */
    case 1736:  /* *fma_fnmadd_v16sf_round */
    case 1320:  /* avx512f_sqrtv8df2_mask_round */
    case 1312:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4691:  /* clzv2di2_mask */
    case 4689:  /* clzv4di2_mask */
    case 4687:  /* clzv8di2_mask */
    case 4685:  /* clzv4si2_mask */
    case 4683:  /* clzv8si2_mask */
    case 4681:  /* clzv16si2_mask */
    case 4084:  /* avx512dq_broadcastv4df_mask_1 */
    case 4082:  /* avx512dq_broadcastv4di_mask_1 */
    case 4080:  /* avx512dq_broadcastv8df_mask_1 */
    case 4078:  /* avx512dq_broadcastv8di_mask_1 */
    case 4076:  /* avx512dq_broadcastv16si_mask_1 */
    case 4074:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4072:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4070:  /* avx512vl_broadcastv8si_mask_1 */
    case 4035:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4033:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4031:  /* avx512f_vec_dup_gprv8df_mask */
    case 4029:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4027:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4025:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4023:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4021:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4019:  /* avx512f_vec_dup_gprv8di_mask */
    case 4017:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4015:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4013:  /* avx512f_vec_dup_gprv16si_mask */
    case 4011:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4009:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4007:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4005:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4003:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4001:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 3999:  /* avx512f_broadcastv8di_mask */
    case 3997:  /* avx512f_broadcastv8df_mask */
    case 3995:  /* avx512f_broadcastv16si_mask */
    case 3993:  /* avx512f_broadcastv16sf_mask */
    case 3709:  /* avx2_zero_extendv4siv4di2_mask */
    case 3707:  /* avx2_sign_extendv4siv4di2_mask */
    case 3705:  /* avx512f_zero_extendv8siv8di2_mask */
    case 3703:  /* avx512f_sign_extendv8siv8di2_mask */
    case 3693:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 3691:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 3673:  /* avx2_zero_extendv8hiv8si2_mask */
    case 3671:  /* avx2_sign_extendv8hiv8si2_mask */
    case 3669:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 3667:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 3657:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 3655:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 3649:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 3647:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 3645:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 3643:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 3600:  /* absv8hi2_mask */
    case 3599:  /* absv16hi2_mask */
    case 3598:  /* absv32hi2_mask */
    case 3597:  /* absv32qi2_mask */
    case 3596:  /* absv16qi2_mask */
    case 3595:  /* absv64qi2_mask */
    case 3594:  /* absv2di2_mask */
    case 3593:  /* absv4di2_mask */
    case 3592:  /* absv8di2_mask */
    case 3591:  /* absv4si2_mask */
    case 3590:  /* absv8si2_mask */
    case 3589:  /* absv16si2_mask */
    case 2594:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2593:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2592:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2591:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2590:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2589:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2588:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2587:  /* avx512vl_truncatev4div4si2_mask */
    case 2586:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2576:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2575:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2574:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2570:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2569:  /* avx512f_truncatev8div8hi2_mask */
    case 2568:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2567:  /* avx512f_us_truncatev8div8si2_mask */
    case 2566:  /* avx512f_truncatev8div8si2_mask */
    case 2565:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2564:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2563:  /* avx512f_truncatev16siv16hi2_mask */
    case 2562:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2561:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2560:  /* avx512f_truncatev16siv16qi2_mask */
    case 2559:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2545:  /* vec_dupv2df_mask */
    case 2331:  /* vec_extract_hi_v8sf_mask */
    case 2330:  /* vec_extract_hi_v8si_mask */
    case 2329:  /* vec_extract_hi_v8sf_maskm */
    case 2328:  /* vec_extract_hi_v8si_maskm */
    case 2327:  /* vec_extract_lo_v8sf_maskm */
    case 2326:  /* vec_extract_lo_v8si_maskm */
    case 2325:  /* vec_extract_lo_v8sf_mask */
    case 2323:  /* vec_extract_lo_v8si_mask */
    case 2321:  /* vec_extract_hi_v4df_mask */
    case 2319:  /* vec_extract_hi_v4di_mask */
    case 2317:  /* vec_extract_lo_v4df_mask */
    case 2315:  /* vec_extract_lo_v4di_mask */
    case 2313:  /* vec_extract_lo_v16si_mask */
    case 2311:  /* vec_extract_lo_v16sf_mask */
    case 2309:  /* vec_extract_hi_v16si_mask */
    case 2307:  /* vec_extract_hi_v16sf_mask */
    case 2305:  /* vec_extract_hi_v16si_maskm */
    case 2304:  /* vec_extract_hi_v16sf_maskm */
    case 2303:  /* vec_extract_hi_v8di_mask */
    case 2301:  /* vec_extract_hi_v8df_mask */
    case 2299:  /* vec_extract_hi_v8di_maskm */
    case 2298:  /* vec_extract_hi_v8df_maskm */
    case 2297:  /* vec_extract_lo_v8di_mask */
    case 2295:  /* vec_extract_lo_v8df_mask */
    case 2293:  /* vec_extract_lo_v8di_maskm */
    case 2292:  /* vec_extract_lo_v8df_maskm */
    case 2200:  /* avx_cvtps2pd256_mask */
    case 2197:  /* avx512f_cvtps2pd512_mask */
    case 2192:  /* avx_cvtpd2ps256_mask */
    case 2189:  /* avx512f_cvtpd2ps512_mask */
    case 2180:  /* ufix_truncv4sfv4si2_mask */
    case 2178:  /* ufix_truncv8sfv8si2_mask */
    case 2172:  /* ufix_truncv4sfv4di2_mask */
    case 2170:  /* fix_truncv4sfv4di2_mask */
    case 2167:  /* ufix_truncv8sfv8di2_mask */
    case 2163:  /* fix_truncv8sfv8di2_mask */
    case 2144:  /* ufix_truncv2dfv2di2_mask */
    case 2142:  /* fix_truncv2dfv2di2_mask */
    case 2140:  /* ufix_truncv4dfv4di2_mask */
    case 2138:  /* fix_truncv4dfv4di2_mask */
    case 2135:  /* ufix_truncv8dfv8di2_mask */
    case 2131:  /* fix_truncv8dfv8di2_mask */
    case 2128:  /* ufix_truncv4dfv4si2_mask */
    case 2126:  /* fix_truncv4dfv4si2_mask */
    case 2121:  /* ufix_truncv8dfv8si2_mask */
    case 2117:  /* fix_truncv8dfv8si2_mask */
    case 2089:  /* ufloatv4siv4df2_mask */
    case 2087:  /* ufloatv8siv8df2_mask */
    case 2079:  /* ufloatv4div4sf2_mask */
    case 2077:  /* floatv4div4sf2_mask */
    case 2074:  /* ufloatv8div8sf2_mask */
    case 2070:  /* floatv8div8sf2_mask */
    case 2066:  /* ufloatv2div2df2_mask */
    case 2062:  /* floatv2div2df2_mask */
    case 2058:  /* ufloatv4div4df2_mask */
    case 2054:  /* floatv4div4df2_mask */
    case 2050:  /* ufloatv8div8df2_mask */
    case 2046:  /* floatv8div8df2_mask */
    case 2043:  /* floatv4siv4df2_mask */
    case 2041:  /* floatv8siv8df2_mask */
    case 2022:  /* fix_truncv4sfv4si2_mask */
    case 2020:  /* fix_truncv8sfv8si2_mask */
    case 2017:  /* ufix_truncv16sfv16si2_mask */
    case 2013:  /* fix_truncv16sfv16si2_mask */
    case 1973:  /* ufloatv4siv4sf2_mask */
    case 1969:  /* ufloatv8siv8sf2_mask */
    case 1965:  /* ufloatv16siv16sf2_mask */
    case 1962:  /* floatv4siv4sf2_mask */
    case 1960:  /* floatv8siv8sf2_mask */
    case 1957:  /* floatv16siv16sf2_mask */
    case 1750:  /* *fma_fnmadd_v2df */
    case 1748:  /* *fma_fnmadd_v4df */
    case 1744:  /* *fma_fnmadd_v8df */
    case 1743:  /* *fma_fnmadd_df */
    case 1741:  /* *fma_fnmadd_v4sf */
    case 1739:  /* *fma_fnmadd_v8sf */
    case 1735:  /* *fma_fnmadd_v16sf */
    case 1734:  /* *fma_fnmadd_sf */
    case 1733:  /* *fma_fnmadd_v4df */
    case 1732:  /* *fma_fnmadd_v8sf */
    case 1731:  /* *fma_fnmadd_v2df */
    case 1730:  /* *fma_fnmadd_v4sf */
    case 1729:  /* *fma_fnmadd_df */
    case 1728:  /* *fma_fnmadd_sf */
    case 1324:  /* sse2_sqrtv2df2_mask */
    case 1322:  /* avx_sqrtv4df2_mask */
    case 1319:  /* avx512f_sqrtv8df2_mask */
    case 1316:  /* sse_sqrtv4sf2_mask */
    case 1314:  /* avx_sqrtv8sf2_mask */
    case 1311:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3868:  /* *xop_vmfrczv2df2 */
    case 3867:  /* *xop_vmfrczv4sf2 */
    case 3792:  /* avx512er_vmrsqrt28v2df */
    case 3790:  /* avx512er_vmrsqrt28v4sf */
    case 3780:  /* avx512er_vmrcp28v2df */
    case 3778:  /* avx512er_vmrcp28v4sf */
    case 2102:  /* *avx_cvtpd2dq256_2 */
    case 1345:  /* sse_vmrsqrtv4sf2 */
    case 1344:  /* rsqrt14v2df */
    case 1343:  /* rsqrt14v4sf */
    case 1308:  /* srcp14v2df */
    case 1307:  /* srcp14v4sf */
    case 1294:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1433:  /* sse2_vmsminv2df3_round */
    case 1431:  /* sse2_vmsmaxv2df3_round */
    case 1429:  /* sse_vmsminv4sf3_round */
    case 1427:  /* sse_vmsmaxv4sf3_round */
    case 1275:  /* sse2_vmdivv2df3_round */
    case 1273:  /* sse2_vmmulv2df3_round */
    case 1271:  /* sse_vmdivv4sf3_round */
    case 1269:  /* sse_vmmulv4sf3_round */
    case 1243:  /* sse2_vmsubv2df3_round */
    case 1241:  /* sse2_vmaddv2df3_round */
    case 1239:  /* sse_vmsubv4sf3_round */
    case 1237:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1432:  /* sse2_vmsminv2df3 */
    case 1430:  /* sse2_vmsmaxv2df3 */
    case 1428:  /* sse_vmsminv4sf3 */
    case 1426:  /* sse_vmsmaxv4sf3 */
    case 1274:  /* sse2_vmdivv2df3 */
    case 1272:  /* sse2_vmmulv2df3 */
    case 1270:  /* sse_vmdivv4sf3 */
    case 1268:  /* sse_vmmulv4sf3 */
    case 1242:  /* sse2_vmsubv2df3 */
    case 1240:  /* sse2_vmaddv2df3 */
    case 1238:  /* sse_vmsubv4sf3 */
    case 1236:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1417:  /* *sminv8df3_mask_round */
    case 1413:  /* *smaxv8df3_mask_round */
    case 1401:  /* *sminv16sf3_mask_round */
    case 1397:  /* *smaxv16sf3_mask_round */
    case 1393:  /* *sminv2df3_finite_mask_round */
    case 1389:  /* *smaxv2df3_finite_mask_round */
    case 1385:  /* *sminv4df3_finite_mask_round */
    case 1381:  /* *smaxv4df3_finite_mask_round */
    case 1377:  /* *sminv8df3_finite_mask_round */
    case 1373:  /* *smaxv8df3_finite_mask_round */
    case 1369:  /* *sminv4sf3_finite_mask_round */
    case 1365:  /* *smaxv4sf3_finite_mask_round */
    case 1361:  /* *sminv8sf3_finite_mask_round */
    case 1357:  /* *smaxv8sf3_finite_mask_round */
    case 1353:  /* *sminv16sf3_finite_mask_round */
    case 1349:  /* *smaxv16sf3_finite_mask_round */
    case 1287:  /* avx512f_divv8df3_mask_round */
    case 1279:  /* avx512f_divv16sf3_mask_round */
    case 1267:  /* *mulv2df3_mask_round */
    case 1263:  /* *mulv4df3_mask_round */
    case 1259:  /* *mulv8df3_mask_round */
    case 1255:  /* *mulv4sf3_mask_round */
    case 1251:  /* *mulv8sf3_mask_round */
    case 1247:  /* *mulv16sf3_mask_round */
    case 1235:  /* *subv2df3_mask_round */
    case 1231:  /* *addv2df3_mask_round */
    case 1227:  /* *subv4df3_mask_round */
    case 1223:  /* *addv4df3_mask_round */
    case 1219:  /* *subv8df3_mask_round */
    case 1215:  /* *addv8df3_mask_round */
    case 1211:  /* *subv4sf3_mask_round */
    case 1207:  /* *addv4sf3_mask_round */
    case 1203:  /* *subv8sf3_mask_round */
    case 1199:  /* *addv8sf3_mask_round */
    case 1195:  /* *subv16sf3_mask_round */
    case 1191:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 4330:  /* avx512bw_lshrvv32hi_mask */
    case 4328:  /* avx512bw_ashlvv32hi_mask */
    case 4326:  /* avx512vl_lshrvv16hi_mask */
    case 4324:  /* avx512vl_ashlvv16hi_mask */
    case 4322:  /* avx512vl_lshrvv8hi_mask */
    case 4320:  /* avx512vl_ashlvv8hi_mask */
    case 4318:  /* avx2_lshrvv2di_mask */
    case 4316:  /* avx2_ashlvv2di_mask */
    case 4314:  /* avx2_lshrvv4di_mask */
    case 4312:  /* avx2_ashlvv4di_mask */
    case 4310:  /* avx512f_lshrvv8di_mask */
    case 4308:  /* avx512f_ashlvv8di_mask */
    case 4306:  /* avx2_lshrvv4si_mask */
    case 4304:  /* avx2_ashlvv4si_mask */
    case 4302:  /* avx2_lshrvv8si_mask */
    case 4300:  /* avx2_ashlvv8si_mask */
    case 4298:  /* avx512f_lshrvv16si_mask */
    case 4296:  /* avx512f_ashlvv16si_mask */
    case 4294:  /* avx512bw_ashrvv32hi_mask */
    case 4292:  /* avx512vl_ashrvv16hi_mask */
    case 4290:  /* avx512vl_ashrvv8hi_mask */
    case 4288:  /* avx512f_ashrvv8di_mask */
    case 4286:  /* avx2_ashrvv4di_mask */
    case 4284:  /* avx2_ashrvv2di_mask */
    case 4282:  /* avx512f_ashrvv16si_mask */
    case 4280:  /* avx2_ashrvv8si_mask */
    case 4278:  /* avx2_ashrvv4si_mask */
    case 3308:  /* *xorv8hi3 */
    case 3306:  /* *iorv8hi3 */
    case 3304:  /* *andv8hi3 */
    case 3302:  /* *xorv16hi3 */
    case 3300:  /* *iorv16hi3 */
    case 3298:  /* *andv16hi3 */
    case 3296:  /* *xorv32hi3 */
    case 3294:  /* *iorv32hi3 */
    case 3292:  /* *andv32hi3 */
    case 3290:  /* *xorv16qi3 */
    case 3288:  /* *iorv16qi3 */
    case 3286:  /* *andv16qi3 */
    case 3284:  /* *xorv32qi3 */
    case 3282:  /* *iorv32qi3 */
    case 3280:  /* *andv32qi3 */
    case 3278:  /* *xorv64qi3 */
    case 3276:  /* *iorv64qi3 */
    case 3274:  /* *andv64qi3 */
    case 3272:  /* xorv2di3_mask */
    case 3270:  /* iorv2di3_mask */
    case 3268:  /* andv2di3_mask */
    case 3266:  /* xorv4di3_mask */
    case 3264:  /* iorv4di3_mask */
    case 3262:  /* andv4di3_mask */
    case 3260:  /* xorv8di3_mask */
    case 3258:  /* iorv8di3_mask */
    case 3256:  /* andv8di3_mask */
    case 3254:  /* xorv4si3_mask */
    case 3252:  /* iorv4si3_mask */
    case 3250:  /* andv4si3_mask */
    case 3248:  /* xorv8si3_mask */
    case 3246:  /* iorv8si3_mask */
    case 3244:  /* andv8si3_mask */
    case 3242:  /* xorv16si3_mask */
    case 3240:  /* iorv16si3_mask */
    case 3238:  /* andv16si3_mask */
    case 3152:  /* *sse4_1_uminv4si3_mask */
    case 3150:  /* *sse4_1_umaxv4si3_mask */
    case 3148:  /* *sse4_1_uminv8hi3_mask */
    case 3146:  /* *sse4_1_umaxv8hi3_mask */
    case 3142:  /* *sse4_1_sminv4si3_mask */
    case 3140:  /* *sse4_1_smaxv4si3_mask */
    case 3138:  /* *sse4_1_sminv16qi3_mask */
    case 3136:  /* *sse4_1_smaxv16qi3_mask */
    case 3134:  /* uminv8hi3_mask */
    case 3132:  /* umaxv8hi3_mask */
    case 3130:  /* sminv8hi3_mask */
    case 3128:  /* smaxv8hi3_mask */
    case 3126:  /* uminv16hi3_mask */
    case 3124:  /* umaxv16hi3_mask */
    case 3122:  /* sminv16hi3_mask */
    case 3120:  /* smaxv16hi3_mask */
    case 3118:  /* uminv32hi3_mask */
    case 3116:  /* umaxv32hi3_mask */
    case 3114:  /* sminv32hi3_mask */
    case 3112:  /* smaxv32hi3_mask */
    case 3110:  /* uminv32qi3_mask */
    case 3108:  /* umaxv32qi3_mask */
    case 3106:  /* sminv32qi3_mask */
    case 3104:  /* smaxv32qi3_mask */
    case 3102:  /* uminv16qi3_mask */
    case 3100:  /* umaxv16qi3_mask */
    case 3098:  /* sminv16qi3_mask */
    case 3096:  /* smaxv16qi3_mask */
    case 3094:  /* uminv64qi3_mask */
    case 3092:  /* umaxv64qi3_mask */
    case 3090:  /* sminv64qi3_mask */
    case 3088:  /* smaxv64qi3_mask */
    case 3086:  /* *avx512bw_uminv2di3_mask */
    case 3084:  /* *avx512bw_umaxv2di3_mask */
    case 3082:  /* *avx512bw_sminv2di3_mask */
    case 3080:  /* *avx512bw_smaxv2di3_mask */
    case 3078:  /* *avx512bw_uminv4di3_mask */
    case 3076:  /* *avx512bw_umaxv4di3_mask */
    case 3074:  /* *avx512bw_sminv4di3_mask */
    case 3072:  /* *avx512bw_smaxv4di3_mask */
    case 3070:  /* *avx512bw_uminv8di3_mask */
    case 3068:  /* *avx512bw_umaxv8di3_mask */
    case 3066:  /* *avx512bw_sminv8di3_mask */
    case 3064:  /* *avx512bw_smaxv8di3_mask */
    case 3062:  /* *avx512bw_uminv4si3_mask */
    case 3060:  /* *avx512bw_umaxv4si3_mask */
    case 3058:  /* *avx512bw_sminv4si3_mask */
    case 3056:  /* *avx512bw_smaxv4si3_mask */
    case 3054:  /* *avx512bw_uminv8si3_mask */
    case 3052:  /* *avx512bw_umaxv8si3_mask */
    case 3050:  /* *avx512bw_sminv8si3_mask */
    case 3048:  /* *avx512bw_smaxv8si3_mask */
    case 3046:  /* *avx512bw_uminv16si3_mask */
    case 3044:  /* *avx512bw_umaxv16si3_mask */
    case 3042:  /* *avx512bw_sminv16si3_mask */
    case 3040:  /* *avx512bw_smaxv16si3_mask */
    case 3026:  /* avx512vl_rorv2di_mask */
    case 3024:  /* avx512vl_rolv2di_mask */
    case 3022:  /* avx512vl_rorv4di_mask */
    case 3020:  /* avx512vl_rolv4di_mask */
    case 3018:  /* avx512f_rorv8di_mask */
    case 3016:  /* avx512f_rolv8di_mask */
    case 3014:  /* avx512vl_rorv4si_mask */
    case 3012:  /* avx512vl_rolv4si_mask */
    case 3010:  /* avx512vl_rorv8si_mask */
    case 3008:  /* avx512vl_rolv8si_mask */
    case 3006:  /* avx512f_rorv16si_mask */
    case 3004:  /* avx512f_rolv16si_mask */
    case 3002:  /* avx512vl_rorvv2di_mask */
    case 3000:  /* avx512vl_rolvv2di_mask */
    case 2998:  /* avx512vl_rorvv4di_mask */
    case 2996:  /* avx512vl_rolvv4di_mask */
    case 2994:  /* avx512f_rorvv8di_mask */
    case 2992:  /* avx512f_rolvv8di_mask */
    case 2990:  /* avx512vl_rorvv4si_mask */
    case 2988:  /* avx512vl_rolvv4si_mask */
    case 2986:  /* avx512vl_rorvv8si_mask */
    case 2984:  /* avx512vl_rolvv8si_mask */
    case 2982:  /* avx512f_rorvv16si_mask */
    case 2980:  /* avx512f_rolvv16si_mask */
    case 2972:  /* lshrv8di3_mask */
    case 2970:  /* ashlv8di3_mask */
    case 2968:  /* lshrv16si3_mask */
    case 2966:  /* ashlv16si3_mask */
    case 2964:  /* lshrv2di3_mask */
    case 2962:  /* ashlv2di3_mask */
    case 2960:  /* lshrv4di3_mask */
    case 2958:  /* ashlv4di3_mask */
    case 2956:  /* lshrv4si3_mask */
    case 2954:  /* ashlv4si3_mask */
    case 2952:  /* lshrv8si3_mask */
    case 2950:  /* ashlv8si3_mask */
    case 2948:  /* lshrv8hi3_mask */
    case 2946:  /* ashlv8hi3_mask */
    case 2944:  /* lshrv16hi3_mask */
    case 2942:  /* ashlv16hi3_mask */
    case 2940:  /* lshrv32hi3_mask */
    case 2938:  /* ashlv32hi3_mask */
    case 2936:  /* ashrv8di3_mask */
    case 2934:  /* ashrv16si3_mask */
    case 2932:  /* ashrv4di3_mask */
    case 2930:  /* ashrv32hi3_mask */
    case 2928:  /* ashrv2di3_mask */
    case 2926:  /* ashrv4si3_mask */
    case 2924:  /* ashrv8si3_mask */
    case 2922:  /* ashrv8hi3_mask */
    case 2920:  /* ashrv16hi3_mask */
    case 2914:  /* *sse4_1_mulv4si3_mask */
    case 2912:  /* *avx2_mulv8si3_mask */
    case 2910:  /* *avx512f_mulv16si3_mask */
    case 2908:  /* avx512dq_mulv2di3_mask */
    case 2906:  /* avx512dq_mulv4di3_mask */
    case 2904:  /* avx512dq_mulv8di3_mask */
    case 2870:  /* *mulv8hi3_mask */
    case 2868:  /* *mulv16hi3_mask */
    case 2866:  /* *mulv32hi3_mask */
    case 2864:  /* *sse2_ussubv8hi3_mask */
    case 2862:  /* *sse2_sssubv8hi3_mask */
    case 2860:  /* *sse2_usaddv8hi3_mask */
    case 2858:  /* *sse2_ssaddv8hi3_mask */
    case 2856:  /* *avx2_ussubv16hi3_mask */
    case 2854:  /* *avx2_sssubv16hi3_mask */
    case 2852:  /* *avx2_usaddv16hi3_mask */
    case 2850:  /* *avx2_ssaddv16hi3_mask */
    case 2848:  /* *avx512bw_ussubv32hi3_mask */
    case 2846:  /* *avx512bw_sssubv32hi3_mask */
    case 2844:  /* *avx512bw_usaddv32hi3_mask */
    case 2842:  /* *avx512bw_ssaddv32hi3_mask */
    case 2840:  /* *sse2_ussubv16qi3_mask */
    case 2838:  /* *sse2_sssubv16qi3_mask */
    case 2836:  /* *sse2_usaddv16qi3_mask */
    case 2834:  /* *sse2_ssaddv16qi3_mask */
    case 2832:  /* *avx2_ussubv32qi3_mask */
    case 2830:  /* *avx2_sssubv32qi3_mask */
    case 2828:  /* *avx2_usaddv32qi3_mask */
    case 2826:  /* *avx2_ssaddv32qi3_mask */
    case 2824:  /* *avx512bw_ussubv64qi3_mask */
    case 2822:  /* *avx512bw_sssubv64qi3_mask */
    case 2820:  /* *avx512bw_usaddv64qi3_mask */
    case 2818:  /* *avx512bw_ssaddv64qi3_mask */
    case 2816:  /* *subv8hi3_mask */
    case 2815:  /* *addv8hi3_mask */
    case 2814:  /* *subv16hi3_mask */
    case 2813:  /* *addv16hi3_mask */
    case 2812:  /* *subv32hi3_mask */
    case 2811:  /* *addv32hi3_mask */
    case 2810:  /* *subv32qi3_mask */
    case 2809:  /* *addv32qi3_mask */
    case 2808:  /* *subv16qi3_mask */
    case 2807:  /* *addv16qi3_mask */
    case 2806:  /* *subv64qi3_mask */
    case 2805:  /* *addv64qi3_mask */
    case 2804:  /* *subv2di3_mask */
    case 2803:  /* *addv2di3_mask */
    case 2802:  /* *subv4di3_mask */
    case 2801:  /* *addv4di3_mask */
    case 2800:  /* *subv8di3_mask */
    case 2799:  /* *addv8di3_mask */
    case 2798:  /* *subv4si3_mask */
    case 2797:  /* *addv4si3_mask */
    case 2796:  /* *subv8si3_mask */
    case 2795:  /* *addv8si3_mask */
    case 2794:  /* *subv16si3_mask */
    case 2793:  /* *addv16si3_mask */
    case 2792:  /* *subv2di3 */
    case 2790:  /* *addv2di3 */
    case 2788:  /* *subv4di3 */
    case 2786:  /* *addv4di3 */
    case 2784:  /* *subv8di3 */
    case 2782:  /* *addv8di3 */
    case 2780:  /* *subv4si3 */
    case 2778:  /* *addv4si3 */
    case 2776:  /* *subv8si3 */
    case 2774:  /* *addv8si3 */
    case 2772:  /* *subv16si3 */
    case 2770:  /* *addv16si3 */
    case 2768:  /* *subv8hi3 */
    case 2766:  /* *addv8hi3 */
    case 2764:  /* *subv16hi3 */
    case 2762:  /* *addv16hi3 */
    case 2760:  /* *subv32hi3 */
    case 2758:  /* *addv32hi3 */
    case 2756:  /* *subv16qi3 */
    case 2754:  /* *addv16qi3 */
    case 2752:  /* *subv32qi3 */
    case 2750:  /* *addv32qi3 */
    case 2748:  /* *subv64qi3 */
    case 2746:  /* *addv64qi3 */
    case 1627:  /* *xorv8df3_mask */
    case 1625:  /* *iorv8df3_mask */
    case 1623:  /* *andv8df3_mask */
    case 1621:  /* *xorv16sf3_mask */
    case 1619:  /* *iorv16sf3_mask */
    case 1617:  /* *andv16sf3_mask */
    case 1615:  /* *xorv2df3_mask */
    case 1613:  /* *iorv2df3_mask */
    case 1611:  /* *andv2df3_mask */
    case 1609:  /* *xorv4df3_mask */
    case 1607:  /* *iorv4df3_mask */
    case 1605:  /* *andv4df3_mask */
    case 1603:  /* *xorv4sf3_mask */
    case 1601:  /* *iorv4sf3_mask */
    case 1599:  /* *andv4sf3_mask */
    case 1597:  /* *xorv8sf3_mask */
    case 1595:  /* *iorv8sf3_mask */
    case 1593:  /* *andv8sf3_mask */
    case 1425:  /* *sminv2df3_mask */
    case 1423:  /* *smaxv2df3_mask */
    case 1421:  /* *sminv4df3_mask */
    case 1419:  /* *smaxv4df3_mask */
    case 1416:  /* *sminv8df3_mask */
    case 1412:  /* *smaxv8df3_mask */
    case 1409:  /* *sminv4sf3_mask */
    case 1407:  /* *smaxv4sf3_mask */
    case 1405:  /* *sminv8sf3_mask */
    case 1403:  /* *smaxv8sf3_mask */
    case 1400:  /* *sminv16sf3_mask */
    case 1396:  /* *smaxv16sf3_mask */
    case 1392:  /* *sminv2df3_finite_mask */
    case 1388:  /* *smaxv2df3_finite_mask */
    case 1384:  /* *sminv4df3_finite_mask */
    case 1380:  /* *smaxv4df3_finite_mask */
    case 1376:  /* *sminv8df3_finite_mask */
    case 1372:  /* *smaxv8df3_finite_mask */
    case 1368:  /* *sminv4sf3_finite_mask */
    case 1364:  /* *smaxv4sf3_finite_mask */
    case 1360:  /* *sminv8sf3_finite_mask */
    case 1356:  /* *smaxv8sf3_finite_mask */
    case 1352:  /* *sminv16sf3_finite_mask */
    case 1348:  /* *smaxv16sf3_finite_mask */
    case 1291:  /* sse2_divv2df3_mask */
    case 1289:  /* avx_divv4df3_mask */
    case 1286:  /* avx512f_divv8df3_mask */
    case 1283:  /* sse_divv4sf3_mask */
    case 1281:  /* avx_divv8sf3_mask */
    case 1278:  /* avx512f_divv16sf3_mask */
    case 1266:  /* *mulv2df3_mask */
    case 1262:  /* *mulv4df3_mask */
    case 1258:  /* *mulv8df3_mask */
    case 1254:  /* *mulv4sf3_mask */
    case 1250:  /* *mulv8sf3_mask */
    case 1246:  /* *mulv16sf3_mask */
    case 1234:  /* *subv2df3_mask */
    case 1230:  /* *addv2df3_mask */
    case 1226:  /* *subv4df3_mask */
    case 1222:  /* *addv4df3_mask */
    case 1218:  /* *subv8df3_mask */
    case 1214:  /* *addv8df3_mask */
    case 1210:  /* *subv4sf3_mask */
    case 1206:  /* *addv4sf3_mask */
    case 1202:  /* *subv8sf3_mask */
    case 1198:  /* *addv8sf3_mask */
    case 1194:  /* *subv16sf3_mask */
    case 1190:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1415:  /* *sminv8df3_round */
    case 1411:  /* *smaxv8df3_round */
    case 1399:  /* *sminv16sf3_round */
    case 1395:  /* *smaxv16sf3_round */
    case 1391:  /* *sminv2df3_finite_round */
    case 1387:  /* *smaxv2df3_finite_round */
    case 1383:  /* *sminv4df3_finite_round */
    case 1379:  /* *smaxv4df3_finite_round */
    case 1375:  /* *sminv8df3_finite_round */
    case 1371:  /* *smaxv8df3_finite_round */
    case 1367:  /* *sminv4sf3_finite_round */
    case 1363:  /* *smaxv4sf3_finite_round */
    case 1359:  /* *sminv8sf3_finite_round */
    case 1355:  /* *smaxv8sf3_finite_round */
    case 1351:  /* *sminv16sf3_finite_round */
    case 1347:  /* *smaxv16sf3_finite_round */
    case 1285:  /* avx512f_divv8df3_round */
    case 1277:  /* avx512f_divv16sf3_round */
    case 1265:  /* *mulv2df3_round */
    case 1261:  /* *mulv4df3_round */
    case 1257:  /* *mulv8df3_round */
    case 1253:  /* *mulv4sf3_round */
    case 1249:  /* *mulv8sf3_round */
    case 1245:  /* *mulv16sf3_round */
    case 1233:  /* *subv2df3_round */
    case 1229:  /* *addv2df3_round */
    case 1225:  /* *subv4df3_round */
    case 1221:  /* *addv4df3_round */
    case 1217:  /* *subv8df3_round */
    case 1213:  /* *addv8df3_round */
    case 1209:  /* *subv4sf3_round */
    case 1205:  /* *addv4sf3_round */
    case 1201:  /* *subv8sf3_round */
    case 1197:  /* *addv8sf3_round */
    case 1193:  /* *subv16sf3_round */
    case 1189:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1169:  /* avx512vl_storedquv8hi_mask */
    case 1168:  /* avx512vl_storedquv16hi_mask */
    case 1167:  /* avx512bw_storedquv32hi_mask */
    case 1166:  /* avx512vl_storedquv32qi_mask */
    case 1165:  /* avx512vl_storedquv16qi_mask */
    case 1164:  /* avx512bw_storedquv64qi_mask */
    case 1163:  /* avx512vl_storedquv2di_mask */
    case 1162:  /* avx512vl_storedquv4di_mask */
    case 1161:  /* avx512f_storedquv8di_mask */
    case 1160:  /* avx512vl_storedquv4si_mask */
    case 1159:  /* avx512vl_storedquv8si_mask */
    case 1158:  /* avx512f_storedquv16si_mask */
    case 1121:  /* avx512vl_storeupd_mask */
    case 1120:  /* avx512vl_storeupd256_mask */
    case 1119:  /* avx512f_storeupd512_mask */
    case 1118:  /* avx512vl_storeups_mask */
    case 1117:  /* avx512vl_storeups256_mask */
    case 1116:  /* avx512f_storeups512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4703:  /* conflictv2di_mask */
    case 4701:  /* conflictv4di_mask */
    case 4699:  /* conflictv8di_mask */
    case 4697:  /* conflictv4si_mask */
    case 4695:  /* conflictv8si_mask */
    case 4693:  /* conflictv16si_mask */
    case 4351:  /* avx512f_vcvtph2ps512_mask */
    case 4348:  /* vcvtph2ps256_mask */
    case 4346:  /* *vcvtph2ps_load_mask */
    case 3788:  /* avx512er_rsqrt28v8df_mask */
    case 3784:  /* avx512er_rsqrt28v16sf_mask */
    case 3776:  /* avx512er_rcp28v8df_mask */
    case 3772:  /* avx512er_rcp28v16sf_mask */
    case 3768:  /* avx512er_exp2v8df_mask */
    case 3764:  /* avx512er_exp2v16sf_mask */
    case 2422:  /* avx512vl_getexpv2df_mask */
    case 2418:  /* avx512vl_getexpv4df_mask */
    case 2414:  /* avx512f_getexpv8df_mask */
    case 2410:  /* avx512vl_getexpv4sf_mask */
    case 2406:  /* avx512vl_getexpv8sf_mask */
    case 2402:  /* avx512f_getexpv16sf_mask */
    case 2160:  /* ufix_notruncv2dfv2di2_mask */
    case 2158:  /* ufix_notruncv4dfv4di2_mask */
    case 2155:  /* ufix_notruncv8dfv8di2_mask */
    case 2152:  /* fix_notruncv2dfv2di2_mask */
    case 2150:  /* fix_notruncv4dfv4di2_mask */
    case 2147:  /* fix_notruncv8dfv8di2_mask */
    case 2111:  /* ufix_notruncv4dfv4si2_mask */
    case 2107:  /* ufix_notruncv8dfv8si2_mask */
    case 2101:  /* avx_cvtpd2dq256_mask */
    case 2098:  /* avx512f_cvtpd2dq512_mask */
    case 2008:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2005:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2000:  /* avx512dq_cvtps2qqv4di_mask */
    case 1997:  /* avx512dq_cvtps2qqv8di_mask */
    case 1993:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 1989:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 1985:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 1981:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 1978:  /* sse2_fix_notruncv4sfv4si_mask */
    case 1976:  /* avx_fix_notruncv8sfv8si_mask */
    case 1342:  /* rsqrt14v2df_mask */
    case 1340:  /* rsqrt14v4df_mask */
    case 1338:  /* rsqrt14v8df_mask */
    case 1336:  /* rsqrt14v4sf_mask */
    case 1334:  /* rsqrt14v8sf_mask */
    case 1332:  /* rsqrt14v16sf_mask */
    case 1306:  /* rcp14v2df_mask */
    case 1304:  /* rcp14v4df_mask */
    case 1302:  /* rcp14v8df_mask */
    case 1300:  /* rcp14v4sf_mask */
    case 1298:  /* rcp14v8sf_mask */
    case 1296:  /* rcp14v16sf_mask */
    case 1145:  /* *avx512vl_loaddquv2di_mask */
    case 1143:  /* *avx512vl_loaddquv4di_mask */
    case 1141:  /* *avx512f_loaddquv8di_mask */
    case 1139:  /* *sse2_loaddquv4si_mask */
    case 1137:  /* *avx_loaddquv8si_mask */
    case 1135:  /* *avx512f_loaddquv16si_mask */
    case 1133:  /* *avx512vl_loaddquv16hi_mask */
    case 1131:  /* *avx512vl_loaddquv8hi_mask */
    case 1129:  /* *avx512bw_loaddquv32hi_mask */
    case 1127:  /* *avx512f_loaddquv64qi_mask */
    case 1125:  /* *sse2_loaddquv16qi_mask */
    case 1123:  /* *avx_loaddquv32qi_mask */
    case 1109:  /* *sse2_loadupd_mask */
    case 1107:  /* *avx_loadupd256_mask */
    case 1105:  /* *avx512f_loadupd512_mask */
    case 1103:  /* *sse_loadups_mask */
    case 1101:  /* *avx_loadups256_mask */
    case 1099:  /* *avx512f_loadups512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1095:  /* avx512vl_storev8hi_mask */
    case 1094:  /* avx512vl_storev16hi_mask */
    case 1093:  /* avx512bw_storev32hi_mask */
    case 1092:  /* avx512vl_storev32qi_mask */
    case 1091:  /* avx512vl_storev16qi_mask */
    case 1090:  /* avx512bw_storev64qi_mask */
    case 1089:  /* avx512vl_storev2df_mask */
    case 1088:  /* avx512vl_storev4df_mask */
    case 1087:  /* avx512f_storev8df_mask */
    case 1086:  /* avx512vl_storev4sf_mask */
    case 1085:  /* avx512vl_storev8sf_mask */
    case 1084:  /* avx512f_storev16sf_mask */
    case 1083:  /* avx512vl_storev2di_mask */
    case 1082:  /* avx512vl_storev4di_mask */
    case 1081:  /* avx512f_storev8di_mask */
    case 1080:  /* avx512vl_storev4si_mask */
    case 1079:  /* avx512vl_storev8si_mask */
    case 1078:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3640:  /* avx2_pblenddv4si */
    case 3639:  /* avx2_pblenddv8si */
    case 3638:  /* *avx2_pblendw */
    case 3637:  /* sse4_1_pblendw */
    case 3615:  /* sse4_1_blendpd */
    case 3614:  /* avx_blendpd256 */
    case 3613:  /* sse4_1_blendps */
    case 3612:  /* avx_blendps256 */
    case 1077:  /* avx512vl_blendmv8hi */
    case 1076:  /* avx512vl_blendmv16hi */
    case 1075:  /* avx512bw_blendmv32hi */
    case 1074:  /* avx512vl_blendmv32qi */
    case 1073:  /* avx512vl_blendmv16qi */
    case 1072:  /* avx512bw_blendmv64qi */
    case 1071:  /* avx512vl_blendmv2df */
    case 1070:  /* avx512vl_blendmv4df */
    case 1069:  /* avx512f_blendmv8df */
    case 1068:  /* avx512vl_blendmv4sf */
    case 1067:  /* avx512vl_blendmv8sf */
    case 1066:  /* avx512f_blendmv16sf */
    case 1065:  /* avx512vl_blendmv2di */
    case 1064:  /* avx512vl_blendmv4di */
    case 1063:  /* avx512f_blendmv8di */
    case 1062:  /* avx512vl_blendmv4si */
    case 1061:  /* avx512vl_blendmv8si */
    case 1060:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3896:  /* *avx_vzeroall */
    case 1020:  /* *mmx_femms */
    case 1019:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 3511:  /* *sse2_maskmovdqu */
    case 3510:  /* *sse2_maskmovdqu */
    case 1018:  /* *mmx_maskmovq */
    case 1017:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3948:  /* avx512f_permv8df_1 */
    case 3946:  /* avx512f_permv8di_1 */
    case 3944:  /* avx2_permv4df_1 */
    case 3942:  /* avx2_permv4di_1 */
    case 3465:  /* sse2_pshuflw_1 */
    case 3459:  /* sse2_pshufd_1 */
    case 2290:  /* *avx512f_vextracti32x4_1 */
    case 2288:  /* *avx512f_vextractf32x4_1 */
    case 1006:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3477:  /* *vec_extractv8hi_zext */
    case 3476:  /* *vec_extractv16qi_zext */
    case 1005:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3414:  /* sse4_1_pinsrq */
    case 3413:  /* sse4_1_pinsrd */
    case 3412:  /* sse2_pinsrw */
    case 3411:  /* sse4_1_pinsrb */
    case 2275:  /* *vec_setv4sf_sse4_1 */
    case 1004:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3409:  /* vec_interleave_lowv4si */
    case 3407:  /* *avx512f_interleave_lowv16si */
    case 3405:  /* avx2_interleave_lowv8si */
    case 3403:  /* vec_interleave_highv4si */
    case 3401:  /* *avx512f_interleave_highv16si */
    case 3399:  /* avx2_interleave_highv8si */
    case 3397:  /* vec_interleave_lowv8hi */
    case 3395:  /* avx2_interleave_lowv16hi */
    case 3393:  /* *avx512bw_interleave_lowv32hi */
    case 3391:  /* vec_interleave_highv8hi */
    case 3389:  /* avx2_interleave_highv16hi */
    case 3387:  /* avx512bw_interleave_highv32hi */
    case 3385:  /* vec_interleave_lowv16qi */
    case 3383:  /* avx2_interleave_lowv32qi */
    case 3381:  /* avx512bw_interleave_lowv64qi */
    case 3379:  /* vec_interleave_highv16qi */
    case 3377:  /* avx2_interleave_highv32qi */
    case 3375:  /* avx512bw_interleave_highv64qi */
    case 2533:  /* vec_interleave_lowv2di */
    case 2531:  /* *avx512f_interleave_lowv8di */
    case 2529:  /* avx2_interleave_lowv4di */
    case 2527:  /* vec_interleave_highv2di */
    case 2525:  /* *avx512f_interleave_highv8di */
    case 2523:  /* avx2_interleave_highv4di */
    case 2353:  /* *vec_interleave_lowv2df */
    case 2350:  /* *avx_unpcklpd256 */
    case 2348:  /* *avx512f_unpcklpd512 */
    case 2347:  /* *vec_interleave_highv2df */
    case 2344:  /* avx_unpckhpd256 */
    case 2342:  /* *avx512f_unpckhpd512 */
    case 2242:  /* vec_interleave_lowv4sf */
    case 2239:  /* avx_unpcklps256 */
    case 2237:  /* *avx512f_unpcklps512 */
    case 2235:  /* vec_interleave_highv4sf */
    case 2233:  /* avx_unpckhps256 */
    case 2231:  /* *avx512f_unpckhps512 */
    case 2230:  /* sse_movlhps */
    case 2229:  /* sse_movhlps */
    case 1003:  /* mmx_punpckldq */
    case 1002:  /* mmx_punpckhdq */
    case 1001:  /* mmx_punpcklwd */
    case 1000:  /* mmx_punpckhwd */
    case 999:  /* mmx_punpcklbw */
    case 998:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 3633:  /* sse4_1_packusdw */
    case 3631:  /* avx2_packusdw */
    case 3629:  /* avx512bw_packusdw */
    case 3373:  /* sse2_packuswb */
    case 3371:  /* avx2_packuswb */
    case 3369:  /* avx512bw_packuswb */
    case 3367:  /* sse2_packssdw */
    case 3365:  /* avx2_packssdw */
    case 3363:  /* avx512bw_packssdw */
    case 3361:  /* sse2_packsswb */
    case 3359:  /* avx2_packsswb */
    case 3357:  /* avx512bw_packsswb */
    case 997:  /* mmx_packuswb */
    case 996:  /* mmx_packssdw */
    case 995:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2893:  /* *sse4_1_mulv2siv2di3 */
    case 2891:  /* *vec_widen_smult_even_v8si */
    case 2889:  /* *vec_widen_smult_even_v16si */
    case 2887:  /* *vec_widen_umult_even_v4si */
    case 2885:  /* *vec_widen_umult_even_v8si */
    case 2883:  /* *vec_widen_umult_even_v16si */
    case 964:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1014:  /* *mmx_uavgv4hi3 */
    case 1013:  /* *mmx_uavgv8qi3 */
    case 963:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 3546:  /* ssse3_pmaddubsw */
    case 3545:  /* ssse3_pmaddubsw128 */
    case 3536:  /* avx2_pmaddubsw256 */
    case 2902:  /* *sse2_pmaddwd */
    case 2901:  /* *avx2_pmaddwd */
    case 962:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2881:  /* *umulv8hi3_highpart */
    case 2879:  /* *smulv8hi3_highpart */
    case 2877:  /* *umulv16hi3_highpart */
    case 2875:  /* *smulv16hi3_highpart */
    case 2873:  /* *umulv32hi3_highpart */
    case 2871:  /* *smulv32hi3_highpart */
    case 961:  /* *mmx_umulv4hi3_highpart */
    case 960:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 936:  /* mmx_pi2fw */
    case 935:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1449:  /* sse3_addsubv4sf3 */
    case 1448:  /* avx_addsubv8sf3 */
    case 1447:  /* sse3_addsubv2df3 */
    case 1446:  /* avx_addsubv4df3 */
    case 930:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3535:  /* ssse3_phsubdv2si3 */
    case 3534:  /* ssse3_phadddv2si3 */
    case 1453:  /* sse3_hsubv2df3 */
    case 929:  /* mmx_hsubv2sf3 */
    case 928:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 908:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 906:  /* *bnd64_stx */
    case 905:  /* *bnd32_stx */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 904:  /* *bnd64_ldx */
    case 903:  /* *bnd32_ldx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 902:  /* *bnd64_cn */
    case 901:  /* *bnd64_cu */
    case 900:  /* *bnd64_cl */
    case 899:  /* *bnd32_cn */
    case 898:  /* *bnd32_cu */
    case 897:  /* *bnd32_cl */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 894:  /* *bnd64_mk */
    case 893:  /* *bnd32_mk */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 881:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 875:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3517:  /* sse3_monitor_di */
    case 3516:  /* sse3_monitor_si */
    case 909:  /* *wrpkru */
    case 890:  /* monitorx_di */
    case 889:  /* monitorx_si */
    case 888:  /* mwaitx */
    case 874:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 867:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 3515:  /* sse3_mwait */
    case 865:  /* xrstors */
    case 864:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 857:  /* rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 841:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 837:  /* adjust_stack_and_probedi */
    case 836:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1662:  /* *fma_fmadd_v2df */
    case 1660:  /* *fma_fmadd_v4df */
    case 1656:  /* *fma_fmadd_v8df */
    case 1655:  /* *fma_fmadd_df */
    case 1653:  /* *fma_fmadd_v4sf */
    case 1651:  /* *fma_fmadd_v8sf */
    case 1647:  /* *fma_fmadd_v16sf */
    case 1646:  /* *fma_fmadd_sf */
    case 1645:  /* *fma_fmadd_v4df */
    case 1644:  /* *fma_fmadd_v8sf */
    case 1643:  /* *fma_fmadd_v2df */
    case 1642:  /* *fma_fmadd_v4sf */
    case 1641:  /* *fma_fmadd_df */
    case 1640:  /* *fma_fmadd_sf */
    case 1059:  /* avx512vl_loadv8hi_mask */
    case 1058:  /* avx512vl_loadv16hi_mask */
    case 1057:  /* avx512bw_loadv32hi_mask */
    case 1056:  /* avx512vl_loadv32qi_mask */
    case 1055:  /* avx512vl_loadv16qi_mask */
    case 1054:  /* avx512bw_loadv64qi_mask */
    case 1053:  /* avx512vl_loadv2df_mask */
    case 1052:  /* avx512vl_loadv4df_mask */
    case 1051:  /* avx512f_loadv8df_mask */
    case 1050:  /* avx512vl_loadv4sf_mask */
    case 1049:  /* avx512vl_loadv8sf_mask */
    case 1048:  /* avx512f_loadv16sf_mask */
    case 1047:  /* avx512vl_loadv2di_mask */
    case 1046:  /* avx512vl_loadv4di_mask */
    case 1045:  /* avx512f_loadv8di_mask */
    case 1044:  /* avx512vl_loadv4si_mask */
    case 1043:  /* avx512vl_loadv8si_mask */
    case 1042:  /* avx512f_loadv16si_mask */
    case 821:  /* *xop_pcmov_df */
    case 820:  /* *xop_pcmov_sf */
    case 819:  /* *movsfcc_1_387 */
    case 818:  /* *movdfcc_1 */
    case 817:  /* *movxfcc_1 */
    case 816:  /* *movqicc_noc */
    case 815:  /* *movsicc_noc */
    case 814:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 810:  /* *strlenqi_1 */
    case 809:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 808:  /* *cmpstrnqi_1 */
    case 807:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 806:  /* *cmpstrnqi_nz_1 */
    case 805:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 804:  /* *rep_stosqi */
    case 803:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 802:  /* *rep_stossi */
    case 801:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 800:  /* *strsetqi_1 */
    case 799:  /* *strsetqi_1 */
    case 798:  /* *strsethi_1 */
    case 797:  /* *strsethi_1 */
    case 796:  /* *strsetsi_1 */
    case 795:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 794:  /* *rep_movqi */
    case 793:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 792:  /* *rep_movsi */
    case 791:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 790:  /* *strmovqi_1 */
    case 789:  /* *strmovqi_1 */
    case 788:  /* *strmovhi_1 */
    case 787:  /* *strmovhi_1 */
    case 786:  /* *strmovsi_1 */
    case 785:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 769:  /* fistdi2_ceil_with_temp */
    case 768:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 777:  /* fistsi2_ceil_with_temp */
    case 776:  /* fistsi2_floor_with_temp */
    case 775:  /* fisthi2_ceil_with_temp */
    case 774:  /* fisthi2_floor_with_temp */
    case 767:  /* fistdi2_ceil */
    case 766:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 835:  /* allocate_stack_worker_probe_di */
    case 834:  /* allocate_stack_worker_probe_si */
    case 765:  /* *fistdi2_ceil_1 */
    case 764:  /* *fistdi2_floor_1 */
    case 763:  /* *fistsi2_ceil_1 */
    case 762:  /* *fistsi2_floor_1 */
    case 761:  /* *fisthi2_ceil_1 */
    case 760:  /* *fisthi2_floor_1 */
    case 758:  /* frndintxf2_mask_pm */
    case 754:  /* frndintxf2_trunc */
    case 753:  /* frndintxf2_ceil */
    case 752:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4749:  /* atomic_storedi_fpu */
    case 4745:  /* atomic_loaddi_fpu */
    case 773:  /* fistsi2_ceil */
    case 772:  /* fistsi2_floor */
    case 771:  /* fisthi2_ceil */
    case 770:  /* fisthi2_floor */
    case 759:  /* frndintxf2_mask_pm_i387 */
    case 757:  /* frndintxf2_trunc_i387 */
    case 756:  /* frndintxf2_ceil_i387 */
    case 755:  /* frndintxf2_floor_i387 */
    case 745:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 847:  /* stack_tls_protect_set_di */
    case 846:  /* stack_tls_protect_set_si */
    case 845:  /* stack_protect_set_di */
    case 844:  /* stack_protect_set_si */
    case 751:  /* fistsi2_with_temp */
    case 750:  /* fisthi2_with_temp */
    case 744:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 739:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 734:  /* fyl2xp1_extenddfxf3_i387 */
    case 733:  /* fyl2xp1_extendsfxf3_i387 */
    case 731:  /* fyl2x_extenddfxf3_i387 */
    case 730:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 728:  /* fpatan_extenddfxf3_i387 */
    case 727:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 851:  /* stack_tls_protect_test_di */
    case 850:  /* stack_tls_protect_test_si */
    case 849:  /* stack_protect_test_di */
    case 848:  /* stack_protect_test_si */
    case 732:  /* fyl2xp1xf3_i387 */
    case 729:  /* fyl2xxf3_i387 */
    case 726:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 725:  /* fptan_extenddfxf4_i387 */
    case 724:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 723:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 737:  /* fxtract_extenddfxf3_i387 */
    case 736:  /* fxtract_extendsfxf3_i387 */
    case 722:  /* sincos_extenddfxf3_i387 */
    case 721:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 735:  /* fxtractxf3_i387 */
    case 720:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 713:  /* fprem1xf4_i387 */
    case 712:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 703:  /* *fop_xf_6_i387 */
    case 702:  /* *fop_xf_6_i387 */
    case 691:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 701:  /* *fop_xf_5_i387 */
    case 700:  /* *fop_xf_5_i387 */
    case 697:  /* *fop_xf_3_i387 */
    case 696:  /* *fop_xf_3_i387 */
    case 690:  /* *fop_df_5_i387 */
    case 688:  /* *fop_df_3_i387 */
    case 687:  /* *fop_df_3_i387 */
    case 686:  /* *fop_sf_3_i387 */
    case 685:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 699:  /* *fop_xf_4_i387 */
    case 698:  /* *fop_xf_4_i387 */
    case 695:  /* *fop_xf_2_i387 */
    case 694:  /* *fop_xf_2_i387 */
    case 689:  /* *fop_df_4_i387 */
    case 684:  /* *fop_df_2_i387 */
    case 683:  /* *fop_df_2_i387 */
    case 682:  /* *fop_sf_2_i387 */
    case 681:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 671:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 670:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 669:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 666:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 668:  /* *add_tp_di */
    case 667:  /* *add_tp_si */
    case 665:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 660:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 659:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 658:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 657:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 656:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 655:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 654:  /* bswaphi_lowpart */
    case 653:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 645:  /* *bsrhi */
    case 644:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 643:  /* *tbm_tzmsk_si */
    case 642:  /* *tbm_t1mskc_si */
    case 641:  /* *tbm_blsic_si */
    case 637:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 636:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 634:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 4748:  /* atomic_storesi_1 */
    case 4747:  /* atomic_storehi_1 */
    case 4746:  /* atomic_storeqi_1 */
    case 4739:  /* vpmultishiftqbv32qi */
    case 4737:  /* vpmultishiftqbv16qi */
    case 4735:  /* vpmultishiftqbv64qi */
    case 4709:  /* sha256msg2 */
    case 4708:  /* sha256msg1 */
    case 4706:  /* sha1nexte */
    case 4705:  /* sha1msg2 */
    case 4704:  /* sha1msg1 */
    case 4666:  /* avx512vl_getmantv2df */
    case 4662:  /* avx512vl_getmantv4df */
    case 4658:  /* avx512f_getmantv8df */
    case 4654:  /* avx512vl_getmantv4sf */
    case 4650:  /* avx512vl_getmantv8sf */
    case 4646:  /* avx512f_getmantv16sf */
    case 4642:  /* avx512dq_fpclassv2df */
    case 4640:  /* avx512dq_fpclassv4df */
    case 4638:  /* avx512dq_fpclassv8df */
    case 4636:  /* avx512dq_fpclassv4sf */
    case 4634:  /* avx512dq_fpclassv8sf */
    case 4632:  /* avx512dq_fpclassv16sf */
    case 4358:  /* *avx512f_vcvtps2ph512 */
    case 4356:  /* vcvtps2ph256 */
    case 4355:  /* *vcvtps2ph_store */
    case 4116:  /* avx_vpermilvarv2df3 */
    case 4114:  /* avx_vpermilvarv4df3 */
    case 4112:  /* avx512f_vpermilvarv8df3 */
    case 4110:  /* avx_vpermilvarv4sf3 */
    case 4108:  /* avx_vpermilvarv8sf3 */
    case 4106:  /* avx512f_vpermilvarv16sf3 */
    case 3940:  /* avx512bw_permvarv32hi */
    case 3938:  /* avx512vl_permvarv16hi */
    case 3936:  /* avx512vl_permvarv8hi */
    case 3934:  /* avx512vl_permvarv32qi */
    case 3932:  /* avx512vl_permvarv16qi */
    case 3930:  /* avx512bw_permvarv64qi */
    case 3928:  /* avx2_permvarv4df */
    case 3926:  /* avx2_permvarv4di */
    case 3924:  /* avx512f_permvarv8df */
    case 3922:  /* avx512f_permvarv8di */
    case 3920:  /* avx512f_permvarv16sf */
    case 3918:  /* avx512f_permvarv16si */
    case 3916:  /* avx2_permvarv8sf */
    case 3914:  /* avx2_permvarv8si */
    case 3894:  /* aeskeygenassist */
    case 3892:  /* aesdeclast */
    case 3891:  /* aesdec */
    case 3890:  /* aesenclast */
    case 3889:  /* aesenc */
    case 3733:  /* sse4_1_roundpd */
    case 3732:  /* avx_roundpd256 */
    case 3731:  /* sse4_1_roundps */
    case 3730:  /* avx_roundps256 */
    case 3611:  /* sse4a_insertq */
    case 3609:  /* sse4a_extrq */
    case 3569:  /* ssse3_psignv2si3 */
    case 3568:  /* ssse3_psignv4hi3 */
    case 3567:  /* ssse3_psignv8qi3 */
    case 3566:  /* ssse3_psignv4si3 */
    case 3565:  /* avx2_psignv8si3 */
    case 3564:  /* ssse3_psignv8hi3 */
    case 3563:  /* avx2_psignv16hi3 */
    case 3562:  /* ssse3_psignv16qi3 */
    case 3561:  /* avx2_psignv32qi3 */
    case 3560:  /* ssse3_pshufbv8qi3 */
    case 3558:  /* ssse3_pshufbv16qi3 */
    case 3556:  /* avx2_pshufbv32qi3 */
    case 3554:  /* avx512bw_pshufbv64qi3 */
    case 3541:  /* avx512bw_pmaddubsw512v32hi */
    case 3539:  /* avx512bw_pmaddubsw512v16hi */
    case 3537:  /* avx512bw_pmaddubsw512v8hi */
    case 3503:  /* sse2_psadbw */
    case 3502:  /* avx2_psadbw */
    case 3501:  /* avx512f_psadbw */
    case 3467:  /* *avx512bw_pshufhwv32hi */
    case 3461:  /* *avx512bw_pshuflwv32hi */
    case 3355:  /* avx512vl_testnmv2di3 */
    case 3353:  /* avx512vl_testnmv4di3 */
    case 3351:  /* avx512f_testnmv8di3 */
    case 3349:  /* avx512vl_testnmv4si3 */
    case 3347:  /* avx512vl_testnmv8si3 */
    case 3345:  /* avx512f_testnmv16si3 */
    case 3343:  /* avx512vl_testnmv8hi3 */
    case 3341:  /* avx512vl_testnmv16hi3 */
    case 3339:  /* avx512bw_testnmv32hi3 */
    case 3337:  /* avx512vl_testnmv32qi3 */
    case 3335:  /* avx512vl_testnmv16qi3 */
    case 3333:  /* avx512bw_testnmv64qi3 */
    case 3331:  /* avx512vl_testmv2di3 */
    case 3329:  /* avx512vl_testmv4di3 */
    case 3327:  /* avx512f_testmv8di3 */
    case 3325:  /* avx512vl_testmv4si3 */
    case 3323:  /* avx512vl_testmv8si3 */
    case 3321:  /* avx512f_testmv16si3 */
    case 3319:  /* avx512vl_testmv8hi3 */
    case 3317:  /* avx512vl_testmv16hi3 */
    case 3315:  /* avx512bw_testmv32hi3 */
    case 3313:  /* avx512vl_testmv32qi3 */
    case 3311:  /* avx512vl_testmv16qi3 */
    case 3309:  /* avx512bw_testmv64qi3 */
    case 3214:  /* avx512vl_gtv8hi3 */
    case 3212:  /* avx512vl_gtv16hi3 */
    case 3210:  /* avx512bw_gtv32hi3 */
    case 3208:  /* avx512vl_gtv32qi3 */
    case 3206:  /* avx512vl_gtv16qi3 */
    case 3204:  /* avx512bw_gtv64qi3 */
    case 3202:  /* avx512vl_gtv2di3 */
    case 3200:  /* avx512vl_gtv4di3 */
    case 3198:  /* avx512f_gtv8di3 */
    case 3196:  /* avx512vl_gtv4si3 */
    case 3194:  /* avx512vl_gtv8si3 */
    case 3192:  /* avx512f_gtv16si3 */
    case 3181:  /* avx512vl_eqv2di3_1 */
    case 3179:  /* avx512vl_eqv4di3_1 */
    case 3177:  /* avx512f_eqv8di3_1 */
    case 3175:  /* avx512vl_eqv4si3_1 */
    case 3173:  /* avx512vl_eqv8si3_1 */
    case 3171:  /* avx512f_eqv16si3_1 */
    case 3169:  /* avx512vl_eqv8hi3_1 */
    case 3167:  /* avx512vl_eqv16hi3_1 */
    case 3165:  /* avx512bw_eqv32hi3_1 */
    case 3163:  /* avx512vl_eqv32qi3_1 */
    case 3161:  /* avx512vl_eqv16qi3_1 */
    case 3159:  /* avx512bw_eqv64qi3_1 */
    case 2899:  /* avx512bw_pmaddwd512v8hi */
    case 2897:  /* avx512bw_pmaddwd512v16hi */
    case 2895:  /* avx512bw_pmaddwd512v32hi */
    case 2508:  /* avx512vl_rndscalev2df */
    case 2504:  /* avx512vl_rndscalev4df */
    case 2500:  /* avx512f_rndscalev8df */
    case 2496:  /* avx512vl_rndscalev4sf */
    case 2492:  /* avx512vl_rndscalev8sf */
    case 2488:  /* avx512f_rndscalev16sf */
    case 2378:  /* avx512vl_scalefv2df */
    case 2374:  /* avx512vl_scalefv4df */
    case 2370:  /* avx512f_scalefv8df */
    case 2366:  /* avx512vl_scalefv4sf */
    case 2362:  /* avx512vl_scalefv8sf */
    case 2358:  /* avx512f_scalefv16sf */
    case 1470:  /* *reducepv2df */
    case 1468:  /* *reducepv4df */
    case 1466:  /* *reducepv8df */
    case 1464:  /* *reducepv4sf */
    case 1462:  /* *reducepv8sf */
    case 1460:  /* *reducepv16sf */
    case 1445:  /* *ieee_smaxv2df3 */
    case 1444:  /* *ieee_smaxv4df3 */
    case 1443:  /* *ieee_smaxv8df3 */
    case 1442:  /* *ieee_smaxv4sf3 */
    case 1441:  /* *ieee_smaxv8sf3 */
    case 1440:  /* *ieee_smaxv16sf3 */
    case 1439:  /* *ieee_sminv2df3 */
    case 1438:  /* *ieee_sminv4df3 */
    case 1437:  /* *ieee_sminv8df3 */
    case 1436:  /* *ieee_sminv4sf3 */
    case 1435:  /* *ieee_sminv8sf3 */
    case 1434:  /* *ieee_sminv16sf3 */
    case 1015:  /* mmx_psadbw */
    case 927:  /* mmx_rsqit1v2sf3 */
    case 925:  /* mmx_rcpit2v2sf3 */
    case 924:  /* mmx_rcpit1v2sf3 */
    case 854:  /* sse4_2_crc32si */
    case 853:  /* sse4_2_crc32hi */
    case 852:  /* sse4_2_crc32qi */
    case 829:  /* *ieee_smindf3 */
    case 828:  /* *ieee_smaxdf3 */
    case 827:  /* *ieee_sminsf3 */
    case 826:  /* *ieee_smaxsf3 */
    case 741:  /* sse4_1_rounddf2 */
    case 740:  /* sse4_1_roundsf2 */
    case 633:  /* bmi2_pext_si3 */
    case 632:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 631:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 630:  /* *bmi2_bzhi_si3_1 */
    case 629:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 640:  /* *tbm_blsfill_si */
    case 639:  /* *tbm_blcs_si */
    case 638:  /* *tbm_blcmsk_si */
    case 635:  /* *tbm_blcfill_si */
    case 628:  /* *bmi_blsr_si */
    case 627:  /* *bmi_blsmsk_si */
    case 626:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 625:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 839:  /* probe_stack_rangedi */
    case 838:  /* probe_stack_rangesi */
    case 624:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 623:  /* *bmi_andn_di_ccno */
    case 622:  /* *bmi_andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 2196:  /* avx512f_cvtps2pd512_round */
    case 2188:  /* *avx512f_cvtpd2ps512_round */
    case 2166:  /* ufix_truncv8sfv8di2_round */
    case 2162:  /* fix_truncv8sfv8di2_round */
    case 2134:  /* ufix_truncv8dfv8di2_round */
    case 2130:  /* fix_truncv8dfv8di2_round */
    case 2120:  /* ufix_truncv8dfv8si2_round */
    case 2116:  /* fix_truncv8dfv8si2_round */
    case 2073:  /* ufloatv8div8sf2_round */
    case 2069:  /* floatv8div8sf2_round */
    case 2065:  /* ufloatv2div2df2_round */
    case 2061:  /* floatv2div2df2_round */
    case 2057:  /* ufloatv4div4df2_round */
    case 2053:  /* floatv4div4df2_round */
    case 2049:  /* ufloatv8div8df2_round */
    case 2045:  /* floatv8div8df2_round */
    case 2016:  /* ufix_truncv16sfv16si2_round */
    case 2012:  /* fix_truncv16sfv16si2_round */
    case 1972:  /* ufloatv4siv4sf2_round */
    case 1968:  /* ufloatv8siv8sf2_round */
    case 1964:  /* ufloatv16siv16sf2_round */
    case 1956:  /* floatv16siv16sf2_round */
    case 1318:  /* avx512f_sqrtv8df2_round */
    case 1310:  /* avx512f_sqrtv16sf2_round */
    case 648:  /* *popcountsi2_falsedep */
    case 618:  /* *clzsi2_lzcnt_falsedep */
    case 613:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 610:  /* *bsfsi_1 */
    case 609:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3607:  /* sse4a_vmmovntv2df */
    case 3606:  /* sse4a_vmmovntv4sf */
    case 2035:  /* sse2_cvtsd2si */
    case 2031:  /* avx512f_vcvtsd2usi */
    case 2027:  /* avx512f_vcvtss2usi */
    case 2009:  /* *avx512dq_cvtps2uqqv2di */
    case 2001:  /* *avx512dq_cvtps2qqv2di */
    case 1947:  /* sse_cvtss2si */
    case 719:  /* *cos_extenddfxf2_i387 */
    case 718:  /* *sin_extenddfxf2_i387 */
    case 717:  /* *cos_extendsfxf2_i387 */
    case 716:  /* *sin_extendsfxf2_i387 */
    case 604:  /* set_got_offset_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 603:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 879:  /* rdseedsi_1 */
    case 878:  /* rdseedhi_1 */
    case 877:  /* rdrandsi_1 */
    case 876:  /* rdrandhi_1 */
    case 866:  /* fnstenv */
    case 602:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 598:  /* simple_return_indirect_internal */
    case 597:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3514:  /* sse2_clflush */
    case 3512:  /* sse_ldmxcsr */
    case 892:  /* clzero_di */
    case 891:  /* clzero_si */
    case 887:  /* clflushopt */
    case 886:  /* clwb */
    case 883:  /* xabort */
    case 871:  /* *lwp_llwpcbdi1 */
    case 870:  /* *lwp_llwpcbsi1 */
    case 859:  /* fxrstor */
    case 607:  /* split_stack_return */
    case 601:  /* pad */
    case 600:  /* nops */
    case 594:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 4743:  /* mfence_sse2 */
    case 4742:  /* *sse_sfence */
    case 4741:  /* *sse2_lfence */
    case 880:  /* *pause */
    case 593:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 3897:  /* avx_vzeroupper */
    case 885:  /* pcommit */
    case 884:  /* xtest_1 */
    case 882:  /* xend */
    case 869:  /* fnclex */
    case 840:  /* trap */
    case 784:  /* cld */
    case 606:  /* leave */
    case 605:  /* eh_return_internal */
    case 599:  /* nop */
    case 596:  /* simple_return_internal_long */
    case 595:  /* simple_return_internal */
    case 592:  /* blockage */
      break;

    case 591:  /* *sibcall_value_pop_memory */
    case 590:  /* *sibcall_value_pop */
    case 589:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 584:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 583:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4257:  /* vec_set_hi_v32qi */
    case 4255:  /* vec_set_hi_v16hi */
    case 4252:  /* vec_set_hi_v8sf */
    case 4250:  /* vec_set_hi_v8si */
    case 4244:  /* vec_set_hi_v4df */
    case 4242:  /* vec_set_hi_v4di */
    case 3437:  /* vec_set_hi_v8di */
    case 3435:  /* vec_set_hi_v8df */
    case 3429:  /* vec_set_hi_v16si */
    case 3427:  /* vec_set_hi_v16sf */
    case 3230:  /* *andnotv2di3 */
    case 3229:  /* *andnotv4di3 */
    case 3228:  /* *andnotv4si3 */
    case 3227:  /* *andnotv8si3 */
    case 3226:  /* *andnotv8hi3 */
    case 3225:  /* *andnotv16hi3 */
    case 3224:  /* *andnotv32hi3 */
    case 3223:  /* *andnotv16qi3 */
    case 3222:  /* *andnotv32qi3 */
    case 3221:  /* *andnotv64qi3 */
    case 3220:  /* *andnotv8di3 */
    case 3219:  /* *andnotv16si3 */
    case 2717:  /* *avx512vl_us_truncatev2div2si2 */
    case 2716:  /* *avx512vl_truncatev2div2si2 */
    case 2715:  /* *avx512vl_ss_truncatev2div2si2 */
    case 2678:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 2677:  /* *avx512vl_truncatev4siv4hi2 */
    case 2676:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 2675:  /* *avx512vl_us_truncatev2div2hi2 */
    case 2674:  /* *avx512vl_truncatev2div2hi2 */
    case 2673:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 2672:  /* *avx512vl_us_truncatev4div4hi2 */
    case 2671:  /* *avx512vl_truncatev4div4hi2 */
    case 2670:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 2609:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 2608:  /* *avx512vl_truncatev8hiv8qi2 */
    case 2607:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 2606:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 2605:  /* *avx512vl_truncatev4siv4qi2 */
    case 2604:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 2603:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 2602:  /* *avx512vl_truncatev8siv8qi2 */
    case 2601:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 2600:  /* *avx512vl_us_truncatev2div2qi2 */
    case 2599:  /* *avx512vl_truncatev2div2qi2 */
    case 2598:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 2597:  /* *avx512vl_us_truncatev4div4qi2 */
    case 2596:  /* *avx512vl_truncatev4div4qi2 */
    case 2595:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 2541:  /* sse2_loadhpd */
    case 2261:  /* sse_loadhps */
    case 2193:  /* *sse2_cvtpd2ps */
    case 1630:  /* *andnottf3 */
    case 1629:  /* *andnotdf3 */
    case 1628:  /* *andnotsf3 */
    case 1590:  /* avx512f_andnotv8df3 */
    case 1588:  /* avx512f_andnotv16sf3 */
    case 1586:  /* sse2_andnotv2df3 */
    case 1584:  /* avx_andnotv4df3 */
    case 1582:  /* sse_andnotv4sf3 */
    case 1580:  /* avx_andnotv8sf3 */
    case 1327:  /* sse2_vmsqrtv2df2 */
    case 1325:  /* sse_vmsqrtv4sf2 */
    case 985:  /* mmx_andnotv2si3 */
    case 984:  /* mmx_andnotv4hi3 */
    case 983:  /* mmx_andnotv8qi3 */
    case 586:  /* *sibcall_value */
    case 585:  /* *sibcall_value */
    case 582:  /* *call_value */
    case 581:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 580:  /* *sibcall_pop_memory */
    case 579:  /* *sibcall_pop */
    case 578:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 573:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 572:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 569:  /* *tablejump_1 */
    case 568:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 567:  /* *indirect_jump */
    case 566:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 565:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 564:  /* *jccxf_si_r_i387 */
    case 563:  /* *jccdf_si_r_i387 */
    case 562:  /* *jccsf_si_r_i387 */
    case 561:  /* *jccxf_hi_r_i387 */
    case 560:  /* *jccdf_hi_r_i387 */
    case 559:  /* *jccsf_hi_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 558:  /* *jccxf_si_i387 */
    case 557:  /* *jccdf_si_i387 */
    case 556:  /* *jccsf_si_i387 */
    case 555:  /* *jccxf_hi_i387 */
    case 554:  /* *jccdf_hi_i387 */
    case 553:  /* *jccsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 552:  /* *jccuxf_r_i387 */
    case 551:  /* *jccudf_r_i387 */
    case 550:  /* *jccusf_r_i387 */
    case 546:  /* *jccdf_r_i387 */
    case 545:  /* *jccsf_r_i387 */
    case 542:  /* *jccxf_r_i387 */
    case 540:  /* *jccxf_0_r_i387 */
    case 539:  /* *jccdf_0_r_i387 */
    case 538:  /* *jccsf_0_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 549:  /* *jccuxf_i387 */
    case 548:  /* *jccudf_i387 */
    case 547:  /* *jccusf_i387 */
    case 544:  /* *jccdf_i387 */
    case 543:  /* *jccsf_i387 */
    case 541:  /* *jccxf_i387 */
    case 537:  /* *jccxf_0_i387 */
    case 536:  /* *jccdf_0_i387 */
    case 535:  /* *jccsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 534:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 533:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1571:  /* avx512f_maskcmpv2df3 */
    case 1570:  /* avx512f_maskcmpv4df3 */
    case 1569:  /* avx512f_maskcmpv8df3 */
    case 1568:  /* avx512f_maskcmpv4sf3 */
    case 1567:  /* avx512f_maskcmpv8sf3 */
    case 1566:  /* avx512f_maskcmpv16sf3 */
    case 1487:  /* sse2_maskcmpv2df3 */
    case 1486:  /* avx_maskcmpv4df3 */
    case 1485:  /* sse_maskcmpv4sf3 */
    case 1484:  /* avx_maskcmpv8sf3 */
    case 1483:  /* *sse2_maskcmpv2df3_comm */
    case 1482:  /* *avx_maskcmpv4df3_comm */
    case 1481:  /* *sse_maskcmpv4sf3_comm */
    case 1480:  /* *avx_maskcmpv8sf3_comm */
    case 693:  /* *fop_xf_1_i387 */
    case 692:  /* *fop_xf_comm_i387 */
    case 680:  /* *fop_df_1_i387 */
    case 679:  /* *fop_sf_1_i387 */
    case 678:  /* *fop_df_1_mixed */
    case 677:  /* *fop_sf_1_mixed */
    case 675:  /* *fop_df_comm_i387 */
    case 674:  /* *fop_sf_comm_i387 */
    case 673:  /* *fop_df_comm_mixed */
    case 672:  /* *fop_sf_comm_mixed */
    case 532:  /* setcc_df_sse */
    case 531:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 526:  /* *jcc_btdi_mask */
    case 525:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 524:  /* *jcc_btdi_1 */
    case 523:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 522:  /* *jcc_btdi */
    case 521:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 520:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 508:  /* ix86_rotrdi3_doubleword */
    case 507:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 506:  /* *rotrdi3_mask */
    case 505:  /* *rotldi3_mask */
    case 504:  /* *rotrsi3_mask */
    case 503:  /* *rotlsi3_mask */
    case 470:  /* *ashrdi3_mask */
    case 469:  /* *lshrdi3_mask */
    case 468:  /* *ashrsi3_mask */
    case 467:  /* *lshrsi3_mask */
    case 452:  /* *ashldi3_mask */
    case 451:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 473:  /* x86_shrd */
    case 450:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 432:  /* copysigntf3_var */
    case 431:  /* copysigndf3_var */
    case 430:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 4727:  /* vpamdd52huqv2di */
    case 4725:  /* vpamdd52luqv2di */
    case 4723:  /* vpamdd52huqv4di */
    case 4721:  /* vpamdd52luqv4di */
    case 4719:  /* vpamdd52huqv8di */
    case 4717:  /* vpamdd52luqv8di */
    case 4710:  /* sha256rnds2 */
    case 4707:  /* sha1rnds4 */
    case 4678:  /* *avx512bw_dbpsadbwv32hi */
    case 4676:  /* *avx512bw_dbpsadbwv16hi */
    case 4674:  /* *avx512bw_dbpsadbwv8hi */
    case 4626:  /* avx512dq_rangepv2df */
    case 4624:  /* avx512dq_rangepv4df */
    case 4620:  /* avx512dq_rangepv8df */
    case 4618:  /* avx512dq_rangepv4sf */
    case 4616:  /* avx512dq_rangepv8sf */
    case 4612:  /* avx512dq_rangepv16sf */
    case 4611:  /* avx512vl_expandv2df_mask */
    case 4610:  /* avx512vl_expandv2di_mask */
    case 4609:  /* avx512vl_expandv4sf_mask */
    case 4608:  /* avx512vl_expandv4si_mask */
    case 4607:  /* avx512vl_expandv4df_mask */
    case 4606:  /* avx512vl_expandv4di_mask */
    case 4605:  /* avx512vl_expandv8sf_mask */
    case 4604:  /* avx512vl_expandv8si_mask */
    case 4603:  /* avx512f_expandv8df_mask */
    case 4602:  /* avx512f_expandv8di_mask */
    case 4601:  /* avx512f_expandv16sf_mask */
    case 4600:  /* avx512f_expandv16si_mask */
    case 4587:  /* avx512vl_compressv2df_mask */
    case 4586:  /* avx512vl_compressv2di_mask */
    case 4585:  /* avx512vl_compressv4sf_mask */
    case 4584:  /* avx512vl_compressv4si_mask */
    case 4583:  /* avx512vl_compressv4df_mask */
    case 4582:  /* avx512vl_compressv4di_mask */
    case 4581:  /* avx512vl_compressv8sf_mask */
    case 4580:  /* avx512vl_compressv8si_mask */
    case 4579:  /* avx512f_compressv8df_mask */
    case 4578:  /* avx512f_compressv8di_mask */
    case 4577:  /* avx512f_compressv16sf_mask */
    case 4576:  /* avx512f_compressv16si_mask */
    case 4228:  /* *avx_vperm2f128v4df_full */
    case 4227:  /* *avx_vperm2f128v8sf_full */
    case 4226:  /* *avx_vperm2f128v8si_full */
    case 4206:  /* avx512bw_vpermt2varv32hi3 */
    case 4204:  /* avx512vl_vpermt2varv16hi3 */
    case 4202:  /* avx512vl_vpermt2varv8hi3 */
    case 4200:  /* avx512vl_vpermt2varv32qi3 */
    case 4198:  /* avx512vl_vpermt2varv16qi3 */
    case 4196:  /* avx512bw_vpermt2varv64qi3 */
    case 4194:  /* avx512vl_vpermt2varv2df3 */
    case 4192:  /* avx512vl_vpermt2varv2di3 */
    case 4190:  /* avx512vl_vpermt2varv4sf3 */
    case 4188:  /* avx512vl_vpermt2varv4si3 */
    case 4186:  /* avx512vl_vpermt2varv4df3 */
    case 4184:  /* avx512vl_vpermt2varv4di3 */
    case 4182:  /* avx512vl_vpermt2varv8sf3 */
    case 4180:  /* avx512vl_vpermt2varv8si3 */
    case 4178:  /* avx512f_vpermt2varv8df3 */
    case 4176:  /* avx512f_vpermt2varv8di3 */
    case 4174:  /* avx512f_vpermt2varv16sf3 */
    case 4172:  /* avx512f_vpermt2varv16si3 */
    case 4152:  /* avx512bw_vpermi2varv32hi3 */
    case 4150:  /* avx512vl_vpermi2varv16hi3 */
    case 4148:  /* avx512vl_vpermi2varv8hi3 */
    case 4146:  /* avx512vl_vpermi2varv32qi3 */
    case 4144:  /* avx512vl_vpermi2varv16qi3 */
    case 4142:  /* avx512bw_vpermi2varv64qi3 */
    case 4140:  /* avx512vl_vpermi2varv2df3 */
    case 4138:  /* avx512vl_vpermi2varv2di3 */
    case 4136:  /* avx512vl_vpermi2varv4sf3 */
    case 4134:  /* avx512vl_vpermi2varv4si3 */
    case 4132:  /* avx512vl_vpermi2varv4df3 */
    case 4130:  /* avx512vl_vpermi2varv4di3 */
    case 4128:  /* avx512vl_vpermi2varv8sf3 */
    case 4126:  /* avx512vl_vpermi2varv8si3 */
    case 4124:  /* avx512f_vpermi2varv8df3 */
    case 4122:  /* avx512f_vpermi2varv8di3 */
    case 4120:  /* avx512f_vpermi2varv16sf3 */
    case 4118:  /* avx512f_vpermi2varv16si3 */
    case 3950:  /* avx2_permv2ti */
    case 3895:  /* pclmulqdq */
    case 3884:  /* xop_pcom_tfv2di3 */
    case 3883:  /* xop_pcom_tfv4si3 */
    case 3882:  /* xop_pcom_tfv8hi3 */
    case 3881:  /* xop_pcom_tfv16qi3 */
    case 3837:  /* xop_pperm */
    case 3636:  /* sse4_1_pblendvb */
    case 3635:  /* avx2_pblendvb */
    case 3628:  /* sse4_1_mpsadbw */
    case 3627:  /* avx2_mpsadbw */
    case 3623:  /* sse4_1_dppd */
    case 3622:  /* avx_dppd256 */
    case 3621:  /* sse4_1_dpps */
    case 3620:  /* avx_dpps256 */
    case 3619:  /* sse4_1_blendvpd */
    case 3618:  /* avx_blendvpd256 */
    case 3617:  /* sse4_1_blendvps */
    case 3616:  /* avx_blendvps256 */
    case 3608:  /* sse4a_extrqi */
    case 3576:  /* ssse3_palignrdi */
    case 3575:  /* ssse3_palignrti */
    case 3574:  /* avx2_palignrv2ti */
    case 3573:  /* avx512bw_palignrv4ti */
    case 2438:  /* *avx512vl_alignv2di */
    case 2436:  /* *avx512vl_alignv4di */
    case 2434:  /* *avx512f_alignv8di */
    case 2432:  /* *avx512vl_alignv4si */
    case 2430:  /* *avx512vl_alignv8si */
    case 2428:  /* *avx512f_alignv16si */
    case 1846:  /* *fma_fmaddsub_v2df */
    case 1844:  /* *fma_fmaddsub_v4df */
    case 1840:  /* *fma_fmaddsub_v8df */
    case 1839:  /* *fma_fmaddsub_df */
    case 1837:  /* *fma_fmaddsub_v4sf */
    case 1835:  /* *fma_fmaddsub_v8sf */
    case 1831:  /* *fma_fmaddsub_v16sf */
    case 1830:  /* *fma_fmaddsub_sf */
    case 1829:  /* *fma_fmaddsub_v2df */
    case 1828:  /* *fma_fmaddsub_v4df */
    case 1827:  /* *fma_fmaddsub_v4sf */
    case 1826:  /* *fma_fmaddsub_v8sf */
    case 1556:  /* avx512vl_ucmpv2di3 */
    case 1554:  /* avx512vl_ucmpv4di3 */
    case 1552:  /* avx512f_ucmpv8di3 */
    case 1550:  /* avx512vl_ucmpv4si3 */
    case 1548:  /* avx512vl_ucmpv8si3 */
    case 1546:  /* avx512f_ucmpv16si3 */
    case 1544:  /* avx512vl_ucmpv8hi3 */
    case 1542:  /* avx512vl_ucmpv16hi3 */
    case 1540:  /* avx512bw_ucmpv32hi3 */
    case 1538:  /* avx512vl_ucmpv32qi3 */
    case 1536:  /* avx512vl_ucmpv16qi3 */
    case 1534:  /* avx512bw_ucmpv64qi3 */
    case 1532:  /* avx512vl_cmpv8hi3 */
    case 1530:  /* avx512vl_cmpv16hi3 */
    case 1528:  /* avx512bw_cmpv32hi3 */
    case 1526:  /* avx512vl_cmpv32qi3 */
    case 1524:  /* avx512vl_cmpv16qi3 */
    case 1522:  /* avx512bw_cmpv64qi3 */
    case 1520:  /* avx512vl_cmpv2df3 */
    case 1518:  /* avx512vl_cmpv4df3 */
    case 1514:  /* avx512f_cmpv8df3 */
    case 1512:  /* avx512vl_cmpv4sf3 */
    case 1510:  /* avx512vl_cmpv8sf3 */
    case 1506:  /* avx512f_cmpv16sf3 */
    case 1504:  /* avx512vl_cmpv2di3 */
    case 1502:  /* avx512vl_cmpv4di3 */
    case 1498:  /* avx512f_cmpv8di3 */
    case 1496:  /* avx512vl_cmpv4si3 */
    case 1494:  /* avx512vl_cmpv8si3 */
    case 1490:  /* avx512f_cmpv16si3 */
    case 1477:  /* avx_cmpv2df3 */
    case 1476:  /* avx_cmpv4df3 */
    case 1475:  /* avx_cmpv4sf3 */
    case 1474:  /* avx_cmpv8sf3 */
    case 429:  /* copysigntf3_const */
    case 428:  /* copysigndf3_const */
    case 427:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1187:  /* *absnegv2df2 */
    case 1186:  /* *absnegv4df2 */
    case 1185:  /* *absnegv8df2 */
    case 1184:  /* *absnegv4sf2 */
    case 1183:  /* *absnegv8sf2 */
    case 1182:  /* *absnegv16sf2 */
    case 414:  /* *absnegtf2_sse */
    case 413:  /* *absnegxf2_i387 */
    case 412:  /* *absnegdf2_i387 */
    case 411:  /* *absnegsf2_i387 */
    case 410:  /* *absnegdf2_mixed */
    case 409:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 408:  /* *negvdi3 */
    case 407:  /* *negvsi3 */
    case 406:  /* *negvhi3 */
    case 405:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 440:  /* *one_cmpldi2_2 */
    case 439:  /* *one_cmplsi2_2 */
    case 438:  /* *one_cmplhi2_2 */
    case 437:  /* *one_cmplqi2_2 */
    case 404:  /* *negdi2_cmpz */
    case 403:  /* *negsi2_cmpz */
    case 402:  /* *neghi2_cmpz */
    case 401:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 377:  /* kunpckdi */
    case 376:  /* kunpcksi */
    case 375:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 372:  /* kxnordi */
    case 371:  /* kxnorsi */
    case 370:  /* kxnorhi */
    case 369:  /* kxnorqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 394:  /* *xorqi_cc_ext_1 */
    case 345:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 379:  /* *xorqi_2_slp */
    case 378:  /* *iorqi_2_slp */
    case 343:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 621:  /* *bmi_andn_si */
    case 588:  /* *sibcall_value_memory */
    case 587:  /* *sibcall_value_memory */
    case 354:  /* *andndi3_doubleword */
    case 338:  /* kandnhi */
    case 337:  /* kandnqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 4342:  /* avx_vec_concatv8df */
    case 4341:  /* avx_vec_concatv16sf */
    case 4340:  /* avx_vec_concatv8di */
    case 4339:  /* avx_vec_concatv16si */
    case 4338:  /* avx_vec_concatv32hi */
    case 4337:  /* avx_vec_concatv64qi */
    case 4336:  /* avx_vec_concatv4df */
    case 4335:  /* avx_vec_concatv8sf */
    case 4334:  /* avx_vec_concatv4di */
    case 4333:  /* avx_vec_concatv8si */
    case 4332:  /* avx_vec_concatv16hi */
    case 4331:  /* avx_vec_concatv32qi */
    case 4329:  /* avx512bw_lshrvv32hi */
    case 4327:  /* avx512bw_ashlvv32hi */
    case 4325:  /* avx512vl_lshrvv16hi */
    case 4323:  /* avx512vl_ashlvv16hi */
    case 4321:  /* avx512vl_lshrvv8hi */
    case 4319:  /* avx512vl_ashlvv8hi */
    case 4317:  /* avx2_lshrvv2di */
    case 4315:  /* avx2_ashlvv2di */
    case 4313:  /* avx2_lshrvv4di */
    case 4311:  /* avx2_ashlvv4di */
    case 4309:  /* avx512f_lshrvv8di */
    case 4307:  /* avx512f_ashlvv8di */
    case 4305:  /* avx2_lshrvv4si */
    case 4303:  /* avx2_ashlvv4si */
    case 4301:  /* avx2_lshrvv8si */
    case 4299:  /* avx2_ashlvv8si */
    case 4297:  /* avx512f_lshrvv16si */
    case 4295:  /* avx512f_ashlvv16si */
    case 4293:  /* avx512bw_ashrvv32hi */
    case 4291:  /* avx512vl_ashrvv16hi */
    case 4289:  /* avx512vl_ashrvv8hi */
    case 4287:  /* avx512f_ashrvv8di */
    case 4285:  /* avx2_ashrvv4di */
    case 4283:  /* avx2_ashrvv2di */
    case 4281:  /* avx512f_ashrvv16si */
    case 4279:  /* avx2_ashrvv8si */
    case 4277:  /* avx2_ashrvv4si */
    case 3848:  /* xop_rotrv2di3 */
    case 3847:  /* xop_rotrv4si3 */
    case 3846:  /* xop_rotrv8hi3 */
    case 3845:  /* xop_rotrv16qi3 */
    case 3844:  /* xop_rotlv2di3 */
    case 3843:  /* xop_rotlv4si3 */
    case 3842:  /* xop_rotlv8hi3 */
    case 3841:  /* xop_rotlv16qi3 */
    case 3488:  /* vec_concatv2di */
    case 3487:  /* *vec_concatv4si */
    case 3486:  /* *vec_concatv2si */
    case 3485:  /* *vec_concatv2si_sse4_1 */
    case 3307:  /* *xorv8hi3 */
    case 3305:  /* *iorv8hi3 */
    case 3303:  /* *andv8hi3 */
    case 3301:  /* *xorv16hi3 */
    case 3299:  /* *iorv16hi3 */
    case 3297:  /* *andv16hi3 */
    case 3295:  /* *xorv32hi3 */
    case 3293:  /* *iorv32hi3 */
    case 3291:  /* *andv32hi3 */
    case 3289:  /* *xorv16qi3 */
    case 3287:  /* *iorv16qi3 */
    case 3285:  /* *andv16qi3 */
    case 3283:  /* *xorv32qi3 */
    case 3281:  /* *iorv32qi3 */
    case 3279:  /* *andv32qi3 */
    case 3277:  /* *xorv64qi3 */
    case 3275:  /* *iorv64qi3 */
    case 3273:  /* *andv64qi3 */
    case 3271:  /* *xorv2di3 */
    case 3269:  /* *iorv2di3 */
    case 3267:  /* *andv2di3 */
    case 3265:  /* *xorv4di3 */
    case 3263:  /* *iorv4di3 */
    case 3261:  /* *andv4di3 */
    case 3259:  /* *xorv8di3 */
    case 3257:  /* *iorv8di3 */
    case 3255:  /* *andv8di3 */
    case 3253:  /* *xorv4si3 */
    case 3251:  /* *iorv4si3 */
    case 3249:  /* *andv4si3 */
    case 3247:  /* *xorv8si3 */
    case 3245:  /* *iorv8si3 */
    case 3243:  /* *andv8si3 */
    case 3241:  /* *xorv16si3 */
    case 3239:  /* *iorv16si3 */
    case 3237:  /* *andv16si3 */
    case 3218:  /* sse2_gtv4si3 */
    case 3217:  /* sse2_gtv8hi3 */
    case 3216:  /* sse2_gtv16qi3 */
    case 3191:  /* avx2_gtv4di3 */
    case 3190:  /* avx2_gtv8si3 */
    case 3189:  /* avx2_gtv16hi3 */
    case 3188:  /* avx2_gtv32qi3 */
    case 3187:  /* sse4_2_gtv2di3 */
    case 3186:  /* *sse2_eqv4si3 */
    case 3185:  /* *sse2_eqv8hi3 */
    case 3184:  /* *sse2_eqv16qi3 */
    case 3183:  /* *sse4_1_eqv2di3 */
    case 3158:  /* *avx2_eqv4di3 */
    case 3157:  /* *avx2_eqv8si3 */
    case 3156:  /* *avx2_eqv16hi3 */
    case 3155:  /* *avx2_eqv32qi3 */
    case 3154:  /* *uminv16qi3 */
    case 3153:  /* *umaxv16qi3 */
    case 3151:  /* *sse4_1_uminv4si3 */
    case 3149:  /* *sse4_1_umaxv4si3 */
    case 3147:  /* *sse4_1_uminv8hi3 */
    case 3145:  /* *sse4_1_umaxv8hi3 */
    case 3144:  /* *sminv8hi3 */
    case 3143:  /* *smaxv8hi3 */
    case 3141:  /* *sse4_1_sminv4si3 */
    case 3139:  /* *sse4_1_smaxv4si3 */
    case 3137:  /* *sse4_1_sminv16qi3 */
    case 3135:  /* *sse4_1_smaxv16qi3 */
    case 3133:  /* *uminv8hi3 */
    case 3131:  /* *umaxv8hi3 */
    case 3129:  /* *sminv8hi3 */
    case 3127:  /* *smaxv8hi3 */
    case 3125:  /* *uminv16hi3 */
    case 3123:  /* *umaxv16hi3 */
    case 3121:  /* *sminv16hi3 */
    case 3119:  /* *smaxv16hi3 */
    case 3117:  /* *uminv32hi3 */
    case 3115:  /* *umaxv32hi3 */
    case 3113:  /* *sminv32hi3 */
    case 3111:  /* *smaxv32hi3 */
    case 3109:  /* *uminv32qi3 */
    case 3107:  /* *umaxv32qi3 */
    case 3105:  /* *sminv32qi3 */
    case 3103:  /* *smaxv32qi3 */
    case 3101:  /* *uminv16qi3 */
    case 3099:  /* *umaxv16qi3 */
    case 3097:  /* *sminv16qi3 */
    case 3095:  /* *smaxv16qi3 */
    case 3093:  /* *uminv64qi3 */
    case 3091:  /* *umaxv64qi3 */
    case 3089:  /* *sminv64qi3 */
    case 3087:  /* *smaxv64qi3 */
    case 3085:  /* *avx512bw_uminv2di3 */
    case 3083:  /* *avx512bw_umaxv2di3 */
    case 3081:  /* *avx512bw_sminv2di3 */
    case 3079:  /* *avx512bw_smaxv2di3 */
    case 3077:  /* *avx512bw_uminv4di3 */
    case 3075:  /* *avx512bw_umaxv4di3 */
    case 3073:  /* *avx512bw_sminv4di3 */
    case 3071:  /* *avx512bw_smaxv4di3 */
    case 3069:  /* *avx512bw_uminv8di3 */
    case 3067:  /* *avx512bw_umaxv8di3 */
    case 3065:  /* *avx512bw_sminv8di3 */
    case 3063:  /* *avx512bw_smaxv8di3 */
    case 3061:  /* *avx512bw_uminv4si3 */
    case 3059:  /* *avx512bw_umaxv4si3 */
    case 3057:  /* *avx512bw_sminv4si3 */
    case 3055:  /* *avx512bw_smaxv4si3 */
    case 3053:  /* *avx512bw_uminv8si3 */
    case 3051:  /* *avx512bw_umaxv8si3 */
    case 3049:  /* *avx512bw_sminv8si3 */
    case 3047:  /* *avx512bw_smaxv8si3 */
    case 3045:  /* *avx512bw_uminv16si3 */
    case 3043:  /* *avx512bw_umaxv16si3 */
    case 3041:  /* *avx512bw_sminv16si3 */
    case 3039:  /* *avx512bw_smaxv16si3 */
    case 3038:  /* *avx2_uminv8si3 */
    case 3037:  /* *avx2_umaxv8si3 */
    case 3036:  /* *avx2_sminv8si3 */
    case 3035:  /* *avx2_smaxv8si3 */
    case 3034:  /* *avx2_uminv16hi3 */
    case 3033:  /* *avx2_umaxv16hi3 */
    case 3032:  /* *avx2_sminv16hi3 */
    case 3031:  /* *avx2_smaxv16hi3 */
    case 3030:  /* *avx2_uminv32qi3 */
    case 3029:  /* *avx2_umaxv32qi3 */
    case 3028:  /* *avx2_sminv32qi3 */
    case 3027:  /* *avx2_smaxv32qi3 */
    case 3025:  /* avx512vl_rorv2di */
    case 3023:  /* avx512vl_rolv2di */
    case 3021:  /* avx512vl_rorv4di */
    case 3019:  /* avx512vl_rolv4di */
    case 3017:  /* avx512f_rorv8di */
    case 3015:  /* avx512f_rolv8di */
    case 3013:  /* avx512vl_rorv4si */
    case 3011:  /* avx512vl_rolv4si */
    case 3009:  /* avx512vl_rorv8si */
    case 3007:  /* avx512vl_rolv8si */
    case 3005:  /* avx512f_rorv16si */
    case 3003:  /* avx512f_rolv16si */
    case 3001:  /* avx512vl_rorvv2di */
    case 2999:  /* avx512vl_rolvv2di */
    case 2997:  /* avx512vl_rorvv4di */
    case 2995:  /* avx512vl_rolvv4di */
    case 2993:  /* avx512f_rorvv8di */
    case 2991:  /* avx512f_rolvv8di */
    case 2989:  /* avx512vl_rorvv4si */
    case 2987:  /* avx512vl_rolvv4si */
    case 2985:  /* avx512vl_rorvv8si */
    case 2983:  /* avx512vl_rolvv8si */
    case 2981:  /* avx512f_rorvv16si */
    case 2979:  /* avx512f_rolvv16si */
    case 2978:  /* sse2_lshrv1ti3 */
    case 2977:  /* avx2_lshrv2ti3 */
    case 2976:  /* avx512bw_lshrv4ti3 */
    case 2975:  /* sse2_ashlv1ti3 */
    case 2974:  /* avx2_ashlv2ti3 */
    case 2973:  /* avx512bw_ashlv4ti3 */
    case 2971:  /* lshrv8di3 */
    case 2969:  /* ashlv8di3 */
    case 2967:  /* lshrv16si3 */
    case 2965:  /* ashlv16si3 */
    case 2963:  /* lshrv2di3 */
    case 2961:  /* ashlv2di3 */
    case 2959:  /* lshrv4di3 */
    case 2957:  /* ashlv4di3 */
    case 2955:  /* lshrv4si3 */
    case 2953:  /* ashlv4si3 */
    case 2951:  /* lshrv8si3 */
    case 2949:  /* ashlv8si3 */
    case 2947:  /* lshrv8hi3 */
    case 2945:  /* ashlv8hi3 */
    case 2943:  /* lshrv16hi3 */
    case 2941:  /* ashlv16hi3 */
    case 2939:  /* lshrv32hi3 */
    case 2937:  /* ashlv32hi3 */
    case 2935:  /* ashrv8di3 */
    case 2933:  /* ashrv16si3 */
    case 2931:  /* ashrv4di3 */
    case 2929:  /* ashrv32hi3 */
    case 2927:  /* *ashrv2di3 */
    case 2925:  /* *ashrv4si3 */
    case 2923:  /* *ashrv8si3 */
    case 2921:  /* *ashrv8hi3 */
    case 2919:  /* *ashrv16hi3 */
    case 2918:  /* ashrv4si3 */
    case 2917:  /* ashrv8si3 */
    case 2916:  /* ashrv8hi3 */
    case 2915:  /* ashrv16hi3 */
    case 2913:  /* *sse4_1_mulv4si3 */
    case 2911:  /* *avx2_mulv8si3 */
    case 2909:  /* *avx512f_mulv16si3 */
    case 2907:  /* avx512dq_mulv2di3 */
    case 2905:  /* avx512dq_mulv4di3 */
    case 2903:  /* avx512dq_mulv8di3 */
    case 2869:  /* *mulv8hi3 */
    case 2867:  /* *mulv16hi3 */
    case 2865:  /* *mulv32hi3 */
    case 2863:  /* *sse2_ussubv8hi3 */
    case 2861:  /* *sse2_sssubv8hi3 */
    case 2859:  /* *sse2_usaddv8hi3 */
    case 2857:  /* *sse2_ssaddv8hi3 */
    case 2855:  /* *avx2_ussubv16hi3 */
    case 2853:  /* *avx2_sssubv16hi3 */
    case 2851:  /* *avx2_usaddv16hi3 */
    case 2849:  /* *avx2_ssaddv16hi3 */
    case 2847:  /* *avx512bw_ussubv32hi3 */
    case 2845:  /* *avx512bw_sssubv32hi3 */
    case 2843:  /* *avx512bw_usaddv32hi3 */
    case 2841:  /* *avx512bw_ssaddv32hi3 */
    case 2839:  /* *sse2_ussubv16qi3 */
    case 2837:  /* *sse2_sssubv16qi3 */
    case 2835:  /* *sse2_usaddv16qi3 */
    case 2833:  /* *sse2_ssaddv16qi3 */
    case 2831:  /* *avx2_ussubv32qi3 */
    case 2829:  /* *avx2_sssubv32qi3 */
    case 2827:  /* *avx2_usaddv32qi3 */
    case 2825:  /* *avx2_ssaddv32qi3 */
    case 2823:  /* *avx512bw_ussubv64qi3 */
    case 2821:  /* *avx512bw_sssubv64qi3 */
    case 2819:  /* *avx512bw_usaddv64qi3 */
    case 2817:  /* *avx512bw_ssaddv64qi3 */
    case 2791:  /* *subv2di3 */
    case 2789:  /* *addv2di3 */
    case 2787:  /* *subv4di3 */
    case 2785:  /* *addv4di3 */
    case 2783:  /* *subv8di3 */
    case 2781:  /* *addv8di3 */
    case 2779:  /* *subv4si3 */
    case 2777:  /* *addv4si3 */
    case 2775:  /* *subv8si3 */
    case 2773:  /* *addv8si3 */
    case 2771:  /* *subv16si3 */
    case 2769:  /* *addv16si3 */
    case 2767:  /* *subv8hi3 */
    case 2765:  /* *addv8hi3 */
    case 2763:  /* *subv16hi3 */
    case 2761:  /* *addv16hi3 */
    case 2759:  /* *subv32hi3 */
    case 2757:  /* *addv32hi3 */
    case 2755:  /* *subv16qi3 */
    case 2753:  /* *addv16qi3 */
    case 2751:  /* *subv32qi3 */
    case 2749:  /* *addv32qi3 */
    case 2747:  /* *subv64qi3 */
    case 2745:  /* *addv64qi3 */
    case 2546:  /* vec_concatv2df */
    case 2272:  /* *vec_concatv4sf */
    case 2271:  /* *vec_concatv2sf_sse */
    case 2270:  /* *vec_concatv2sf_sse4_1 */
    case 1639:  /* *xortf3 */
    case 1638:  /* *iortf3 */
    case 1637:  /* *andtf3 */
    case 1636:  /* *xordf3 */
    case 1635:  /* *iordf3 */
    case 1634:  /* *anddf3 */
    case 1633:  /* *xorsf3 */
    case 1632:  /* *iorsf3 */
    case 1631:  /* *andsf3 */
    case 1626:  /* *xorv8df3 */
    case 1624:  /* *iorv8df3 */
    case 1622:  /* *andv8df3 */
    case 1620:  /* *xorv16sf3 */
    case 1618:  /* *iorv16sf3 */
    case 1616:  /* *andv16sf3 */
    case 1614:  /* *xorv2df3 */
    case 1612:  /* *iorv2df3 */
    case 1610:  /* *andv2df3 */
    case 1608:  /* *xorv4df3 */
    case 1606:  /* *iorv4df3 */
    case 1604:  /* *andv4df3 */
    case 1602:  /* *xorv4sf3 */
    case 1600:  /* *iorv4sf3 */
    case 1598:  /* *andv4sf3 */
    case 1596:  /* *xorv8sf3 */
    case 1594:  /* *iorv8sf3 */
    case 1592:  /* *andv8sf3 */
    case 1424:  /* *sminv2df3 */
    case 1422:  /* *smaxv2df3 */
    case 1420:  /* *sminv4df3 */
    case 1418:  /* *smaxv4df3 */
    case 1414:  /* *sminv8df3 */
    case 1410:  /* *smaxv8df3 */
    case 1408:  /* *sminv4sf3 */
    case 1406:  /* *smaxv4sf3 */
    case 1404:  /* *sminv8sf3 */
    case 1402:  /* *smaxv8sf3 */
    case 1398:  /* *sminv16sf3 */
    case 1394:  /* *smaxv16sf3 */
    case 1390:  /* *sminv2df3_finite */
    case 1386:  /* *smaxv2df3_finite */
    case 1382:  /* *sminv4df3_finite */
    case 1378:  /* *smaxv4df3_finite */
    case 1374:  /* *sminv8df3_finite */
    case 1370:  /* *smaxv8df3_finite */
    case 1366:  /* *sminv4sf3_finite */
    case 1362:  /* *smaxv4sf3_finite */
    case 1358:  /* *sminv8sf3_finite */
    case 1354:  /* *smaxv8sf3_finite */
    case 1350:  /* *sminv16sf3_finite */
    case 1346:  /* *smaxv16sf3_finite */
    case 1290:  /* sse2_divv2df3 */
    case 1288:  /* avx_divv4df3 */
    case 1284:  /* avx512f_divv8df3 */
    case 1282:  /* sse_divv4sf3 */
    case 1280:  /* avx_divv8sf3 */
    case 1276:  /* avx512f_divv16sf3 */
    case 1264:  /* *mulv2df3 */
    case 1260:  /* *mulv4df3 */
    case 1256:  /* *mulv8df3 */
    case 1252:  /* *mulv4sf3 */
    case 1248:  /* *mulv8sf3 */
    case 1244:  /* *mulv16sf3 */
    case 1232:  /* *subv2df3 */
    case 1228:  /* *addv2df3 */
    case 1224:  /* *subv4df3 */
    case 1220:  /* *addv4df3 */
    case 1216:  /* *subv8df3 */
    case 1212:  /* *addv8df3 */
    case 1208:  /* *subv4sf3 */
    case 1204:  /* *addv4sf3 */
    case 1200:  /* *subv8sf3 */
    case 1196:  /* *addv8sf3 */
    case 1192:  /* *subv16sf3 */
    case 1188:  /* *addv16sf3 */
    case 1010:  /* *mmx_concatv2si */
    case 994:  /* *mmx_xorv2si3 */
    case 993:  /* *mmx_iorv2si3 */
    case 992:  /* *mmx_andv2si3 */
    case 991:  /* *mmx_xorv4hi3 */
    case 990:  /* *mmx_iorv4hi3 */
    case 989:  /* *mmx_andv4hi3 */
    case 988:  /* *mmx_xorv8qi3 */
    case 987:  /* *mmx_iorv8qi3 */
    case 986:  /* *mmx_andv8qi3 */
    case 982:  /* mmx_gtv2si3 */
    case 981:  /* mmx_gtv4hi3 */
    case 980:  /* mmx_gtv8qi3 */
    case 979:  /* *mmx_eqv2si3 */
    case 978:  /* *mmx_eqv4hi3 */
    case 977:  /* *mmx_eqv8qi3 */
    case 976:  /* mmx_lshrv1di3 */
    case 975:  /* mmx_ashlv1di3 */
    case 974:  /* mmx_lshrv2si3 */
    case 973:  /* mmx_ashlv2si3 */
    case 972:  /* mmx_lshrv4hi3 */
    case 971:  /* mmx_ashlv4hi3 */
    case 970:  /* mmx_ashrv2si3 */
    case 969:  /* mmx_ashrv4hi3 */
    case 968:  /* *mmx_uminv8qi3 */
    case 967:  /* *mmx_umaxv8qi3 */
    case 966:  /* *mmx_sminv4hi3 */
    case 965:  /* *mmx_smaxv4hi3 */
    case 959:  /* *mmx_mulv4hi3 */
    case 958:  /* *mmx_ussubv4hi3 */
    case 957:  /* *mmx_sssubv4hi3 */
    case 956:  /* *mmx_usaddv4hi3 */
    case 955:  /* *mmx_ssaddv4hi3 */
    case 954:  /* *mmx_ussubv8qi3 */
    case 953:  /* *mmx_sssubv8qi3 */
    case 952:  /* *mmx_usaddv8qi3 */
    case 951:  /* *mmx_ssaddv8qi3 */
    case 950:  /* *mmx_subv1di3 */
    case 949:  /* *mmx_addv1di3 */
    case 948:  /* *mmx_subv2si3 */
    case 947:  /* *mmx_addv2si3 */
    case 946:  /* *mmx_subv4hi3 */
    case 945:  /* *mmx_addv4hi3 */
    case 944:  /* *mmx_subv8qi3 */
    case 943:  /* *mmx_addv8qi3 */
    case 940:  /* *mmx_concatv2sf */
    case 933:  /* mmx_gev2sf3 */
    case 932:  /* mmx_gtv2sf3 */
    case 931:  /* *mmx_eqv2sf3 */
    case 922:  /* *mmx_sminv2sf3 */
    case 921:  /* *mmx_smaxv2sf3 */
    case 920:  /* *mmx_sminv2sf3_finite */
    case 919:  /* *mmx_smaxv2sf3_finite */
    case 918:  /* *mmx_mulv2sf3 */
    case 917:  /* *mmx_subv2sf3 */
    case 916:  /* *mmx_addv2sf3 */
    case 825:  /* smindf3 */
    case 824:  /* smaxdf3 */
    case 823:  /* sminsf3 */
    case 822:  /* smaxsf3 */
    case 509:  /* *bmi2_rorxsi3_1 */
    case 476:  /* *bmi2_ashrsi3_1 */
    case 475:  /* *bmi2_lshrsi3_1 */
    case 453:  /* *bmi2_ashlsi3_1 */
    case 448:  /* *shiftrdi3 */
    case 447:  /* *shiftldi3 */
    case 446:  /* *shiftrsi3 */
    case 445:  /* *shiftlsi3 */
    case 444:  /* *shiftrhi3 */
    case 443:  /* *shiftlhi3 */
    case 442:  /* *shiftrqi3 */
    case 441:  /* *shiftlqi3 */
    case 331:  /* *kxordi */
    case 330:  /* *kordi */
    case 329:  /* *kanddi */
    case 328:  /* *kxorsi */
    case 327:  /* *korsi */
    case 326:  /* *kandsi */
    case 325:  /* *kxorhi */
    case 324:  /* *korhi */
    case 323:  /* *kandhi */
    case 322:  /* *kxorqi */
    case 321:  /* *korqi */
    case 320:  /* *kandqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 319:  /* *testqi_ext_3 */
    case 318:  /* *testqi_ext_3 */
    case 317:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 316:  /* *testqi_ext_2 */
    case 315:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 314:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 309:  /* udivmodhiqi3 */
    case 302:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 308:  /* *udivmodsi4_noext */
    case 307:  /* *udivmodhi4_noext */
    case 301:  /* *divmodsi4_noext */
    case 300:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 306:  /* *udivmodsi4_pow2 */
    case 305:  /* *udivmodsi4 */
    case 304:  /* *udivmodhi4 */
    case 303:  /* udivmodsi4_1 */
    case 299:  /* *divmodsi4 */
    case 298:  /* *divmodhi4 */
    case 297:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 296:  /* *umulsi3_highpart_1 */
    case 295:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 294:  /* *umulqihi3_1 */
    case 293:  /* *mulqihi3_1 */
    case 292:  /* *mulsidi3_1 */
    case 291:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 290:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 287:  /* *umulvsi4 */
    case 286:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 278:  /* *adddi3_cc_overflow_2 */
    case 277:  /* *addsi3_cc_overflow_2 */
    case 276:  /* *addhi3_cc_overflow_2 */
    case 275:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 274:  /* *adddi3_cc_overflow_1 */
    case 273:  /* *addsi3_cc_overflow_1 */
    case 272:  /* *addhi3_cc_overflow_1 */
    case 271:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 270:  /* *addsi3_cconly_overflow_2 */
    case 269:  /* *addhi3_cconly_overflow_2 */
    case 268:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 267:  /* *addsi3_cconly_overflow_1 */
    case 266:  /* *addhi3_cconly_overflow_1 */
    case 265:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 264:  /* subborrowdi */
    case 263:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 262:  /* subdi3_carry */
    case 261:  /* subsi3_carry */
    case 260:  /* subhi3_carry */
    case 259:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 258:  /* addcarrydi */
    case 257:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[4] = 1;
      break;

    case 256:  /* adddi3_carry */
    case 255:  /* addsi3_carry */
    case 254:  /* addhi3_carry */
    case 253:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 252:  /* *subdi_3 */
    case 251:  /* *subsi_3 */
    case 250:  /* *subhi_3 */
    case 249:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 227:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3797:  /* xop_pmacssdd */
    case 3796:  /* xop_pmacsdd */
    case 3795:  /* xop_pmacssww */
    case 3794:  /* xop_pmacsww */
    case 229:  /* *lea_general_4 */
    case 228:  /* *lea_general_4 */
    case 226:  /* *lea_general_2 */
    case 225:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 285:  /* *mulvsi4_1 */
    case 284:  /* *mulvhi4_1 */
    case 248:  /* *subvdi4_1 */
    case 247:  /* *subvsi4_1 */
    case 246:  /* *subvhi4_1 */
    case 245:  /* *subvqi4_1 */
    case 224:  /* *addvdi4_1 */
    case 223:  /* *addvsi4_1 */
    case 222:  /* *addvhi4_1 */
    case 221:  /* *addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 289:  /* *umulvqi4 */
    case 288:  /* *mulvqi4 */
    case 283:  /* *mulvhi4 */
    case 282:  /* *mulvsi4 */
    case 244:  /* *subvdi4 */
    case 243:  /* *subvsi4 */
    case 242:  /* *subvhi4 */
    case 241:  /* *subvqi4 */
    case 220:  /* *addvdi4 */
    case 219:  /* *addvsi4 */
    case 218:  /* *addvhi4 */
    case 217:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 393:  /* *xorqi_ext_2 */
    case 392:  /* *iorqi_ext_2 */
    case 391:  /* *xorqi_ext_1 */
    case 390:  /* *iorqi_ext_1 */
    case 347:  /* *andqi_ext_2 */
    case 346:  /* *andqi_ext_1 */
    case 216:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 389:  /* *xorqi_ext_0 */
    case 388:  /* *iorqi_ext_0 */
    case 344:  /* andqi_ext_0 */
    case 215:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 502:  /* *ashrdi3_cconly */
    case 501:  /* *lshrdi3_cconly */
    case 500:  /* *ashrsi3_cconly */
    case 499:  /* *lshrsi3_cconly */
    case 498:  /* *ashrhi3_cconly */
    case 497:  /* *lshrhi3_cconly */
    case 496:  /* *ashrqi3_cconly */
    case 495:  /* *lshrqi3_cconly */
    case 466:  /* *ashldi3_cconly */
    case 465:  /* *ashlsi3_cconly */
    case 464:  /* *ashlhi3_cconly */
    case 463:  /* *ashlqi3_cconly */
    case 387:  /* *xordi_3 */
    case 386:  /* *iordi_3 */
    case 385:  /* *xorsi_3 */
    case 384:  /* *iorsi_3 */
    case 383:  /* *xorhi_3 */
    case 382:  /* *iorhi_3 */
    case 381:  /* *xorqi_3 */
    case 380:  /* *iorqi_3 */
    case 214:  /* *adddi_5 */
    case 213:  /* *addsi_5 */
    case 212:  /* *addhi_5 */
    case 211:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 207:  /* *adddi_3 */
    case 206:  /* *addsi_3 */
    case 205:  /* *addhi_3 */
    case 204:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 494:  /* *ashrdi3_cmp */
    case 493:  /* *lshrdi3_cmp */
    case 492:  /* *ashrsi3_cmp */
    case 491:  /* *lshrsi3_cmp */
    case 490:  /* *ashrhi3_cmp */
    case 489:  /* *lshrhi3_cmp */
    case 488:  /* *ashrqi3_cmp */
    case 487:  /* *lshrqi3_cmp */
    case 462:  /* *ashldi3_cmp */
    case 461:  /* *ashlsi3_cmp */
    case 460:  /* *ashlhi3_cmp */
    case 459:  /* *ashlqi3_cmp */
    case 368:  /* *xordi_2 */
    case 367:  /* *iordi_2 */
    case 366:  /* *xorsi_2 */
    case 365:  /* *iorsi_2 */
    case 364:  /* *xorhi_2 */
    case 363:  /* *iorhi_2 */
    case 362:  /* *xorqi_2 */
    case 361:  /* *iorqi_2 */
    case 342:  /* *andsi_2 */
    case 341:  /* *andhi_2 */
    case 340:  /* *andqi_2 */
    case 339:  /* *andqi_2_maybe_si */
    case 240:  /* *subdi_2 */
    case 239:  /* *subsi_2 */
    case 238:  /* *subhi_2 */
    case 237:  /* *subqi_2 */
    case 203:  /* *adddi_2 */
    case 202:  /* *addsi_2 */
    case 201:  /* *addhi_2 */
    case 200:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 519:  /* *rotrqi3_1_slp */
    case 518:  /* *rotlqi3_1_slp */
    case 486:  /* *ashrqi3_1_slp */
    case 485:  /* *lshrqi3_1_slp */
    case 458:  /* *ashlqi3_1_slp */
    case 360:  /* *xorqi_1_slp */
    case 359:  /* *iorqi_1_slp */
    case 336:  /* *andqi_1_slp */
    case 236:  /* *subqi_1_slp */
    case 199:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 833:  /* pro_epilogue_adjust_stack_di_sub */
    case 832:  /* pro_epilogue_adjust_stack_si_sub */
    case 831:  /* pro_epilogue_adjust_stack_di_add */
    case 830:  /* pro_epilogue_adjust_stack_si_add */
    case 517:  /* *rotrhi3_1 */
    case 516:  /* *rotlhi3_1 */
    case 515:  /* *rotrqi3_1 */
    case 514:  /* *rotlqi3_1 */
    case 513:  /* *rotrdi3_1 */
    case 512:  /* *rotldi3_1 */
    case 511:  /* *rotrsi3_1 */
    case 510:  /* *rotlsi3_1 */
    case 484:  /* *ashrhi3_1 */
    case 483:  /* *lshrhi3_1 */
    case 482:  /* *ashrqi3_1 */
    case 481:  /* *lshrqi3_1 */
    case 480:  /* *ashrdi3_1 */
    case 479:  /* *lshrdi3_1 */
    case 478:  /* *ashrsi3_1 */
    case 477:  /* *lshrsi3_1 */
    case 474:  /* ashrsi3_cvt */
    case 472:  /* *ashrdi3_doubleword */
    case 471:  /* *lshrdi3_doubleword */
    case 457:  /* *ashlqi3_1 */
    case 456:  /* *ashlhi3_1 */
    case 455:  /* *ashldi3_1 */
    case 454:  /* *ashlsi3_1 */
    case 449:  /* *ashldi3_doubleword */
    case 358:  /* *xorqi_1 */
    case 357:  /* *iorqi_1 */
    case 356:  /* *xorhi_1 */
    case 355:  /* *iorhi_1 */
    case 353:  /* *xordi3_doubleword */
    case 352:  /* *iordi3_doubleword */
    case 351:  /* *xordi_1 */
    case 350:  /* *iordi_1 */
    case 349:  /* *xorsi_1 */
    case 348:  /* *iorsi_1 */
    case 335:  /* *andqi_1 */
    case 334:  /* *andhi_1 */
    case 333:  /* *andsi_1 */
    case 332:  /* *anddi3_doubleword */
    case 281:  /* *mulqi3_1 */
    case 280:  /* *mulsi3_1 */
    case 279:  /* *mulhi3_1 */
    case 235:  /* *subdi_1 */
    case 234:  /* *subsi_1 */
    case 233:  /* *subhi_1 */
    case 232:  /* *subqi_1 */
    case 231:  /* *subti3_doubleword */
    case 230:  /* *subdi3_doubleword */
    case 198:  /* *addqi_1 */
    case 197:  /* *addhi_1 */
    case 196:  /* *adddi_1 */
    case 195:  /* *addsi_1 */
    case 194:  /* *addti3_doubleword */
    case 193:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 191:  /* *floatunssixf2_i387_with_xmm */
    case 190:  /* *floatunssidf2_i387_with_xmm */
    case 189:  /* *floatunssisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 188:  /* floatdixf2_i387_with_xmm */
    case 187:  /* floatdidf2_i387_with_xmm */
    case 186:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 168:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 172:  /* fix_truncsi_i387_with_temp */
    case 171:  /* fix_trunchi_i387_with_temp */
    case 167:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 170:  /* fix_truncsi_i387 */
    case 169:  /* fix_trunchi_i387 */
    case 163:  /* fix_truncdi_i387_fisttp_with_temp */
    case 162:  /* fix_truncsi_i387_fisttp_with_temp */
    case 161:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 152:  /* *fixuns_truncdf_1 */
    case 151:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1097:  /* movdi_to_sse */
    case 608:  /* ffssi2_no_cmove */
    case 160:  /* fix_truncdi_i387_fisttp */
    case 159:  /* fix_truncsi_i387_fisttp */
    case 158:  /* fix_trunchi_i387_fisttp */
    case 146:  /* *truncxfdf2_mixed */
    case 145:  /* *truncxfsf2_mixed */
    case 143:  /* *truncdfsf_i387 */
    case 142:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 132:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 813:  /* *x86_movsicc_0_m1_neg */
    case 812:  /* *x86_movsicc_0_m1_se */
    case 811:  /* *x86_movsicc_0_m1 */
    case 650:  /* *popcountsi2 */
    case 649:  /* *popcounthi2 */
    case 647:  /* *popcountdi2_falsedep_1 */
    case 646:  /* *popcountsi2_falsedep_1 */
    case 620:  /* *clzsi2_lzcnt */
    case 619:  /* *clzhi2_lzcnt */
    case 617:  /* *clzdi2_lzcnt_falsedep_1 */
    case 616:  /* *clzsi2_lzcnt_falsedep_1 */
    case 615:  /* *ctzsi2 */
    case 614:  /* *ctzhi2 */
    case 612:  /* *ctzdi2_falsedep_1 */
    case 611:  /* *ctzsi2_falsedep_1 */
    case 400:  /* *negdi2_1 */
    case 399:  /* *negsi2_1 */
    case 398:  /* *neghi2_1 */
    case 397:  /* *negqi2_1 */
    case 396:  /* *negti2_doubleword */
    case 395:  /* *negdi2_doubleword */
    case 166:  /* *fix_truncdi_i387_1 */
    case 165:  /* *fix_truncsi_i387_1 */
    case 164:  /* *fix_trunchi_i387_1 */
    case 125:  /* zero_extendqihi2_and */
    case 122:  /* zero_extendhisi2_and */
    case 121:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 108:  /* *insvqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4090:  /* avx512cd_maskw_vec_dupv4si */
    case 4089:  /* avx512cd_maskw_vec_dupv8si */
    case 4088:  /* avx512cd_maskw_vec_dupv16si */
    case 4087:  /* avx512cd_maskb_vec_dupv2di */
    case 4086:  /* avx512cd_maskb_vec_dupv4di */
    case 4085:  /* avx512cd_maskb_vec_dupv8di */
    case 4067:  /* *avx512dq_broadcastv8sf */
    case 4065:  /* *avx512dq_broadcastv16sf */
    case 4063:  /* *avx512dq_broadcastv4si */
    case 4061:  /* *avx512dq_broadcastv8si */
    case 4059:  /* *avx512dq_broadcastv16si */
    case 3990:  /* avx512vl_vec_dupv8hi */
    case 3988:  /* avx512vl_vec_dupv16hi */
    case 3986:  /* avx512bw_vec_dupv32hi */
    case 3984:  /* avx512vl_vec_dupv32qi */
    case 3982:  /* avx512vl_vec_dupv16qi */
    case 3980:  /* avx512bw_vec_dupv64qi */
    case 3978:  /* avx512vl_vec_dupv2df */
    case 3976:  /* avx512vl_vec_dupv4df */
    case 3974:  /* avx512f_vec_dupv8df */
    case 3972:  /* avx512vl_vec_dupv4sf */
    case 3970:  /* avx512vl_vec_dupv8sf */
    case 3968:  /* avx512f_vec_dupv16sf */
    case 3966:  /* avx512vl_vec_dupv2di */
    case 3964:  /* avx512vl_vec_dupv4di */
    case 3962:  /* avx512f_vec_dupv8di */
    case 3960:  /* avx512vl_vec_dupv4si */
    case 3958:  /* avx512vl_vec_dupv8si */
    case 3956:  /* avx512f_vec_dupv16si */
    case 3955:  /* avx512bw_vec_dupv64qi_1 */
    case 3954:  /* avx512bw_vec_dupv32hi_1 */
    case 3953:  /* avx512f_vec_dupv8di_1 */
    case 3952:  /* avx512f_vec_dupv16si_1 */
    case 3951:  /* avx2_vec_dupv4df */
    case 3913:  /* avx2_pbroadcastv4di_1 */
    case 3912:  /* avx2_pbroadcastv8si_1 */
    case 3911:  /* avx2_pbroadcastv16hi_1 */
    case 3910:  /* avx2_pbroadcastv32qi_1 */
    case 3909:  /* avx2_pbroadcastv2di */
    case 3908:  /* avx2_pbroadcastv4di */
    case 3907:  /* avx2_pbroadcastv4si */
    case 3906:  /* avx2_pbroadcastv8si */
    case 3905:  /* avx2_pbroadcastv8hi */
    case 3904:  /* avx2_pbroadcastv16hi */
    case 3903:  /* avx2_pbroadcastv32hi */
    case 3902:  /* avx2_pbroadcastv16qi */
    case 3901:  /* avx2_pbroadcastv32qi */
    case 3900:  /* avx2_pbroadcastv64qi */
    case 3899:  /* avx2_pbroadcastv8di */
    case 3898:  /* avx2_pbroadcastv16si */
    case 3712:  /* sse4_1_zero_extendv2siv2di2 */
    case 3710:  /* sse4_1_sign_extendv2siv2di2 */
    case 3700:  /* sse4_1_zero_extendv2hiv2di2 */
    case 3698:  /* sse4_1_sign_extendv2hiv2di2 */
    case 3696:  /* avx2_zero_extendv4hiv4di2 */
    case 3694:  /* avx2_sign_extendv4hiv4di2 */
    case 3688:  /* sse4_1_zero_extendv2qiv2di2 */
    case 3686:  /* sse4_1_sign_extendv2qiv2di2 */
    case 3684:  /* avx2_zero_extendv4qiv4di2 */
    case 3682:  /* avx2_sign_extendv4qiv4di2 */
    case 3680:  /* avx512f_zero_extendv8qiv8di2 */
    case 3678:  /* avx512f_sign_extendv8qiv8di2 */
    case 3676:  /* sse4_1_zero_extendv4hiv4si2 */
    case 3674:  /* sse4_1_sign_extendv4hiv4si2 */
    case 3664:  /* sse4_1_zero_extendv4qiv4si2 */
    case 3662:  /* sse4_1_sign_extendv4qiv4si2 */
    case 3660:  /* avx2_zero_extendv8qiv8si2 */
    case 3658:  /* avx2_sign_extendv8qiv8si2 */
    case 3652:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 3650:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 2732:  /* *avx512f_us_truncatev8div16qi2 */
    case 2731:  /* *avx512f_truncatev8div16qi2 */
    case 2730:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2269:  /* avx512f_vec_dupv8df_1 */
    case 2268:  /* avx512f_vec_dupv16sf_1 */
    case 2267:  /* avx2_vec_dupv8sf_1 */
    case 2266:  /* avx2_vec_dupv4sf */
    case 2265:  /* avx2_vec_dupv8sf */
    case 2227:  /* sse2_cvtps2pd */
    case 2202:  /* vec_unpacks_lo_v16sf */
    case 2201:  /* *avx_cvtps2pd256_2 */
    case 2181:  /* sse2_cvttpd2dq */
    case 2175:  /* ufix_truncv2sfv2di2 */
    case 2173:  /* fix_truncv2sfv2di2 */
    case 2123:  /* ufix_truncv2dfv2si2 */
    case 2094:  /* sse2_cvtdq2pd */
    case 2093:  /* avx_cvtdq2pd256_2 */
    case 2092:  /* avx512f_cvtdq2pd512_2 */
    case 2090:  /* ufloatv2siv2df2 */
    case 2081:  /* *ufloatv2div2sf2 */
    case 2080:  /* *floatv2div2sf2 */
    case 2038:  /* sse2_cvttsd2si */
    case 2033:  /* avx512f_vcvttsd2usi */
    case 2029:  /* avx512f_vcvttss2usi */
    case 1950:  /* sse_cvttss2si */
    case 1944:  /* sse_cvttps2pi */
    case 1096:  /* sse2_movq128 */
    case 1008:  /* *vec_dupv4hi */
    case 708:  /* sqrt_extenddfxf2_i387 */
    case 707:  /* sqrt_extendsfxf2_i387 */
    case 426:  /* *negextenddfxf2 */
    case 425:  /* *absextenddfxf2 */
    case 424:  /* *negextendsfxf2 */
    case 423:  /* *absextendsfxf2 */
    case 422:  /* *negextendsfdf2 */
    case 421:  /* *absextendsfdf2 */
    case 105:  /* *extzvqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 577:  /* *sibcall_memory */
    case 576:  /* *sibcall_memory */
    case 99:  /* *movstricthi_xor */
    case 98:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 119:  /* *swapdf */
    case 118:  /* *swapsf */
    case 117:  /* swapxf */
    case 95:  /* *swaphi_2 */
    case 94:  /* *swapqi_2 */
    case 93:  /* *swaphi_1 */
    case 92:  /* *swapqi_1 */
    case 91:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 4690:  /* clzv2di2 */
    case 4688:  /* clzv4di2 */
    case 4686:  /* clzv8di2 */
    case 4684:  /* clzv4si2 */
    case 4682:  /* clzv8si2 */
    case 4680:  /* clzv16si2 */
    case 4083:  /* *avx512dq_broadcastv4df_1 */
    case 4081:  /* *avx512dq_broadcastv4di_1 */
    case 4079:  /* *avx512dq_broadcastv8df_1 */
    case 4077:  /* *avx512dq_broadcastv8di_1 */
    case 4075:  /* *avx512dq_broadcastv16si_1 */
    case 4073:  /* *avx512dq_broadcastv16sf_1 */
    case 4071:  /* *avx512vl_broadcastv8sf_1 */
    case 4069:  /* *avx512vl_broadcastv8si_1 */
    case 4052:  /* vec_dupv4df */
    case 4051:  /* vec_dupv4di */
    case 4050:  /* vec_dupv8sf */
    case 4049:  /* vec_dupv8si */
    case 4048:  /* *vec_dupv4si */
    case 4047:  /* *vec_dupv8si */
    case 4046:  /* *vec_dupv8hi */
    case 4045:  /* *vec_dupv16hi */
    case 4044:  /* *vec_dupv16qi */
    case 4043:  /* *vec_dupv32qi */
    case 4038:  /* *vec_dupv2di */
    case 4037:  /* *vec_dupv4si */
    case 4036:  /* vec_dupv4sf */
    case 4034:  /* *avx512vl_vec_dup_gprv2df */
    case 4032:  /* *avx512vl_vec_dup_gprv4df */
    case 4030:  /* *avx512f_vec_dup_gprv8df */
    case 4028:  /* *avx512vl_vec_dup_gprv4sf */
    case 4026:  /* *avx512vl_vec_dup_gprv8sf */
    case 4024:  /* *avx512f_vec_dup_gprv16sf */
    case 4022:  /* *avx512vl_vec_dup_gprv2di */
    case 4020:  /* *avx512vl_vec_dup_gprv4di */
    case 4018:  /* *avx512f_vec_dup_gprv8di */
    case 4016:  /* *avx512vl_vec_dup_gprv4si */
    case 4014:  /* *avx512vl_vec_dup_gprv8si */
    case 4012:  /* *avx512f_vec_dup_gprv16si */
    case 4010:  /* *avx512vl_vec_dup_gprv8hi */
    case 4008:  /* *avx512vl_vec_dup_gprv16hi */
    case 4006:  /* *avx512bw_vec_dup_gprv32hi */
    case 4004:  /* *avx512vl_vec_dup_gprv32qi */
    case 4002:  /* *avx512vl_vec_dup_gprv16qi */
    case 4000:  /* *avx512bw_vec_dup_gprv64qi */
    case 3998:  /* *avx512f_broadcastv8di */
    case 3996:  /* *avx512f_broadcastv8df */
    case 3994:  /* *avx512f_broadcastv16si */
    case 3992:  /* *avx512f_broadcastv16sf */
    case 3708:  /* avx2_zero_extendv4siv4di2 */
    case 3706:  /* avx2_sign_extendv4siv4di2 */
    case 3704:  /* avx512f_zero_extendv8siv8di2 */
    case 3702:  /* avx512f_sign_extendv8siv8di2 */
    case 3692:  /* avx512f_zero_extendv8hiv8di2 */
    case 3690:  /* avx512f_sign_extendv8hiv8di2 */
    case 3672:  /* avx2_zero_extendv8hiv8si2 */
    case 3670:  /* avx2_sign_extendv8hiv8si2 */
    case 3668:  /* avx512f_zero_extendv16hiv16si2 */
    case 3666:  /* avx512f_sign_extendv16hiv16si2 */
    case 3656:  /* *avx512f_zero_extendv16qiv16si2 */
    case 3654:  /* *avx512f_sign_extendv16qiv16si2 */
    case 3648:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 3646:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 3644:  /* avx2_zero_extendv16qiv16hi2 */
    case 3642:  /* avx2_sign_extendv16qiv16hi2 */
    case 3603:  /* absv2si2 */
    case 3602:  /* absv4hi2 */
    case 3601:  /* absv8qi2 */
    case 3588:  /* *absv2di2 */
    case 3587:  /* *absv4di2 */
    case 3586:  /* *absv8di2 */
    case 3585:  /* *absv4si2 */
    case 3584:  /* *absv8si2 */
    case 3583:  /* *absv16si2 */
    case 3582:  /* *absv8hi2 */
    case 3581:  /* *absv16hi2 */
    case 3580:  /* *absv32hi2 */
    case 3579:  /* *absv16qi2 */
    case 3578:  /* *absv32qi2 */
    case 3577:  /* *absv64qi2 */
    case 3484:  /* *vec_extractv2di_1 */
    case 3481:  /* *vec_extractv2di_0_sse */
    case 3480:  /* *vec_extractv4si_0 */
    case 2585:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2584:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2583:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2582:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2581:  /* *avx512vl_truncatev8siv8hi2 */
    case 2580:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2579:  /* *avx512vl_us_truncatev4div4si2 */
    case 2578:  /* *avx512vl_truncatev4div4si2 */
    case 2577:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2573:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2572:  /* avx512bw_truncatev32hiv32qi2 */
    case 2571:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2558:  /* *avx512f_us_truncatev8div8hi2 */
    case 2557:  /* *avx512f_truncatev8div8hi2 */
    case 2556:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2555:  /* *avx512f_us_truncatev8div8si2 */
    case 2554:  /* *avx512f_truncatev8div8si2 */
    case 2553:  /* *avx512f_ss_truncatev8div8si2 */
    case 2552:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2551:  /* *avx512f_truncatev16siv16hi2 */
    case 2550:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2549:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2548:  /* *avx512f_truncatev16siv16qi2 */
    case 2547:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2544:  /* vec_dupv2df */
    case 2540:  /* *vec_extractv2df_0_sse */
    case 2539:  /* sse2_storelpd */
    case 2538:  /* *vec_extractv2df_1_sse */
    case 2537:  /* sse2_storehpd */
    case 2341:  /* vec_extract_hi_v32qi */
    case 2340:  /* vec_extract_lo_v32qi */
    case 2339:  /* vec_extract_hi_v64qi */
    case 2338:  /* vec_extract_lo_v64qi */
    case 2337:  /* vec_extract_hi_v16hi */
    case 2336:  /* vec_extract_lo_v16hi */
    case 2335:  /* vec_extract_hi_v32hi */
    case 2334:  /* vec_extract_lo_v32hi */
    case 2333:  /* vec_extract_hi_v8sf */
    case 2332:  /* vec_extract_hi_v8si */
    case 2324:  /* vec_extract_lo_v8sf */
    case 2322:  /* vec_extract_lo_v8si */
    case 2320:  /* vec_extract_hi_v4df */
    case 2318:  /* vec_extract_hi_v4di */
    case 2316:  /* vec_extract_lo_v4df */
    case 2314:  /* vec_extract_lo_v4di */
    case 2312:  /* vec_extract_lo_v16si */
    case 2310:  /* vec_extract_lo_v16sf */
    case 2308:  /* vec_extract_hi_v16si */
    case 2306:  /* vec_extract_hi_v16sf */
    case 2302:  /* vec_extract_hi_v8di */
    case 2300:  /* vec_extract_hi_v8df */
    case 2296:  /* vec_extract_lo_v8di */
    case 2294:  /* vec_extract_lo_v8df */
    case 2277:  /* *vec_extractv4sf_0 */
    case 2262:  /* sse_storelps */
    case 2260:  /* sse_storehps */
    case 2199:  /* avx_cvtps2pd256 */
    case 2195:  /* avx512f_cvtps2pd512 */
    case 2191:  /* avx_cvtpd2ps256 */
    case 2187:  /* *avx512f_cvtpd2ps512 */
    case 2179:  /* ufix_truncv4sfv4si2 */
    case 2177:  /* ufix_truncv8sfv8si2 */
    case 2171:  /* ufix_truncv4sfv4di2 */
    case 2169:  /* fix_truncv4sfv4di2 */
    case 2165:  /* ufix_truncv8sfv8di2 */
    case 2161:  /* fix_truncv8sfv8di2 */
    case 2143:  /* ufix_truncv2dfv2di2 */
    case 2141:  /* fix_truncv2dfv2di2 */
    case 2139:  /* ufix_truncv4dfv4di2 */
    case 2137:  /* fix_truncv4dfv4di2 */
    case 2133:  /* ufix_truncv8dfv8di2 */
    case 2129:  /* fix_truncv8dfv8di2 */
    case 2127:  /* ufix_truncv4dfv4si2 */
    case 2125:  /* fix_truncv4dfv4si2 */
    case 2119:  /* ufix_truncv8dfv8si2 */
    case 2115:  /* fix_truncv8dfv8si2 */
    case 2088:  /* ufloatv4siv4df2 */
    case 2086:  /* ufloatv8siv8df2 */
    case 2078:  /* ufloatv4div4sf2 */
    case 2076:  /* floatv4div4sf2 */
    case 2072:  /* ufloatv8div8sf2 */
    case 2068:  /* floatv8div8sf2 */
    case 2064:  /* ufloatv2div2df2 */
    case 2060:  /* floatv2div2df2 */
    case 2056:  /* ufloatv4div4df2 */
    case 2052:  /* floatv4div4df2 */
    case 2048:  /* ufloatv8div8df2 */
    case 2044:  /* floatv8div8df2 */
    case 2042:  /* floatv4siv4df2 */
    case 2040:  /* floatv8siv8df2 */
    case 2025:  /* sse2_cvttpd2pi */
    case 2023:  /* sse2_cvtpi2pd */
    case 2021:  /* fix_truncv4sfv4si2 */
    case 2019:  /* fix_truncv8sfv8si2 */
    case 2015:  /* ufix_truncv16sfv16si2 */
    case 2011:  /* fix_truncv16sfv16si2 */
    case 1971:  /* ufloatv4siv4sf2 */
    case 1967:  /* ufloatv8siv8sf2 */
    case 1963:  /* ufloatv16siv16sf2 */
    case 1961:  /* floatv4siv4sf2 */
    case 1959:  /* floatv8siv8sf2 */
    case 1955:  /* floatv16siv16sf2 */
    case 1323:  /* sse2_sqrtv2df2 */
    case 1321:  /* avx_sqrtv4df2 */
    case 1317:  /* avx512f_sqrtv8df2 */
    case 1315:  /* sse_sqrtv4sf2 */
    case 1313:  /* avx_sqrtv8sf2 */
    case 1309:  /* avx512f_sqrtv16sf2 */
    case 1012:  /* *vec_extractv2si_1 */
    case 1011:  /* *vec_extractv2si_0 */
    case 1009:  /* *vec_dupv2si */
    case 1007:  /* mmx_pswapdv2si2 */
    case 942:  /* *vec_extractv2sf_1 */
    case 941:  /* *vec_extractv2sf_0 */
    case 939:  /* *vec_dupv2sf */
    case 938:  /* mmx_pswapdv2sf2 */
    case 937:  /* mmx_floatv2si2 */
    case 934:  /* mmx_pf2id */
    case 711:  /* *sqrtdf2_sse */
    case 710:  /* *sqrtsf2_sse */
    case 706:  /* sqrtxf2 */
    case 652:  /* *bswapsi2 */
    case 651:  /* *bswapsi2_movbe */
    case 436:  /* *one_cmplqi2_1 */
    case 435:  /* *one_cmplhi2_1 */
    case 434:  /* *one_cmpldi2_1 */
    case 433:  /* *one_cmplsi2_1 */
    case 420:  /* *negxf2_1 */
    case 419:  /* *absxf2_1 */
    case 418:  /* *negdf2_1 */
    case 417:  /* *absdf2_1 */
    case 416:  /* *negsf2_1 */
    case 415:  /* *abssf2_1 */
    case 185:  /* *floatdidf2_i387 */
    case 184:  /* *floatdisf2_i387 */
    case 183:  /* *floatsidf2_i387 */
    case 182:  /* *floatsisf2_i387 */
    case 181:  /* *floatsidf2_mixed */
    case 180:  /* *floatsisf2_mixed */
    case 179:  /* floatdixf2 */
    case 178:  /* floatsixf2 */
    case 177:  /* floathixf2 */
    case 176:  /* floathidf2 */
    case 175:  /* floathisf2 */
    case 157:  /* fix_truncdi_fisttp_i387_1 */
    case 156:  /* fix_truncsi_fisttp_i387_1 */
    case 155:  /* fix_trunchi_fisttp_i387_1 */
    case 154:  /* fix_truncdfsi_sse */
    case 153:  /* fix_truncsfsi_sse */
    case 150:  /* *truncxfdf2_i387 */
    case 149:  /* *truncxfsf2_i387 */
    case 148:  /* truncxfdf2_i387_noop */
    case 147:  /* truncxfsf2_i387_noop */
    case 144:  /* *truncdfsf2_i387_1 */
    case 141:  /* *truncdfsf_fast_i387 */
    case 140:  /* *truncdfsf_fast_mixed */
    case 139:  /* *extenddfxf2_i387 */
    case 138:  /* *extendsfxf2_i387 */
    case 137:  /* *extendsfdf2_i387 */
    case 136:  /* *extendsfdf2_mixed */
    case 135:  /* extendqihi2 */
    case 134:  /* extendqisi2 */
    case 133:  /* extendhisi2 */
    case 131:  /* *zextsi_doubleword */
    case 130:  /* *zexthi_doubleword */
    case 129:  /* *zextqi_doubleword */
    case 128:  /* *zexthi_doubleword_and */
    case 127:  /* *zextqi_doubleword_and */
    case 126:  /* *zero_extendqihi2 */
    case 124:  /* *zero_extendhisi2 */
    case 123:  /* *zero_extendqisi2 */
    case 120:  /* *zero_extendsidi2 */
    case 104:  /* *extzvsi */
    case 103:  /* *extzvhi */
    case 102:  /* *extvqi */
    case 101:  /* *extvsi */
    case 100:  /* *extvhi */
    case 90:  /* *movabsdi_2 */
    case 89:  /* *movabssi_2 */
    case 88:  /* *movabshi_2 */
    case 87:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 575:  /* *sibcall */
    case 574:  /* *sibcall */
    case 571:  /* *call */
    case 570:  /* *call */
    case 530:  /* *setcc_qi_slp */
    case 107:  /* insvsi_1 */
    case 106:  /* insvhi_1 */
    case 97:  /* *movstricthi_1 */
    case 96:  /* *movstrictqi_1 */
    case 86:  /* *movabsdi_1 */
    case 85:  /* *movabssi_1 */
    case 84:  /* *movabshi_1 */
    case 83:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 4751:  /* storedi_via_fpu */
    case 4750:  /* loaddi_via_fpu */
    case 4716:  /* avx512f_pd512_256pd */
    case 4715:  /* avx512f_ps512_256ps */
    case 4714:  /* avx512f_si512_256si */
    case 4713:  /* avx512f_pd512_pd */
    case 4712:  /* avx512f_ps512_ps */
    case 4711:  /* avx512f_si512_si */
    case 4702:  /* *conflictv2di */
    case 4700:  /* *conflictv4di */
    case 4698:  /* *conflictv8di */
    case 4696:  /* *conflictv4si */
    case 4694:  /* *conflictv8si */
    case 4692:  /* *conflictv16si */
    case 4349:  /* *avx512f_vcvtph2ps512 */
    case 4347:  /* vcvtph2ps256 */
    case 4345:  /* *vcvtph2ps_load */
    case 4276:  /* avx_pd256_pd */
    case 4275:  /* avx_ps256_ps */
    case 4274:  /* avx_si256_si */
    case 3893:  /* aesimc */
    case 3866:  /* xop_frczv4df2 */
    case 3865:  /* xop_frczv8sf2 */
    case 3864:  /* xop_frczv2df2 */
    case 3863:  /* xop_frczv4sf2 */
    case 3862:  /* xop_frczdf2 */
    case 3861:  /* xop_frczsf2 */
    case 3786:  /* *avx512er_rsqrt28v8df */
    case 3782:  /* *avx512er_rsqrt28v16sf */
    case 3774:  /* *avx512er_rcp28v8df */
    case 3770:  /* *avx512er_rcp28v16sf */
    case 3766:  /* avx512er_exp2v8df */
    case 3762:  /* avx512er_exp2v16sf */
    case 3641:  /* sse4_1_phminposuw */
    case 3626:  /* sse4_1_movntdqa */
    case 3625:  /* avx2_movntdqa */
    case 3624:  /* avx512f_movntdqa */
    case 3605:  /* sse4a_movntdf */
    case 3604:  /* sse4a_movntsf */
    case 3509:  /* sse2_pmovmskb */
    case 3508:  /* avx2_pmovmskb */
    case 3507:  /* sse2_movmskpd */
    case 3506:  /* avx_movmskpd256 */
    case 3505:  /* sse_movmskps */
    case 3504:  /* avx_movmskps256 */
    case 2420:  /* avx512vl_getexpv2df */
    case 2416:  /* avx512vl_getexpv4df */
    case 2412:  /* avx512f_getexpv8df */
    case 2408:  /* avx512vl_getexpv4sf */
    case 2404:  /* avx512vl_getexpv8sf */
    case 2400:  /* avx512f_getexpv16sf */
    case 2214:  /* avx512vl_cvtq2maskv2di */
    case 2213:  /* avx512vl_cvtq2maskv4di */
    case 2212:  /* avx512f_cvtq2maskv8di */
    case 2211:  /* avx512vl_cvtd2maskv4si */
    case 2210:  /* avx512vl_cvtd2maskv8si */
    case 2209:  /* avx512f_cvtd2maskv16si */
    case 2208:  /* avx512vl_cvtw2maskv8hi */
    case 2207:  /* avx512vl_cvtw2maskv16hi */
    case 2206:  /* avx512bw_cvtw2maskv32hi */
    case 2205:  /* avx512vl_cvtb2maskv32qi */
    case 2204:  /* avx512vl_cvtb2maskv16qi */
    case 2203:  /* avx512bw_cvtb2maskv64qi */
    case 2159:  /* ufix_notruncv2dfv2di2 */
    case 2157:  /* ufix_notruncv4dfv4di2 */
    case 2153:  /* ufix_notruncv8dfv8di2 */
    case 2151:  /* fix_notruncv2dfv2di2 */
    case 2149:  /* fix_notruncv4dfv4di2 */
    case 2145:  /* fix_notruncv8dfv8di2 */
    case 2109:  /* ufix_notruncv4dfv4si2 */
    case 2105:  /* ufix_notruncv8dfv8si2 */
    case 2100:  /* avx_cvtpd2dq256 */
    case 2096:  /* avx512f_cvtpd2dq512 */
    case 2037:  /* sse2_cvtsd2si_2 */
    case 2024:  /* sse2_cvtpd2pi */
    case 2007:  /* *avx512dq_cvtps2uqqv4di */
    case 2003:  /* *avx512dq_cvtps2uqqv8di */
    case 1999:  /* *avx512dq_cvtps2qqv4di */
    case 1995:  /* *avx512dq_cvtps2qqv8di */
    case 1991:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 1987:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 1983:  /* *avx512f_ufix_notruncv16sfv16si */
    case 1979:  /* avx512f_fix_notruncv16sfv16si */
    case 1977:  /* sse2_fix_notruncv4sfv4si */
    case 1975:  /* avx_fix_notruncv8sfv8si */
    case 1949:  /* sse_cvtss2si_2 */
    case 1341:  /* *rsqrt14v2df */
    case 1339:  /* *rsqrt14v4df */
    case 1337:  /* *rsqrt14v8df */
    case 1335:  /* *rsqrt14v4sf */
    case 1333:  /* *rsqrt14v8sf */
    case 1331:  /* *rsqrt14v16sf */
    case 1330:  /* sse_rsqrtv4sf2 */
    case 1329:  /* avx_rsqrtv8sf2 */
    case 1305:  /* *rcp14v2df */
    case 1303:  /* *rcp14v4df */
    case 1301:  /* *rcp14v8df */
    case 1299:  /* *rcp14v4sf */
    case 1297:  /* *rcp14v8sf */
    case 1295:  /* *rcp14v16sf */
    case 1293:  /* sse_rcpv4sf2 */
    case 1292:  /* avx_rcpv8sf2 */
    case 1181:  /* sse2_movntv2di */
    case 1180:  /* avx_movntv4di */
    case 1179:  /* avx512f_movntv8di */
    case 1178:  /* sse2_movntv2df */
    case 1177:  /* avx_movntv4df */
    case 1176:  /* avx512f_movntv8df */
    case 1175:  /* sse_movntv4sf */
    case 1174:  /* avx_movntv8sf */
    case 1173:  /* avx512f_movntv16sf */
    case 1172:  /* sse2_movntisi */
    case 1171:  /* sse3_lddqu */
    case 1170:  /* avx_lddqu256 */
    case 1157:  /* avx512vl_storedquv2di */
    case 1156:  /* avx512vl_storedquv4di */
    case 1155:  /* avx512f_storedquv8di */
    case 1154:  /* sse2_storedquv4si */
    case 1153:  /* avx_storedquv8si */
    case 1152:  /* avx512f_storedquv16si */
    case 1151:  /* avx512vl_storedquv16hi */
    case 1150:  /* avx512vl_storedquv8hi */
    case 1149:  /* avx512bw_storedquv32hi */
    case 1148:  /* avx512f_storedquv64qi */
    case 1147:  /* sse2_storedquv16qi */
    case 1146:  /* avx_storedquv32qi */
    case 1144:  /* *avx512vl_loaddquv2di */
    case 1142:  /* *avx512vl_loaddquv4di */
    case 1140:  /* *avx512f_loaddquv8di */
    case 1138:  /* *sse2_loaddquv4si */
    case 1136:  /* *avx_loaddquv8si */
    case 1134:  /* *avx512f_loaddquv16si */
    case 1132:  /* *avx512vl_loaddquv16hi */
    case 1130:  /* *avx512vl_loaddquv8hi */
    case 1128:  /* *avx512bw_loaddquv32hi */
    case 1126:  /* *avx512f_loaddquv64qi */
    case 1124:  /* *sse2_loaddquv16qi */
    case 1122:  /* *avx_loaddquv32qi */
    case 1115:  /* sse2_storeupd */
    case 1114:  /* avx_storeupd256 */
    case 1113:  /* avx512f_storeupd512 */
    case 1112:  /* sse_storeups */
    case 1111:  /* avx_storeups256 */
    case 1110:  /* avx512f_storeups512 */
    case 1108:  /* *sse2_loadupd */
    case 1106:  /* *avx_loadupd256 */
    case 1104:  /* *avx512f_loadupd512 */
    case 1102:  /* *sse_loadups */
    case 1100:  /* *avx_loadups256 */
    case 1098:  /* *avx512f_loadups512 */
    case 1016:  /* mmx_pmovmskb */
    case 926:  /* mmx_rsqrtv2sf2 */
    case 923:  /* mmx_rcpv2sf2 */
    case 915:  /* sse_movntq */
    case 907:  /* move_size_reloc_si */
    case 863:  /* xsaves */
    case 862:  /* xsavec */
    case 861:  /* xsaveopt */
    case 860:  /* xsave */
    case 855:  /* rdpmc */
    case 783:  /* movmsk_df */
    case 782:  /* fxamdf2_i387_with_temp */
    case 781:  /* fxamsf2_i387_with_temp */
    case 780:  /* fxamxf2_i387 */
    case 779:  /* fxamdf2_i387 */
    case 778:  /* fxamsf2_i387 */
    case 749:  /* fistsi2 */
    case 748:  /* fisthi2 */
    case 747:  /* *fistsi2_1 */
    case 746:  /* *fisthi2_1 */
    case 743:  /* *fistdi2_1 */
    case 742:  /* rintxf2 */
    case 738:  /* *f2xm1xf2_i387 */
    case 715:  /* *cosxf2_i387 */
    case 714:  /* *sinxf2_i387 */
    case 709:  /* *rsqrtsf2_sse */
    case 705:  /* truncxfdf2_i387_noop_unspec */
    case 704:  /* truncxfsf2_i387_noop_unspec */
    case 676:  /* *rcpsf2_sse */
    case 80:  /* kmovw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 527:  /* *setcc_si_1_and */
    case 74:  /* *movsi_or */
    case 73:  /* *movsi_xor */
    case 68:  /* *popdi1_epilogue */
    case 67:  /* *popsi1_epilogue */
    case 64:  /* *pushdi2_prologue */
    case 63:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1041:  /* *movv2df_internal */
    case 1040:  /* *movv4df_internal */
    case 1039:  /* *movv8df_internal */
    case 1038:  /* *movv4sf_internal */
    case 1037:  /* *movv8sf_internal */
    case 1036:  /* *movv16sf_internal */
    case 1035:  /* *movv1ti_internal */
    case 1034:  /* *movv2ti_internal */
    case 1033:  /* *movv4ti_internal */
    case 1032:  /* *movv2di_internal */
    case 1031:  /* *movv4di_internal */
    case 1030:  /* *movv8di_internal */
    case 1029:  /* *movv4si_internal */
    case 1028:  /* *movv8si_internal */
    case 1027:  /* *movv16si_internal */
    case 1026:  /* *movv8hi_internal */
    case 1025:  /* *movv16hi_internal */
    case 1024:  /* *movv32hi_internal */
    case 1023:  /* *movv16qi_internal */
    case 1022:  /* *movv32qi_internal */
    case 1021:  /* *movv64qi_internal */
    case 914:  /* *movv2sf_internal */
    case 913:  /* *movv1di_internal */
    case 912:  /* *movv2si_internal */
    case 911:  /* *movv4hi_internal */
    case 910:  /* *movv8qi_internal */
    case 896:  /* *movbnd64_internal_mpx */
    case 895:  /* *movbnd32_internal_mpx */
    case 842:  /* *prefetch_3dnow */
    case 529:  /* *setcc_qi */
    case 528:  /* *setcc_si_1_movzbl */
    case 192:  /* *leasi */
    case 116:  /* *movsf_internal */
    case 115:  /* *movdf_internal */
    case 114:  /* *movxf_internal */
    case 113:  /* *movtf_internal */
    case 112:  /* *pushsf */
    case 111:  /* *pushdf */
    case 110:  /* *pushxf */
    case 109:  /* *pushtf */
    case 82:  /* *movqi_internal */
    case 81:  /* *movhi_internal */
    case 79:  /* *movsi_internal */
    case 78:  /* *movdi_internal */
    case 77:  /* *movti_internal */
    case 76:  /* *movoi_internal_avx */
    case 75:  /* *movxi_internal_avx512f */
    case 72:  /* *popfldi1 */
    case 71:  /* *popflsi1 */
    case 70:  /* *pushfldi2 */
    case 69:  /* *pushflsi2 */
    case 66:  /* *popdi1 */
    case 65:  /* *popsi1 */
    case 62:  /* *pushhi2 */
    case 61:  /* *pushqi2 */
    case 60:  /* *pushsi2 */
    case 59:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 174:  /* x86_fldcw_1 */
    case 48:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 3513:  /* sse_stmxcsr */
    case 873:  /* lwp_slwpcbdi */
    case 872:  /* lwp_slwpcbsi */
    case 868:  /* fnstsw */
    case 858:  /* fxsave */
    case 856:  /* rdtsc */
    case 843:  /* *prefetch_prefetchwt1 */
    case 664:  /* *load_tp_di */
    case 663:  /* *load_tp_si */
    case 662:  /* *load_tp_x32_zext */
    case 661:  /* *load_tp_x32 */
    case 173:  /* x86_fnstcw_1 */
    case 47:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 46:  /* *cmpxf_si_cc_i387 */
    case 45:  /* *cmpdf_si_cc_i387 */
    case 44:  /* *cmpsf_si_cc_i387 */
    case 43:  /* *cmpxf_hi_cc_i387 */
    case 42:  /* *cmpdf_hi_cc_i387 */
    case 41:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 40:  /* *cmpxf_si_i387 */
    case 39:  /* *cmpdf_si_i387 */
    case 38:  /* *cmpsf_si_i387 */
    case 37:  /* *cmpxf_hi_i387 */
    case 36:  /* *cmpdf_hi_i387 */
    case 35:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 210:  /* *addsi_4 */
    case 209:  /* *addhi_4 */
    case 208:  /* *addqi_4 */
    case 34:  /* *cmpuxf_cc_i387 */
    case 33:  /* *cmpudf_cc_i387 */
    case 32:  /* *cmpusf_cc_i387 */
    case 28:  /* *cmpdf_cc_i387 */
    case 27:  /* *cmpsf_cc_i387 */
    case 24:  /* *cmpxf_cc_i387 */
    case 22:  /* *cmpxf_0_cc_i387 */
    case 21:  /* *cmpdf_0_cc_i387 */
    case 20:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 31:  /* *cmpuxf_i387 */
    case 30:  /* *cmpudf_i387 */
    case 29:  /* *cmpusf_i387 */
    case 26:  /* *cmpdf_i387 */
    case 25:  /* *cmpsf_i387 */
    case 23:  /* *cmpxf_i387 */
    case 19:  /* *cmpxf_0_i387 */
    case 18:  /* *cmpdf_0_i387 */
    case 17:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 16:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 15:  /* *cmpqi_ext_3 */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 374:  /* kortestchi */
    case 373:  /* kortestzhi */
    case 313:  /* *testsi_1 */
    case 312:  /* *testhi_1 */
    case 311:  /* *testqi_1 */
    case 310:  /* *testqi_1_maybe_si */
    case 12:  /* *cmpdi_minus_1 */
    case 11:  /* *cmpsi_minus_1 */
    case 10:  /* *cmphi_minus_1 */
    case 9:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 58:  /* *cmpiuxf_i387 */
    case 57:  /* *cmpiudf_i387 */
    case 56:  /* *cmpiusf_i387 */
    case 55:  /* *cmpixf_i387 */
    case 54:  /* *cmpidf_i387 */
    case 53:  /* *cmpisf_i387 */
    case 52:  /* *cmpiudf_mixed */
    case 51:  /* *cmpiusf_mixed */
    case 50:  /* *cmpidf_mixed */
    case 49:  /* *cmpisf_mixed */
    case 8:  /* *cmpdi_1 */
    case 7:  /* *cmpsi_1 */
    case 6:  /* *cmphi_1 */
    case 5:  /* *cmpqi_1 */
    case 4:  /* *cmpdi_ccno_1 */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* *cmphi_ccno_1 */
    case 1:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
