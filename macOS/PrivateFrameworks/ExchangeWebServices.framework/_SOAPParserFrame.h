//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _SOAPParserFrame : NSObject
{
    id _value;
    Class _type;
    NSMutableDictionary *_inlineArraysByPropertyName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *inlineArraysByPropertyName; // @synthesize inlineArraysByPropertyName=_inlineArraysByPropertyName;
@property(retain, nonatomic) Class type; // @synthesize type=_type;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)description;

@end

