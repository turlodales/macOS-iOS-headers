//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *sourceURL;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *text;
- (id)initWithText:(id)arg1 type:(long long)arg2;

@end

