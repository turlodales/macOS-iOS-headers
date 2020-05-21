//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class CALTimeRange;

@interface CALFreeBusyTime : NSObject <NSSecureCoding>
{
    CALTimeRange *_freeBusyTimeRange;
    int _freeBusyType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property int freeBusyType; // @synthesize freeBusyType=_freeBusyType;
@property(retain) CALTimeRange *freeBusyTimeRange; // @synthesize freeBusyTimeRange=_freeBusyTimeRange;
- (id)description;
- (id)freeBusyDateRange;
- (id)initWithTimeRange:(id)arg1;
- (id)initWithDateRange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

