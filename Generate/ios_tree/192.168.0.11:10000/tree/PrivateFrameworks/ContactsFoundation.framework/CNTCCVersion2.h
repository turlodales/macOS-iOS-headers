/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {
    NSNumber * _isUnitTestingOnSimulatorCachedValue;
    NSObject<OS_tcc_server> * _server;
    NSObject<OS_tcc_service> * _service;
    NSNumber * _simulateStatus;
    NSObject<OS_tcc_message_options> * _syncOptions;
}

@property (nonatomic, retain) NSNumber *isUnitTestingOnSimulatorCachedValue;
@property (nonatomic, readonly) NSObject<OS_tcc_server> *server;
@property (nonatomic, readonly) NSObject<OS_tcc_service> *service;
@property (nonatomic, retain) NSNumber *simulateStatus;
@property (nonatomic, readonly) NSObject<OS_tcc_message_options> *syncOptions;

- (void).cxx_destruct;
- (id)authorizationRecordForBundleIdentifier:(id)arg1;
- (id)authorizationRecords;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x1[8]; })arg1;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (id)checkIfUnitTesting;
- (id)init;
- (bool)isAuthorizationRestricted;
- (bool)isUnitTesting;
- (id)isUnitTestingOnSimulatorCachedValue;
- (void)requestAuthorization:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)saveAuthorizationRecord:(id)arg1;
- (id)server;
- (id)service;
- (void)setIsUnitTestingOnSimulatorCachedValue:(id)arg1;
- (void)setSimulateStatus:(id)arg1;
- (id)simulateStatus;
- (void)simulateStatus:(long long)arg1;
- (void)stopSimulation;
- (id)syncOptions;

@end
