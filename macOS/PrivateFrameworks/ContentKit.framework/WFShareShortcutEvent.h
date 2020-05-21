//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShareShortcutEvent : WFEvent
{
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_sharingDestinationBundleIdentifier;
}

+ (id)serializablePropertyTransformers;
+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sharingDestinationBundleIdentifier; // @synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end

