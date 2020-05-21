//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AEInvalidationRouter : NSObject
{
    BOOL _processedInvalidation;
    BOOL _forwardError;
    NSObject<OS_dispatch_queue> *_queue;
    id <AEInvalidationRouterDelegate> _delegate;
    long long _mode;
    NSError *_storedError;
}

- (void).cxx_destruct;
@property(nonatomic, getter=didForwardError) BOOL forwardError; // @synthesize forwardError=_forwardError;
@property(nonatomic, getter=hasProcessedInvalidation) BOOL processedInvalidation; // @synthesize processedInvalidation=_processedInvalidation;
@property(retain, nonatomic) NSError *storedError; // @synthesize storedError=_storedError;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <AEInvalidationRouterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)forwardError;
@property(readonly, nonatomic) CDUnknownBlockType invalidationHandler;
- (void)fetchCapturedErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)setRouterDelegate:(id)arg1;
- (void)setRouterMode:(long long)arg1;
- (id)init;

@end

