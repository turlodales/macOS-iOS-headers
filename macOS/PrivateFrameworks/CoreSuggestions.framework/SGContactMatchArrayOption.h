//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGRecordId;

@interface SGContactMatchArrayOption : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;
    NSArray *_matches;
    SGRecordId *_recordId;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToContactMatchArrayOption:(id)arg1;
- (id)initWithRecordId:(id)arg1;
- (id)initWithMatches:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

