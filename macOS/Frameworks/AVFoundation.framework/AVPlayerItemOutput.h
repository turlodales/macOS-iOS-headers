//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject
{
    AVPlayerItemOutputInternal *_outputInternal;
}

- (void)_setTimebase:(struct OpaqueCMTimebase *)arg1;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (void)_detachFromPlayerItem;
- (BOOL)_attachToPlayerItem:(id)arg1;
- (id)_weakReference;
@property(nonatomic) BOOL suppressesPlayerRendering;
- (CDStruct_1b6d18a9)itemTimeForCVTimeStamp:(CDStruct_e50ab651)arg1;
- (CDStruct_1b6d18a9)itemTimeForMachAbsoluteTime:(long long)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (CDStruct_1b6d18a9)_itemTimeForHostTimeAsCMTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (id)init;

@end

