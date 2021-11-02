
#include <vector>
#include "utility/utility.h"
#include "utility/var.h"
#include <tcl.h>

namespace ece {

  int DataVar::current_used_memory_ = 0;
  int DataVar::cmd_peak_used_memory_ = 0;
  int DataVar::ece_peak_used_memory_ = 0;

  bool DataVar::cmd_started_ = 0;
  Time DataVar::time_;
  DataVar::FlowStage DataVar::stage_ = DataVar::kStageUndef;


  void DataVar::setStage(DataVar::FlowStage stage) {
    stage_ = stage;

  }
}