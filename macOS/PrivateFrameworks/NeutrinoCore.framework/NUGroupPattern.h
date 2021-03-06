//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUGroupPattern : NUPattern
{
    NSArray *_group;
}

- (void).cxx_destruct;
@property(readonly) NSArray *group; // @synthesize group=_group;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (BOOL)isEqualToGroupPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithGroup:(id)arg1;
- (id)init;

@end

