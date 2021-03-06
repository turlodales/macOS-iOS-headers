//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioSession/AVAudioHardwareObject.h>

@class NSArray;

@interface AVAudioHardwareControl : AVAudioHardwareObject
{
}

@property(readonly, nonatomic) NSArray *valueKeys;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property(readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property(readonly, nonatomic) unsigned int scope;
@property(readonly, nonatomic) unsigned long long element;
- (unsigned long long)controlID;

@end

