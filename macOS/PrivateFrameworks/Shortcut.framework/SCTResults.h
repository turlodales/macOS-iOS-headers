//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<NSUserInterfaceItemSearching>, NSString;

__attribute__((visibility("hidden")))
@interface SCTResults : NSObject
{
    NSString *identifier;
    unsigned long long sequenceNumber;
    NSMutableArray *values;
    NSObject<NSUserInterfaceItemSearching> *handler;
}

@property(retain) NSObject<NSUserInterfaceItemSearching> *handler; // @synthesize handler;
@property(retain) NSMutableArray *values; // @synthesize values;
@property unsigned long long sequenceNumber; // @synthesize sequenceNumber;
@property(retain) NSString *identifier; // @synthesize identifier;
- (void)dealloc;
- (id)description;

@end

