//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFIconCache : NSObject
{
    id _reserved_SFIconCache;
}

+ (id)sharedIconCache;
- (id)cachedImageForItemClass:(unsigned int)arg1;
- (id)cachedImageForItem:(struct OpaqueSecKeychainItemRef *)arg1;
- (id)cachedImageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end

