//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TransparencyTranscriptEvent : NSObject
{
    BOOL _success;
    NSDate *_timestamp;
    NSString *_name;
}

- (void).cxx_destruct;
@property BOOL success; // @synthesize success=_success;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)serialize;
- (id)initWithName:(id)arg1;

@end

