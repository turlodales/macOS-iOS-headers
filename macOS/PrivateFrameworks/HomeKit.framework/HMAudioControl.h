//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"
#import "_HMAudioControlDelegate.h"

@class HMMediaSession, NSString, NSUUID, _HMAudioControl;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge>
{
    id <HMAudioControlDelegate> _delegate;
    HMMediaSession *_mediaSession;
    _HMAudioControl *_audioControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _HMAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property __weak HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property __weak id <HMAudioControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)audioControl:(id)arg1 didUpdateMuted:(BOOL)arg2;
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)updateMuted:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(getter=isMuted) BOOL muted;
@property float volume;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)__configureWithContext:(id)arg1;
- (id)initWithMediaSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

