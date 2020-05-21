//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSRuleId, RWIProtocolCSSSelectorList, RWIProtocolCSSStyle;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSArray *groupings;
@property(retain, nonatomic) RWIProtocolCSSStyle *style;
@property(nonatomic) long long origin;
@property(nonatomic) int sourceLine;
@property(copy, nonatomic) NSString *sourceURL;
@property(retain, nonatomic) RWIProtocolCSSSelectorList *selectorList;
@property(retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
- (id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;

@end

