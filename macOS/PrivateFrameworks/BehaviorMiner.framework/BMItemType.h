//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, _DKEventStream;

@interface BMItemType : NSObject <NSCopying>
{
    NSString *_identifier;
    Class _valueClass;
    long long _edge;
    _DKEventStream *_eventStream;
    CDUnknownBlockType _valueExtractBlock;
}

+ (id)allItemTypesDictionary;
+ (id)allItemTypes;
+ (void)unregisterItemType:(id)arg1;
+ (void)registerItemType:(id)arg1;
+ (id)allRegisteredItemTypes;
+ (id)relevanceCoarseIntentHash;
+ (id)relevanceIntentHash;
+ (id)appIntentClass;
+ (id)relevanceCoarseAppActivityHash;
+ (id)relevanceAppActivityHash;
+ (id)appActivityType;
+ (id)firstBacklightAfterWakeup;
+ (id)bluetoothConnectedToDeviceWithAddress;
+ (id)bluetoothConnectedToDeviceWithName;
+ (id)bluetoothConnectedToDevice;
+ (id)mediaGenreStartedPlaying;
+ (id)mediaIsPlaying;
+ (id)isWeekend;
+ (id)dayOfWeek;
+ (id)hourOfDaySlot;
+ (id)hourOfDay;
+ (id)bundleIdOfHostOpenedShareExtension;
+ (id)bundleIdOfShareExtensionOpened;
+ (id)appInFocus;
+ (id)appLaunchedReason;
+ (id)appOpened;
+ (id)locationIdentifier;
+ (id)interactionItemTypes;
+ (id)interactionTargetBundleID;
+ (id)interactionSharingSourceBundleID;
+ (id)interactionTextTopic;
+ (id)interactionUTIType;
+ (id)interactionPhotoLocation;
+ (id)interactionPhotoContact;
+ (id)interactionPhotoScene;
+ (id)interactionRecipients;
+ (id)interactionSender;
+ (id)interactionContentURL;
+ (id)interactionDirection;
+ (id)interactionMechanism;
+ (id)connectedToExternalAudioOutput;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType valueExtractBlock; // @synthesize valueExtractBlock=_valueExtractBlock;
@property(retain, nonatomic) _DKEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(nonatomic) long long edge; // @synthesize edge=_edge;
@property(retain, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)extractEventFromDKEvent:(id)arg1;
- (id)extractItemFromDKEvent:(id)arg1;
- (id)extractValueFromDKEvent:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

