# PART IV: Efficient Execution of ML Classifiers on IoT Devices

We will start this tutorial session by briefly introducing how Decision Trees (DT) and Random Forest (RF) classifiers can be used in an IoT setting to solve ranking, regression, and classification problems locally at the device level. Then we demonstrate how to efficiently port and execute DT and RF classifier models on MCU boards.

**Duration:** 30 mins in total with 10 minutes of slides presentation, 15 minutes of live demo, and 5 minutes for Q&A.

**Speakers:** [Bharath Sudharsan](https://bharathsudharsan.github.io/profile/) and ?.

**Take Home Information:** The audience can use the explained generic end-to-end method to quickly port (using sklearn-porter [1], m2cgen [2], or emlearn [3]) and execute various datasets trained ML algorithms like DTs, RFs, SVMs, LGBMClassifier, XGBClassifier, AdaGradClassifier, LogisticRegressionCV, etc. on any of the resource-constrained MCU-based devices of their choice/availability.

[1] D.  Morawiec,  “sklearn-porter:  Transpile  trained  scikit-learn  models.”2021. [Online]. Available: https://github.com/nok/sklearn-porter <br/>
[2] “m2cgen:  Code-generation  for  various  ml  models  into  native  code.”2021. [Online]. Available: https://pypi.org/project/m2cgen/ <br/>
[3] “emlearn:  Machine  learning  inference  engine  for  microcontrollersand  embedded  devices,”  GitHub,  2021.  [Online].  Available:  https://github.com/emlearn/ 