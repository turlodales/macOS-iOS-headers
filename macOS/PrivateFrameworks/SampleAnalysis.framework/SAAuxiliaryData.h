//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject
{
    SAFanSpeed *_fanSpeed;
    struct **_mountStatus;
    SATimestamp *_timestamp;
}

+ (id)auxiliaryDataForTimestamp:(id)arg1;
- (void).cxx_destruct;
@property(retain) SATimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property struct **mountStatus; // @synthesize mountStatus=_mountStatus;
@property(retain) SAFanSpeed *fanSpeed; // @synthesize fanSpeed=_fanSpeed;
- (void)dealloc;

@end

