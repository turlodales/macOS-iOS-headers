//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject
{
    NSString *_ids;
    unsigned long long _transports;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long transports; // @synthesize transports=_transports;
@property(copy, nonatomic) NSString *ids; // @synthesize ids=_ids;
- (id)description;
- (BOOL)hasAvailableTransports;
- (id)initWithIDS:(id)arg1;

@end

