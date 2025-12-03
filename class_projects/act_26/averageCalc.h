
double getGeneralAverage(double q1, double q2, double q3, double mE, double fM) {
  double quizAverage, generalAverage;
  quizAverage = ((q1 + q2 + q3) / 3) * 0.30;
  generalAverage = (quizAverage + (mE * 0.30) + (fM * 0.40));
  return generalAverage;
}
