//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject
{
    NSMutableDictionary *_itemTypeCache;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

+ (id)_iWorkUTIs;
+ (id)sharedCache;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *itemTypeCache; // @synthesize itemTypeCache=_itemTypeCache;
- (BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2;
- (BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2;
- (BOOL)_contentTypeIsIWorkType:(id)arg1;
- (unsigned long long)itemTypeForContentType:(id)arg1;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1;
- (id)init;

@end

