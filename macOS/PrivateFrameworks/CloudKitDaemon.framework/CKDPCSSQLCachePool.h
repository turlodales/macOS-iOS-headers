//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDPCSSQLCachePool : NSObject
{
    NSMutableDictionary *_cachesByPath;
    NSMutableDictionary *_checkoutsByPath;
}

+ (id)sharedPool;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *checkoutsByPath; // @synthesize checkoutsByPath=_checkoutsByPath;
@property(retain, nonatomic) NSMutableDictionary *cachesByPath; // @synthesize cachesByPath=_cachesByPath;
- (void)releaseCache:(id)arg1 forContext:(id)arg2;
- (id)cacheForContext:(id)arg1;
- (id)_init;

@end

