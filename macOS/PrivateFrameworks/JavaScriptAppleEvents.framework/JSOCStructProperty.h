//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSOCType, NSString;

@interface JSOCStructProperty : NSObject
{
    NSString *_label;
    JSOCType *_type;
}

- (void).cxx_destruct;
@property(readonly) JSOCType *type; // @synthesize type=_type;
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)initWithLabel:(id)arg1 type:(id)arg2;

@end

