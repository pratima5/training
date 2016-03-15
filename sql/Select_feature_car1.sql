select carName as CAR_NAME,
hasABS + hasSpareTire + hasWarranty  AS NumberOfFeatures 
from car1.car ORDER BY NumberOfFeatures DESC;