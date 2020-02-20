# Piecewise Linear Branch Predictor
This implementation of Piecewise Linear Branch Predictor on Sniper Simulator is done as a part of the course CS5222: Advanced Computer Architecture.

The branch predictor showed prediction accuracies ranging from 88.6% to 96.12% for high MPKI SPEC2006 benchmarks. There are different tunable parameters of this predictor such as the hash values and the history length. The effect of these on the benchmarks has been shoed in the report.

An additional config file (or editing an existing one) is required to run the predictor.

    [perf_model/branch_predictor]
    type = piecewise_linear
    mispredict_penalty = 8 # Reflects just the front-end portion (approx) of the penalty for Interval



References:</br>
 [1] D. A. Jimenez, "Fast path-based Neural Branch Prediction", MICRO 2003.</br>
 [2] D. A. Jimenez and C. Lin, "Dynamic Branch Prediction with Perceptrons", HPCA 2001 </br>
 [3] D. A. Jimenez, "Piecewise Linear Branch Prediction", ISCA 2005.
