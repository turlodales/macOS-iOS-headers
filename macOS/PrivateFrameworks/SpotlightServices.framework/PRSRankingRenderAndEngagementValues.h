//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying>
{
    short _renderValues[6];
    short _engagementValues[6];
}

+ (BOOL)supportsSecureCoding;
- (void)incrementRankingValuesForType:(int)arg1;
- (void)setRankingValues:(short [6])arg1 forType:(int)arg2;
- (BOOL)getRankingValues:(short *)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

