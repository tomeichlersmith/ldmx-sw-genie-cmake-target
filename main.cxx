#include "Framework/Conventions/Controls.h"
#include "Framework/Conventions/GBuild.h"
#include "Framework/Conventions/Units.h"
#include "Framework/Conventions/XmlParserStatus.h"
#include "Framework/EventGen/EventRecord.h"
#include "Framework/EventGen/GEVGDriver.h"
#include "Framework/EventGen/GFluxI.h"
#include "Framework/EventGen/GMCJDriver.h"
#include "Framework/EventGen/GMCJMonitor.h"
#include "Framework/EventGen/InteractionList.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Messenger/Messenger.h"
#include "Framework/Ntuple/NtpMCFormat.h"
#include "Framework/Ntuple/NtpWriter.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/Numerical/Spline.h"
#include "Framework/ParticleData/PDGCodes.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/Utils/AppInit.h"
#include "Framework/Utils/CmdLnArgParser.h"
#include "Framework/Utils/PrintUtils.h"
#include "Framework/Utils/RunOpt.h"
#include "Framework/Utils/StringUtils.h"
#include "Framework/Utils/SystemUtils.h"
#include "Framework/Utils/XSecSplineList.h"
#include "GENIE/Framework/Interaction/InitialState.h"
#include "GENIE/Framework/Utils/RunOpt.h"
#include "GENIE/Framework/EventGen/GEVGDriver.h"
#include "GENIE/Framework/EventGen/HepMC3Converter.h"
#include "HepMC3/GenEvent.h"

int main() {
  genie::GEVGDriver evg_driver_;
  genie::HepMC3Converter hep_mc3_converter_;
  genie::utils::app_init::MesgThresholds("dne");
  genie::RunOpt::Instance();
  genie::GHepRecord::SetPrintLevel(0);
  genie::utils::app_init::RandGen(0);
  return 0;
}
