/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicationOrder : HKMedicalRecord <HDCoding, HKConceptIndexable, NSCopying, NSSecureCoding> {
    NSArray * _dosages;
    HKMedicalDate * _earliestDosageDate;
    HKMedicalDate * _endedDate;
    HKConcept * _medication;
    NSArray * _medicationCodings;
    long long  _numberOfFills;
    NSString * _prescriber;
    HKConcept * _reason;
    NSArray * _reasonCodings;
    HKConcept * _reasonEnded;
    NSArray * _reasonEndedCodings;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKMedicalDate * _writtenDate;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *dosages;
@property (readonly, copy) HKMedicalDate *earliestDosageDate;
@property (readonly, copy) HKMedicalDate *endedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *medication;
@property (readonly, copy) NSArray *medicationCodings;
@property (readonly, copy) HKMedicationOrderType *medicationOrderType;
@property (readonly) long long numberOfFills;
@property (readonly, copy) NSString *prescriber;
@property (readonly, copy) HKConcept *reason;
@property (readonly, copy) NSArray *reasonCodings;
@property (readonly, copy) HKConcept *reasonEnded;
@property (readonly, copy) NSArray *reasonEndedCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKMedicalDate *writtenDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newMedicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22 config:(id /* block */)arg23;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 medicationCodings:(id)arg12 prescriber:(id)arg13 numberOfFills:(long long)arg14 dosages:(id)arg15 earliestDosageDate:(id)arg16 writtenDate:(id)arg17 endedDate:(id)arg18 statusCoding:(id)arg19 reasonCodings:(id)arg20 reasonEndedCodings:(id)arg21;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 medicationCodings:(id)arg13 prescriber:(id)arg14 numberOfFills:(long long)arg15 dosages:(id)arg16 earliestDosageDate:(id)arg17 writtenDate:(id)arg18 endedDate:(id)arg19 statusCoding:(id)arg20 reasonCodings:(id)arg21 reasonEndedCodings:(id)arg22;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setDosages:(id)arg1;
- (void)_setEarliestDosageDate:(id)arg1;
- (void)_setEndedDate:(id)arg1;
- (void)_setMedication:(id)arg1;
- (void)_setMedicationCodings:(id)arg1;
- (void)_setNumberOfFills:(long long)arg1;
- (void)_setPrescriber:(id)arg1;
- (void)_setReason:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonEnded:(id)arg1;
- (void)_setReasonEndedCodings:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setWrittenDate:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dosages;
- (id)earliestDosageDate;
- (void)encodeWithCoder:(id)arg1;
- (id)endedDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medication;
- (id)medicationCodings;
- (id)medicationCodingsCollection;
- (id)medicationOrderType;
- (long long)numberOfFills;
- (id)prescriber;
- (id)reason;
- (id)reasonCodings;
- (id)reasonCodingsCollection;
- (id)reasonEnded;
- (id)reasonEndedCodings;
- (id)reasonEndedCodingsCollection;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)writtenDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)codings;
- (long long)recordCategoryType;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
