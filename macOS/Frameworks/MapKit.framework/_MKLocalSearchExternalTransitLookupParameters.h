//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CLLocation, NSArray, NSDate, NSString;

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying>
{
    NSArray *_stationCodes;
    NSString *_sourceIdentifier;
    NSDate *_transactionDate;
    CLLocation *_transactionLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(copy, nonatomic) NSArray *stationCodes; // @synthesize stationCodes=_stationCodes;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

