//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASDDSPGraphUtilities : NSObject
{
}

+ (BOOL)stopInjectingBoxesInGraph:(id)arg1;
+ (BOOL)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id *)arg3;
+ (BOOL)stopRecordingBoxesInGraph:(id)arg1;
+ (BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 fromStream:(id)arg3 toDirectory:(id)arg4 withType:(long long)arg5 error:(id *)arg6;
+ (BOOL)startRecordingAllBoxesInGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(long long)arg4 error:(id *)arg5;
+ (BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;

@end

