//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPDProtectedCloudStorageProxy.h"

@class NSString;

@interface CDPDProtectedCloudStorageProxyImpl : NSObject <CDPDProtectedCloudStorageProxy>
{
}

- (BOOL)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityiCDPDroppedWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateCloseDoorWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateRestoreHSMWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateDropStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;
- (BOOL)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

