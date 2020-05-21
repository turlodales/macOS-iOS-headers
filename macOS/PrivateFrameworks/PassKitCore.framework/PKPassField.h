//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_value;
    long long _type;
    NSString *_key;
    NSString *_label;
    id _unformattedValue;
    NSString *_changeMessage;
    long long _textAlignment;
    long long _cellStyle;
    unsigned long long _row;
    unsigned long long _dataDetectorTypes;
    NSDictionary *_semantics;
    long long _foreignReferenceType;
    NSString *_foreignReferenceIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *foreignReferenceIdentifier; // @synthesize foreignReferenceIdentifier=_foreignReferenceIdentifier;
@property(nonatomic) long long foreignReferenceType; // @synthesize foreignReferenceType=_foreignReferenceType;
@property(copy, nonatomic) NSDictionary *semantics; // @synthesize semantics=_semantics;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;
@property(copy, nonatomic) id unformattedValue; // @synthesize unformattedValue=_unformattedValue;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)asDictionary;
- (void)flushCachedValue;
@property(readonly) __weak NSString *value;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

