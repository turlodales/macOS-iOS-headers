//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDStreamDataChunk.h>

@class NSString;

@interface HMDInitialStreamDataChunk : HMDStreamDataChunk
{
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithStreamDataDictionary:(id)arg1;
- (id)initWithData:(id)arg1 isLast:(BOOL)arg2 type:(id)arg3;

@end

