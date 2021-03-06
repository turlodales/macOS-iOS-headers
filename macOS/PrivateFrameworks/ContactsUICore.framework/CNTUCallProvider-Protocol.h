//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNHandle, NSSet, NSString;
@protocol CNTUDialRequest;

@protocol CNTUCallProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property(readonly, nonatomic) BOOL supportsVideo;
@property(readonly, nonatomic) BOOL supportsAudio;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedName;
- (id <CNTUDialRequest>)dialRequestForHandle:(CNHandle *)arg1 contact:(CNContact *)arg2 video:(BOOL)arg3;
@end

