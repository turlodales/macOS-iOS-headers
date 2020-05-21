//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface EWSSRVLookup : NSObject
{
    NSString *_host;
    NSString *_servicePrefix;
    NSArray *_discoveredRecords;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *discoveredRecords; // @synthesize discoveredRecords=_discoveredRecords;
@property(readonly, copy, nonatomic) NSString *servicePrefix; // @synthesize servicePrefix=_servicePrefix;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (BOOL)lookup;
- (id)init;
- (id)initWithServicePrefix:(id)arg1 onHost:(id)arg2;

@end

