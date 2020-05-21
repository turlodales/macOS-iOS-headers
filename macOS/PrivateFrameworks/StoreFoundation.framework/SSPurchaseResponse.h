//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary;

@interface SSPurchaseResponse : NSObject <NSSecureCoding>
{
    NSArray *_downloads;
    NSDictionary *_rawResponse;
    NSDictionary *_metrics;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) NSArray *downloads; // @synthesize downloads=_downloads;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_newDownloadsFromItems:(id)arg1 withDSID:(id)arg2;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;

@end

