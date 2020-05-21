//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSLocale, NSString;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSLocale *_locale;
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}

+ (BOOL)supportsSecureCoding;
+ (id)smartPunctuationOptionsForLocale:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rightDoubleQuote; // @synthesize rightDoubleQuote=_rightDoubleQuote;
@property(copy, nonatomic) NSString *leftDoubleQuote; // @synthesize leftDoubleQuote=_leftDoubleQuote;
@property(copy, nonatomic) NSString *apostrophe; // @synthesize apostrophe=_apostrophe;
@property(copy, nonatomic) NSString *rightSingleQuote; // @synthesize rightSingleQuote=_rightSingleQuote;
@property(copy, nonatomic) NSString *leftSingleQuote; // @synthesize leftSingleQuote=_leftSingleQuote;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_generateDataFromLocale;
- (id)initWithLocale:(id)arg1;

@end

