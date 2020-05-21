//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class PHImageDisplaySpec, PHVideoRequestBehaviorSpec, PHVideoResult;

@interface PHVideoRequest : PHMediaRequest
{
    PHVideoResult *_videoResult;
    id <PHVideoRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHVideoRequestBehaviorSpec *_behaviorSpec;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(readonly, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property(readonly, nonatomic) __weak id <PHVideoRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoURLBecameAvailable:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)startRequest;
- (BOOL)isSynchronous;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)_finish;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSepc:(id)arg7 delegate:(id)arg8;

@end

