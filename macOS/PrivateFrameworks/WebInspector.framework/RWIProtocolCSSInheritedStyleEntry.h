//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *matchedCSSRules;
@property(retain, nonatomic) RWIProtocolCSSStyle *inlineStyle;
- (id)initWithMatchedCSSRules:(id)arg1;

@end

