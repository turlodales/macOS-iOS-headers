//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, ILMediaObject, NSMutableArray;

@interface ILMediaBrowserAudioPlayer : NSObject
{
    NSMutableArray *fileList;
    AVPlayer *avPlayer;
    AVPlayerItem *mCurrentAudioPlayerItem;
    ILMediaObject *mCurrentAudioMediaObject;
    BOOL _isPlaying;
}

+ (id)_notificationsToObserve;
+ (id)sharedAudioPlayer;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (id)audioOutputDeviceUniqueID;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void)stop:(id)arg1;
- (void)play:(id)arg1;
- (BOOL)_isItemAuthorized:(id)arg1;
- (id)currentAudioFile;
- (void)removeAllFiles;
- (void)removeAudioFileAtIndex:(long long)arg1;
- (void)addAudioFiles:(id)arg1;
- (void)addAudioFile:(id)arg1;
- (void)setCurrentMediaObject:(id)arg1;
- (void)_observeAtEndNotifications:(id)arg1 add:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

