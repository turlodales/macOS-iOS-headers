//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface DurationGroup : NSObject
{
    BOOL _wasChanged;
    unsigned long long _groupId;
    NSDate *_start;
    NSDate *_end;
}

- (void).cxx_destruct;
@property BOOL wasChanged; // @synthesize wasChanged=_wasChanged;
@property(retain) NSDate *end; // @synthesize end=_end;
@property(retain) NSDate *start; // @synthesize start=_start;
@property(readonly) unsigned long long groupId; // @synthesize groupId=_groupId;
- (id)description;
- (id)initWithStart:(id)arg1 end:(id)arg2;

@end

