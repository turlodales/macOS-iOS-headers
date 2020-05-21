//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTouchBarRecordingControlsControllingInternal.h"

@class AVTouchBarCaptureInputSourceItem, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVTouchBarRecordingControlsController : NSObject <AVTouchBarRecordingControlsControllingInternal>
{
    id <AVTouchBarRecordingControlsControlling> _externalTouchBarRecordingControlsController;
    struct {
        char _videoTouchBarInputSourceItems;
        char _selectedVideoTouchBarInputSourceItem;
        char _audioTouchBarInputSourceItems;
        char _selectedAudioTouchBarInputSourceItem;
        char _screenTouchBarInputSourceItems;
        char _selectedScreenTouchBarInputSourceItem;
        char _selectTouchBarInputSourceItem;
    } _externalControllerRespondsTo;
}

+ (id)keyPathsForValuesAffectingSelectedScreenTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScreenTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingScreenTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfScreenTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedAudioTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedAudioTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingAudioTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfAudioTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingSelectedVideoTouchBarInputSourceItem;
+ (BOOL)automaticallyNotifiesObserversOfSelectedVideoTouchBarInputSourceItem;
+ (id)keyPathsForValuesAffectingVideoTouchBarInputSourceItems;
+ (BOOL)automaticallyNotifiesObserversOfVideoTouchBarInputSourceItems;
+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStopRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanPauseRecording;
+ (id)keyPathsForValuesAffectingCanStartRecording;
+ (BOOL)automaticallyNotifiesObserversOfCanStartRecording;
+ (id)keyPathsForValuesAffectingPaused;
+ (BOOL)automaticallyNotifiesObserversOfPaused;
+ (id)keyPathsForValuesAffectingRecording;
+ (BOOL)automaticallyNotifiesObserversOfRecording;
+ (id)keyPathsForValuesAffectingRecordedFileSize;
+ (BOOL)automaticallyNotifiesObserversOfRecordedFileSize;
+ (id)keyPathsForValuesAffectingRecordedTime;
+ (BOOL)automaticallyNotifiesObserversOfRecordedTime;
- (void).cxx_destruct;
@property(readonly) BOOL canAssociateAudioAndVideoDevices;
- (void)stopDiscoveringWirelessCaptureDevices;
- (void)startDiscoveringWirelessCaptureDevices;
- (void)selectTouchBarInputSourceItem:(id)arg1;
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)startRecording;
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedScreenTouchBarInputSourceItem;
@property(readonly) NSArray *screenTouchBarInputSourceItems;
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedAudioTouchBarInputSourceItem;
@property(readonly) NSArray *audioTouchBarInputSourceItems;
@property(readonly) AVTouchBarCaptureInputSourceItem *selectedVideoTouchBarInputSourceItem;
@property(readonly) NSArray *videoTouchBarInputSourceItems;
@property(readonly) BOOL canStopRecording;
@property(readonly) BOOL canResumeRecording;
@property(readonly) BOOL canPauseRecording;
@property(readonly) BOOL canStartRecording;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isRecording) BOOL recording;
@property(readonly) NSNumber *recordedFileSize;
@property(readonly) double recordedTime;
@property __weak id <AVTouchBarRecordingControlsControlling> externalTouchBarRecordingControlsController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

