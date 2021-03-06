//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

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

