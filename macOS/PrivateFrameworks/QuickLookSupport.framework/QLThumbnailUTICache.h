//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

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

