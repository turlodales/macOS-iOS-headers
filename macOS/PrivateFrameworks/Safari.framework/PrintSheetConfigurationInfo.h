//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface PrintSheetConfigurationInfo : NSObject
{
    BOOL _waitUntilDone;
    _WKFrameHandle *_frameHandle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
@property(readonly, nonatomic, getter=shouldWaitUntilDone) BOOL waitUntilDone; // @synthesize waitUntilDone=_waitUntilDone;
- (id)init;
- (id)initWithFrameHandle:(id)arg1 shouldWaitUntilDone:(BOOL)arg2;

@end

