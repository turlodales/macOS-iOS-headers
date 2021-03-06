//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_semaphore, SHKShareItem;

__attribute__((visibility("hidden")))
@interface SHKItemAttributeStore : NSObject
{
    id <SHKShareItem> _shareItem;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSDictionary *_attributes;
}

+ (void)notifySpotlightShareItems:(id)arg1 wereSharedWithSharingService:(id)arg2;
+ (struct __MDItem *)MDItemForShareItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(retain, nonatomic) id <SHKShareItem> shareItem; // @synthesize shareItem=_shareItem;
- (void)attributesForShareItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startFectchingAttributes;
- (id)initWithShareItem:(id)arg1;

@end

