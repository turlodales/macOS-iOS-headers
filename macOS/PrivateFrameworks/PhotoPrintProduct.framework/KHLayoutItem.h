//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSValue;

@interface KHLayoutItem : NSObject
{
    unsigned long long _type;
    long long _state;
    NSSet *_layoutRects;
    struct CGRect _initialRect;
}

+ (id)layoutItemWithRect:(struct CGRect)arg1 contentType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *layoutRects; // @synthesize layoutRects=_layoutRects;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)debugDescription;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) NSValue *rectValue;

@end

