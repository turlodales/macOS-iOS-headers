//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRegularExpression, NSString;

@interface _ECSubjectFormatterContext : NSObject
{
    BOOL _prefixLastStrongDirectionalityIsLeftToRight;
    NSRegularExpression *_regex;
    NSString *_localizedPrefix;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL prefixLastStrongDirectionalityIsLeftToRight; // @synthesize prefixLastStrongDirectionalityIsLeftToRight=_prefixLastStrongDirectionalityIsLeftToRight;
@property(readonly, copy, nonatomic) NSString *localizedPrefix; // @synthesize localizedPrefix=_localizedPrefix;
@property(readonly, nonatomic) NSRegularExpression *regex; // @synthesize regex=_regex;
- (id)initWithRegex:(id)arg1 localizedPrefix:(id)arg2;

@end

