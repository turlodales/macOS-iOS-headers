//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSArray;

@interface CLSRole : CLSObject
{
    BOOL _isEditable;
    long long _type;
    NSArray *_privileges;
    long long _sourceType;
}

+ (id)stringForRoleType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSArray *privileges; // @synthesize privileges=_privileges;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end

