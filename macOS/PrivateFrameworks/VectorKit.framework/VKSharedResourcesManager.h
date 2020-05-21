//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, VKSharedResources;

__attribute__((visibility("hidden")))
@interface VKSharedResourcesManager : NSObject
{
    struct mutex _lock;
    VKSharedResources *_sharedResources;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)removeResourceUser;
+ (void)addResourceUser;
+ (id)sharedResources;
+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resources;
- (BOOL)hasResoruces;
- (void)dealloc;
- (id)init;

@end

