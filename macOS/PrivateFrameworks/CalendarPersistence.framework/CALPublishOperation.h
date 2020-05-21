//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary;

@interface CALPublishOperation : NSObject
{
    long long _operationProgress;
    long long _operationTotal;
    NSMutableDictionary *_privateInfos;
    id <CALPublishOperationDelegate> _delegate;
    BOOL _useKerberos;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)abortOperation;
- (id)error;
- (void)setError:(id)arg1;
- (void)removeInfoForKey:(id)arg1;
- (id)infoForKey:(id)arg1;
- (void)setInfo:(id)arg1 forKey:(id)arg2;
- (BOOL)useKerberos;
- (void)setUseKerberos:(BOOL)arg1;
- (void)unpublishWithAutomatic:(BOOL)arg1;
- (void)publish:(id)arg1 automatic:(BOOL)arg2;
- (long long)operationTotal;
- (long long)operationProgress;
- (id)publisher;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)setEtag:(id)arg1;
- (void)setFirstPublish:(BOOL)arg1;
- (id)initWithPublisher:(id)arg1;

@end

