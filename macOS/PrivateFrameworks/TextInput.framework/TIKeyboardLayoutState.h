//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _hasCandidateKey;
    BOOL _hasAccentKey;
    BOOL _canMultitap;
    BOOL _isAlphabeticPlane;
    BOOL _isKanaPlane;
    BOOL _diacriticForwardCompose;
    BOOL _interfaceIdiomIsPad;
    NSString *_inputMode;
    NSString *_layoutTag;
    long long _userInterfaceIdiom;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL interfaceIdiomIsPad; // @synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property(nonatomic) BOOL diacriticForwardCompose; // @synthesize diacriticForwardCompose=_diacriticForwardCompose;
@property(nonatomic) BOOL isKanaPlane; // @synthesize isKanaPlane=_isKanaPlane;
@property(nonatomic) BOOL isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) BOOL canMultitap; // @synthesize canMultitap=_canMultitap;
@property(nonatomic) BOOL hasAccentKey; // @synthesize hasAccentKey=_hasAccentKey;
@property(nonatomic) BOOL hasCandidateKey; // @synthesize hasCandidateKey=_hasCandidateKey;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (void)setInterfaceIdiomIsPad;
@property(readonly, nonatomic) NSString *softwareLayout;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

