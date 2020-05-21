//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString;

@interface OSLogMessageComponent : NSObject
{
    NSString *_formatSubstring;
    NSString *_placeholder;
    long long _argumentCategory;
    NSData *_argumentDataValue;
    double _argumentDoubleValue;
    long long _argumentInt64Value;
    NSNumber *_argumentNumberValue;
    NSString *_argumentStringValue;
    unsigned long long _argumentUInt64Value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long argumentUInt64Value; // @synthesize argumentUInt64Value=_argumentUInt64Value;
@property(copy, nonatomic) NSString *argumentStringValue; // @synthesize argumentStringValue=_argumentStringValue;
@property(copy, nonatomic) NSNumber *argumentNumberValue; // @synthesize argumentNumberValue=_argumentNumberValue;
@property(readonly, nonatomic) long long argumentInt64Value; // @synthesize argumentInt64Value=_argumentInt64Value;
@property(readonly, nonatomic) double argumentDoubleValue; // @synthesize argumentDoubleValue=_argumentDoubleValue;
@property(copy, nonatomic) NSData *argumentDataValue; // @synthesize argumentDataValue=_argumentDataValue;
@property(readonly, nonatomic) long long argumentCategory; // @synthesize argumentCategory=_argumentCategory;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *formatSubstring; // @synthesize formatSubstring=_formatSubstring;
- (void)fillWithData:(id)arg1;
- (void)fillWithString:(id)arg1;
- (void)fillWithScalar:(id)arg1;
- (id)initWithDecomposedMessage:(id)arg1 atIndex:(unsigned long long)arg2;

@end

