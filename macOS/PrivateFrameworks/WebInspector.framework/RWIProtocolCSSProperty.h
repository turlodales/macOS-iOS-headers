//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolCSSSourceRange *range;
@property(nonatomic) long long status;
@property(nonatomic) BOOL parsedOk;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) BOOL implicit;
@property(copy, nonatomic) NSString *priority;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

