//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDDatabaseOperation : CKDOperation
{
    long long _databaseScope;
}

@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)analyticsPayload;
- (id)CKStatusReportProperties;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (id)flowControlKey;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;

@end

