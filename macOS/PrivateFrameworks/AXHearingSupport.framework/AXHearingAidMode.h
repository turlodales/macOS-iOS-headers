//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>
{
    unsigned char _index;
    BOOL _isSelected;
    int _ear;
    int syncAttempts;
    NSString *_name;
    long long _category;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) int syncAttempts; // @synthesize syncAttempts;
@property(nonatomic) int ear; // @synthesize ear=_ear;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned char index; // @synthesize index=_index;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (BOOL)isMixingStream;
- (BOOL)isStream;
- (BOOL)isStreamOrMixingStream;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)transportRepresentation;
- (id)initWithRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

