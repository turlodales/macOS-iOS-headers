//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSArray;
@protocol _HMTelevisionProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMTelevisionProfile : _HMAccessoryProfile
{
    BOOL _mediaSourceDisplayOrderModifiable;
    NSArray *_mediaSourceDisplayOrder;
    id <_HMTelevisionProfileDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <_HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL mediaSourceDisplayOrderModifiable; // @synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable;
- (void)_handleSourceDisplayOrderUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)messageReceiveQueue;
- (id)messageDestination;
- (id)messageTargetUUID;
- (BOOL)isMediaSourceDisplayOrderModifiable;
@property(retain) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
- (void)_registerNotificationHandlers;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;

@end

