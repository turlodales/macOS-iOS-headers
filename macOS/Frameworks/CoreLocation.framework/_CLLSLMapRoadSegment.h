//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray;

@interface _CLLSLMapRoadSegment : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _roadID;
    NSArray *_polylines;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *polylines; // @synthesize polylines=_polylines;
@property(nonatomic) unsigned long long roadID; // @synthesize roadID=_roadID;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

