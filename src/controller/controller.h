#ifndef CALC_CONTROLLER_H
#define CALC_CONTROLLER_H

#include <exception>

#include "../model/model.h"

namespace s21 {
class Controller {
 private:
  std::string m_inputString;

 public:
  Controller(std::string const &str = "") : m_inputString(str) {}
  std::pair<std::string, double> calculations();
  std::vector<double> CrCalculations(double loanAmount, int term,
                                     double interestRate, bool paymentType);
  std::vector<double> DepCalculations(bool check, double deposit_term,
                                      double deposit_amount,
                                      double interest_rate, double tax_rate,
                                      double replenishments_month,
                                      double replenishments_sum,
                                      double partial_withdrawals_month,
                                      double partial_withdrawals_sum);
};

}  // namespace s21

#endif  // CALC_CONTROLLER_H
