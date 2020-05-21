//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray *_resultChangedNotifications;
    BOOL _wantsChanges;
    BOOL _moreComing;
    unsigned long long _resultsLimit;
    NSData *_resultServerChangeTokenData;
    NSData *_serverChangeTokenData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSData *resultServerChangeTokenData; // @synthesize resultServerChangeTokenData=_resultServerChangeTokenData;
@property(nonatomic) BOOL wantsChanges; // @synthesize wantsChanges=_wantsChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *resultChangedNotifications; // @synthesize resultChangedNotifications=_resultChangedNotifications;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithServerChangeTokenData:(id)arg1;

@end

