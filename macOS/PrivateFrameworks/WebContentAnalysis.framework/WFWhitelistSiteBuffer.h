//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableSet *_siteSet;
    NSMutableArray *_siteBuffer;
    unsigned long long maxSize;
}

@property(retain) NSMutableArray *siteBuffer; // @synthesize siteBuffer=_siteBuffer;
@property(retain) NSMutableSet *siteSet; // @synthesize siteSet=_siteSet;
- (void)trimToSize:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)count;
@property unsigned long long maxSize;
- (BOOL)containsMetasitePrefixOfURLString:(id)arg1;
- (BOOL)containsURLString:(id)arg1;
- (void)addURLString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

